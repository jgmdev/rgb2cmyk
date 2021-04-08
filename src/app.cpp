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

#include "app.h"
#include "main.h"

IMPLEMENT_APP(rgb2cmykApp);

bool rgb2cmykApp::OnInit()
{
    rgb2cmykDialog* dlg = new rgb2cmykDialog(nullptr);
    dlg->Show();

    return true;
}
