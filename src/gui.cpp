///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Jan 12 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

GUIDialog::GUIDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 750,550 ), wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_notebook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panelConversion = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_staticText2 = new wxStaticText( m_panelConversion, wxID_ANY, wxT("Input File:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer4->Add( m_staticText2, 0, wxALL, 5 );

	m_filePickerInputImage = new wxFilePickerCtrl( m_panelConversion, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("Image files|*.jpg;*.jpe;*.jpeg;*.svg;*.bmp;*.gif;*.tif;*.tiff;*.png|JPG Files (*.jpg;*.jpe;*.jpeg)|*.jpg;*.jpe;*.jpeg|BMP and GIF files (*.bmp;*.gif)|*.bmp;*.gif|PNG files (*.png)|*.png|SVG files (*.svg)|*.svg|Tiff files (*.tif;*.tiff)|*.tif;*.tiff|All files (*.*)|*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_FILE_MUST_EXIST );
	m_filePickerInputImage->SetToolTip( wxT("image file to convert") );

	bSizer4->Add( m_filePickerInputImage, 0, wxALL|wxEXPAND, 5 );

	m_staticText6 = new wxStaticText( m_panelConversion, wxID_ANY, wxT("File info:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer4->Add( m_staticText6, 0, wxALL, 5 );

	m_textCtrlFileInfo = new wxTextCtrl( m_panelConversion, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTE_MULTILINE|wxTE_READONLY );
	m_textCtrlFileInfo->SetToolTip( wxT("details about the input file") );

	bSizer4->Add( m_textCtrlFileInfo, 1, wxALL|wxEXPAND, 5 );


	bSizer3->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	m_staticText3 = new wxStaticText( m_panelConversion, wxID_ANY, wxT("Output File:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer5->Add( m_staticText3, 0, wxALL, 5 );

	m_filePickerOutputImage = new wxFilePickerCtrl( m_panelConversion, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OVERWRITE_PROMPT|wxFLP_SAVE|wxFLP_USE_TEXTCTRL );
	m_filePickerOutputImage->SetToolTip( wxT("set the output file extension to the one required for printing") );

	bSizer5->Add( m_filePickerOutputImage, 0, wxALL|wxEXPAND, 5 );

	m_staticText7 = new wxStaticText( m_panelConversion, wxID_ANY, wxT("Log:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer5->Add( m_staticText7, 0, wxALL, 5 );

	m_textCtrlOutputLog = new wxTextCtrl( m_panelConversion, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTE_MULTILINE|wxTE_READONLY );
	m_textCtrlOutputLog->SetToolTip( wxT("image conversion log") );

	bSizer5->Add( m_textCtrlOutputLog, 1, wxALL|wxEXPAND, 5 );


	bSizer3->Add( bSizer5, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );


	bSizer9->Add( 0, 10, 1, wxEXPAND, 5 );

	m_buttonConvert = new wxButton( m_panelConversion, wxID_ANY, wxT("Convert"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_buttonConvert, 0, wxALIGN_BOTTOM|wxALIGN_CENTER|wxALL|wxEXPAND, 5 );


	bSizer3->Add( bSizer9, 0, wxEXPAND, 5 );


	m_panelConversion->SetSizer( bSizer3 );
	m_panelConversion->Layout();
	bSizer3->Fit( m_panelConversion );
	m_notebook->AddPage( m_panelConversion, wxT("Conversion"), true );
	m_panelColorSettings = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( m_panelColorSettings, wxID_ANY, wxT("Input File RGB Profile:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer7->Add( m_staticText4, 0, wxALL|wxEXPAND, 5 );

	m_filePickerInputRGB = new wxFilePickerCtrl( m_panelColorSettings, wxID_ANY, wxT("/usr/share/color/icc/colord/sRGB.icc"), wxT("Select a file"), wxT("Color Profile (*.icc)|*.icc"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE|wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL );
	m_filePickerInputRGB->SetToolTip( wxT("color profile of input image") );

	bSizer7->Add( m_filePickerInputRGB, 0, wxALL|wxEXPAND, 5 );


	bSizer6->Add( bSizer7, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );


	bSizer8->Add( 0, 20, 0, wxEXPAND, 5 );

	m_staticText5 = new wxStaticText( m_panelColorSettings, wxID_ANY, wxT("Output File CMYK Profile:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer8->Add( m_staticText5, 0, wxALL|wxEXPAND, 5 );

	m_filePickerOutputCMYK = new wxFilePickerCtrl( m_panelColorSettings, wxID_ANY, wxT("/usr/share/color/icc/colord/FOGRA28L_webcoated.icc"), wxT("Select a file"), wxT("Color Profile (*.icc)|*.icc"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE|wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL );
	m_filePickerOutputCMYK->SetToolTip( wxT("color profile for output image") );

	bSizer8->Add( m_filePickerOutputCMYK, 0, wxALL|wxEXPAND, 5 );

	m_staticText71 = new wxStaticText( m_panelColorSettings, wxID_ANY, wxT("\nNote: \n\nThe output CMYK profile file is set by default to FOGRA28L_webcoated.icc but you may also use the new replacement for this profile which is FOGRA45L_lwc.icc. \n\nAlso, if unsure about the input image RGB icc profile file, use the default sRGB.icc profile."), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText71->Wrap( -1 );
	bSizer8->Add( m_staticText71, 1, wxALL|wxEXPAND, 5 );


	bSizer6->Add( bSizer8, 1, wxEXPAND, 5 );


	m_panelColorSettings->SetSizer( bSizer6 );
	m_panelColorSettings->Layout();
	bSizer6->Fit( m_panelColorSettings );
	m_notebook->AddPage( m_panelColorSettings, wxT("Color Settings"), false );

	bSizer1->Add( m_notebook, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
	m_notebook->Connect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( GUIDialog::onPageChange ), NULL, this );
	m_filePickerInputImage->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( GUIDialog::onInputFileChange ), NULL, this );
	m_buttonConvert->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::onConvertClick ), NULL, this );
}

GUIDialog::~GUIDialog()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIDialog::OnClose ) );
	m_notebook->Disconnect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( GUIDialog::onPageChange ), NULL, this );
	m_filePickerInputImage->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( GUIDialog::onInputFileChange ), NULL, this );
	m_buttonConvert->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIDialog::onConvertClick ), NULL, this );

}
