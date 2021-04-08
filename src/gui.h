///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Jan 12 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/filepicker.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class GUIDialog
///////////////////////////////////////////////////////////////////////////////
class GUIDialog : public wxDialog
{
	private:

	protected:
		wxNotebook* m_notebook;
		wxPanel* m_panelConversion;
		wxStaticText* m_staticText2;
		wxFilePickerCtrl* m_filePickerInputImage;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrlFileInfo;
		wxStaticText* m_staticText3;
		wxFilePickerCtrl* m_filePickerOutputImage;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrlOutputLog;
		wxButton* m_buttonConvert;
		wxPanel* m_panelColorSettings;
		wxStaticText* m_staticText4;
		wxFilePickerCtrl* m_filePickerInputRGB;
		wxStaticText* m_staticText5;
		wxFilePickerCtrl* m_filePickerOutputCMYK;
		wxStaticText* m_staticText71;

		// Virtual event handlers, override them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void onPageChange( wxNotebookEvent& event ) { event.Skip(); }
		virtual void onInputFileChange( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void onConvertClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		GUIDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("RGB to CMYK Converter"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 750,550 ), long style = wxCAPTION|wxCLOSE_BOX|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER );
		~GUIDialog();

};

