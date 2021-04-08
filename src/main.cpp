/***************************************************************
 * Author:    Jefferson Gonzalez (jgmdev@gmail.com)
 * Created:   2021-04-07
 * Copyright: Jefferson Gonzalez (https://github.com/jgmdev)
 * License:   GPLv3 (https://www.gnu.org/licenses/gpl-3.0.html)
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wx/msgdlg.h"
#include "main.h"

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

rgb2cmykDialog::rgb2cmykDialog(wxDialog *dlg)
    : GUIDialog(dlg)
{
    m_validImage = false;

    wxFileName rgbFile;
    rgbFile.Assign("/usr/share/color/icc/colord", "sRGB.icc");
    m_filePickerInputRGB->SetFileName(rgbFile);
    m_filePickerInputRGB->UpdateTextCtrlFromPicker();

    wxFileName cmykFile;
    cmykFile.Assign("/usr/share/color/icc/colord", "FOGRA28L_webcoated.icc");
    m_filePickerOutputCMYK->SetFileName(cmykFile);
    m_filePickerOutputCMYK->UpdateTextCtrlFromPicker();
}

rgb2cmykDialog::~rgb2cmykDialog()
{
}

void rgb2cmykDialog::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void rgb2cmykDialog::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

bool rgb2cmykDialog::commandExists(const wxString& command)
{
    wxString which;
    which += "which " +  command;

    wxArrayString output;
    wxArrayString errors;
    wxExecute(which, output, errors);

    wxString output_text = arrayToString(output);
    wxString error_text = arrayToString(errors);

    if(output_text != "")
        return true;

    return false;
}

wxString rgb2cmykDialog::arrayToString(const wxArrayString& strings)
{
    wxString result;

    for(size_t i=0; i<strings.Count(); i++)
    {
        result += strings[i] + "\n";
    }

    return result;
}

void rgb2cmykDialog::onConvertClick(wxCommandEvent& event)
{
    if(!commandExists("convert"))
    {
        wxMessageBox(
            "You need to install imagemagick to use this application.",
            "Error: missing convert command"
        );
        return;
    }

    if(m_filePickerInputImage->GetFileName().GetFullPath() == "")
    {
        wxMessageBox("Please select the input image file.");
        return;
    }
    if(m_filePickerOutputImage->GetFileName().GetFullPath() == "")
    {
        wxMessageBox("Please specify the output image file.");
        return;
    }
    if(m_filePickerInputRGB->GetFileName().GetFullPath() == "")
    {
        wxMessageBox("Please specify the input image RGB profile.");
        return;
    }
    if(m_filePickerOutputCMYK->GetFileName().GetFullPath() == "")
    {
        wxMessageBox("Please specify the output image CMYK profile.");
        return;
    }

    if(!m_validImage)
    {
        wxMessageBox(
            "Please provide a valid input image format.",
            "Error: invalid input image",
            wxICON_ERROR|wxOK|wxCENTRE
        );

        return;
    }

    wxString command;
    command += "convert \"" + m_filePickerInputImage->GetFileName().GetFullPath() + "\" ";
    command += "-profile \"" + m_filePickerInputRGB->GetFileName().GetFullPath() + "\" ";
    command += "-profile \"" + m_filePickerOutputCMYK->GetFileName().GetFullPath() + "\" ";
    command += "\"" + m_filePickerOutputImage->GetFileName().GetFullPath() + "\"";

    wxArrayString output;
    wxArrayString errors;
    wxExecute(command, output, errors);

    wxString output_text = arrayToString(output);
    wxString error_text = arrayToString(errors);

    if (output.Count() == 0 && errors.Count() == 0)
    {
        m_textCtrlOutputLog->SetValue("Converted!");
    }
    else
    {
        m_textCtrlOutputLog->SetValue(output_text + error_text);
        m_textCtrlOutputLog->ScrollLines(output.Count());
    }
}

void rgb2cmykDialog::onInputFileChange(wxFileDirPickerEvent& event)
{
    if(!commandExists("identify"))
    {
        wxMessageBox(
            "Could not retrieve image file info because the \"identify\" "
            "imagemagick utility is not installed.",
            "Error: missing identify command",
            wxICON_ERROR|wxOK|wxCENTRE
        );

        return;
    }

    wxString command;
    command += "identify -verbose ";
    command += "\"" + event.GetPath() + "\"";

    wxArrayString output;
    wxArrayString errors;
    wxExecute(command, output, errors);

    wxString output_text = arrayToString(output);
    wxString error_text = arrayToString(errors);

    if(error_text == "")
    {
        m_validImage = true;
        m_textCtrlFileInfo->SetValue(output_text);
    }
    else
    {
        m_validImage = false;
        m_textCtrlFileInfo->SetValue(error_text);
    }
}

void rgb2cmykDialog::onPageChange(wxNotebookEvent& event)
{
    // Recalculate box sizers
    SetSize(751, 550);
}
