/***************************************************************
 * Name:      EcranAcceuilMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    KAF (kotanmiamedeflorian@gmail.com)
 * Created:   2023-01-25
 * Copyright: KAF ()
 * License:
 **************************************************************/

#include "EcranAcceuilMain.h"
#include <wx/msgdlg.h>
#include "EcranConnexion.h"
//(*InternalHeaders(EcranAcceuilFrame)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

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

//(*IdInit(EcranAcceuilFrame)
const long EcranAcceuilFrame::ID_STATICTEXT1 = wxNewId();
const long EcranAcceuilFrame::ID_STATICBITMAP1 = wxNewId();
const long EcranAcceuilFrame::ID_BUTTON1 = wxNewId();
const long EcranAcceuilFrame::ID_STATICTEXT2 = wxNewId();
const long EcranAcceuilFrame::ID_PANEL1 = wxNewId();
const long EcranAcceuilFrame::idMenuQuit = wxNewId();
const long EcranAcceuilFrame::idMenuAbout = wxNewId();
const long EcranAcceuilFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranAcceuilFrame,wxFrame)
    //(*EventTable(EcranAcceuilFrame)
    //*)
END_EVENT_TABLE()

EcranAcceuilFrame::EcranAcceuilFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(EcranAcceuilFrame)
    wxBoxSizer* BoxSizer1;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetBackgroundColour(wxColour(197,249,36));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(450,550), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetForegroundColour(wxColour(0,0,0));
    Panel1->SetBackgroundColour(wxColour(229,229,229));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Welcome  !!!"), wxPoint(120,24), wxSize(216,32), wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    StaticText1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BACKGROUND));
    wxFont StaticText1Font(25,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("TeX Gyre Schola Math"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kaf/Documents/ProjetC++2/logo/logo.png")).Rescale(wxSize(336,300).GetWidth(),wxSize(336,300).GetHeight())), wxPoint(64,72), wxSize(336,300), 0, _T("ID_STATICBITMAP1"));
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Next  >>"), wxPoint(296,480), wxSize(133,42), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont Button1Font(14,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Reserve Room"), wxPoint(160,264), wxSize(144,32), 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranAcceuilFrame::OnButton1Click);
    Panel1->Connect(wxEVT_PAINT,(wxObjectEventFunction)&EcranAcceuilFrame::OnPanel1Paint,0,this);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranAcceuilFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&EcranAcceuilFrame::OnAbout);
    //*)
}

EcranAcceuilFrame::~EcranAcceuilFrame()
{
    //(*Destroy(EcranAcceuilFrame)
    //*)
}

void EcranAcceuilFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EcranAcceuilFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void EcranAcceuilFrame::OnButton1Click(wxCommandEvent& event)
{
    EcranConnexion fr(this);
    fr.ShowModal();
}

void EcranAcceuilFrame::OnPanel1Paint(wxPaintEvent& event)
{
}
