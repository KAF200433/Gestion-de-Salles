#include "EcranInfoPersoClient.h"
#include "EcranClient.h"

//(*InternalHeaders(EcranInfoPersoClient)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranInfoPersoClient)
const long EcranInfoPersoClient::ID_STATICBOX1 = wxNewId();
const long EcranInfoPersoClient::ID_STATICTEXT1 = wxNewId();
const long EcranInfoPersoClient::ID_STATICTEXT2 = wxNewId();
const long EcranInfoPersoClient::ID_STATICTEXT3 = wxNewId();
const long EcranInfoPersoClient::ID_STATICTEXT4 = wxNewId();
const long EcranInfoPersoClient::ID_STATICTEXT5 = wxNewId();
const long EcranInfoPersoClient::ID_STATICTEXT6 = wxNewId();
const long EcranInfoPersoClient::ID_STATICTEXT7 = wxNewId();
const long EcranInfoPersoClient::ID_TEXTCTRL1 = wxNewId();
const long EcranInfoPersoClient::ID_TEXTCTRL2 = wxNewId();
const long EcranInfoPersoClient::ID_TEXTCTRL3 = wxNewId();
const long EcranInfoPersoClient::ID_TEXTCTRL4 = wxNewId();
const long EcranInfoPersoClient::ID_TEXTCTRL5 = wxNewId();
const long EcranInfoPersoClient::ID_TEXTCTRL6 = wxNewId();
const long EcranInfoPersoClient::ID_TEXTCTRL7 = wxNewId();
const long EcranInfoPersoClient::ID_BUTTON1 = wxNewId();
const long EcranInfoPersoClient::ID_BUTTON2 = wxNewId();
const long EcranInfoPersoClient::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranInfoPersoClient,wxDialog)
	//(*EventTable(EcranInfoPersoClient)
	//*)
END_EVENT_TABLE()

EcranInfoPersoClient::EcranInfoPersoClient(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranInfoPersoClient)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(480,390), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(0,0,0));
	Panel1->SetBackgroundColour(wxColour(255,255,255));
	StaticBox1 = new wxStaticBox(Panel1, ID_STATICBOX1, _("Mes informations Personnelles"), wxPoint(8,0), wxSize(460,376), 0, _T("ID_STATICBOX1"));
	wxFont StaticBox1Font(26,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticBox1->SetFont(StaticBox1Font);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Nom :"), wxPoint(48,128), wxSize(48,24), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Prenoms :"), wxPoint(24,176), wxSize(80,24), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Username :"), wxPoint(24,216), wxSize(88,24), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Password :"), wxPoint(24,272), wxSize(88,24), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Birthday :"), wxPoint(224,32), wxSize(80,24), 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Address :"), wxPoint(232,80), wxSize(80,24), 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Cel :"), wxPoint(288,128), wxSize(40,24), 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(112,120), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(112,168), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(112,216), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(112,272), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(312,32), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	TextCtrl6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(312,72), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	TextCtrl7 = new wxTextCtrl(Panel1, ID_TEXTCTRL7, wxEmptyString, wxPoint(328,128), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Close"), wxPoint(24,328), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Save"), wxPoint(360,328), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont Button2Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranInfoPersoClient::OnButton1Click);
	//*)
}

EcranInfoPersoClient::~EcranInfoPersoClient()
{
	//(*Destroy(EcranInfoPersoClient)
	//*)
}


void EcranInfoPersoClient::OnButton1Click(wxCommandEvent& event)
{
    EcranClient fr(this);
    fr.ShowModal();
}
