/***************************************************************
 * Author:    Jefferson Gonzalez (jgmdev@gmail.com)
 * Created:   2021-04-07
 * Copyright: Jefferson Gonzalez (https://github.com/jgmdev)
 * License:   GPLv3 (https://www.gnu.org/licenses/gpl-3.0.html)
 **************************************************************/

#ifndef RGB2CMYKMAIN_H
#define RGB2CMYKMAIN_H

#include "app.h"
#include "gui.h"

class rgb2cmykDialog: public GUIDialog
{
    public:
        rgb2cmykDialog(wxDialog *dlg);
        ~rgb2cmykDialog();
    private:
        bool m_validImage;

        bool commandExists(const wxString& command);
        wxString arrayToString(const wxArrayString& strings);
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void onConvertClick(wxCommandEvent& event);
        virtual void onInputFileChange(wxFileDirPickerEvent& event);
        virtual void onPageChange(wxNotebookEvent& event);
};

#endif // RGB2CMYKMAIN_H
