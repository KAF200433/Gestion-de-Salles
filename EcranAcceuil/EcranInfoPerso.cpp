#include "EcranInfoPerso.h"
#include "EcranGerant.h"

//(*InternalHeaders(EcranInfoPerso)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranInfoPerso)
const long EcranInfoPerso::ID_STATICBOX1 = wxNewId();
const long EcranInfoPerso::ID_STATICBOX2 = wxNewId();
const long EcranInfoPerso::ID_STATICBOX3 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT1 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT2 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT3 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT4 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT5 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT6 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT7 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL1 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL2 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL3 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL4 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL5 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL6 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL7 = wxNewId();
const long EcranInfoPerso::ID_BUTTON1 = wxNewId();
const long EcranInfoPerso::ID_BUTTON2 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT8 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT9 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT10 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT11 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT12 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL8 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL9 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL10 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL11 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL12 = wxNewId();
const long EcranInfoPerso::ID_STATICTEXT13 = wxNewId();
const long EcranInfoPerso::ID_TEXTCTRL13 = wxNewId();
const long EcranInfoPerso::ID_BUTTON3 = wxNewId();
const long EcranInfoPerso::ID_BUTTON4 = wxNewId();
const long EcranInfoPerso::ID_BUTTON5 = wxNewId();
const long EcranInfoPerso::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranInfoPerso,wxDialog)
	//(*EventTable(EcranInfoPerso)
	//*)
END_EVENT_TABLE()

EcranInfoPerso::EcranInfoPerso(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranInfoPerso)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(500,720), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(0,0,0));
	Panel1->SetBackgroundColour(wxColour(255,255,255));
	StaticBox1 = new wxStaticBox(Panel1, ID_STATICBOX1, _("Informations Personnelles"), wxPoint(10,10), wxSize(480,700), 0, _T("ID_STATICBOX1"));
	wxFont StaticBox1Font(23,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticBox1->SetFont(StaticBox1Font);
	StaticBox2 = new wxStaticBox(Panel1, ID_STATICBOX2, _("Gérant"), wxPoint(20,56), wxSize(452,324), 0, _T("ID_STATICBOX2"));
	wxFont StaticBox2Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticBox2->SetFont(StaticBox2Font);
	StaticBox3 = new wxStaticBox(Panel1, ID_STATICBOX3, _("Client    "), wxPoint(20,392), wxSize(460,304), 0, _T("ID_STATICBOX3"));
	wxFont StaticBox3Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticBox3->SetFont(StaticBox3Font);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Nom :"), wxPoint(56,88), wxSize(56,24), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Prenom :"), wxPoint(40,128), wxSize(72,24), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Username :"), wxPoint(24,176), wxSize(96,24), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Password :"), wxPoint(32,224), wxSize(88,24), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Birthdate :"), wxPoint(32,264), wxSize(88,24), 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Address :"), wxPoint(48,312), wxSize(80,24), 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Cel :"), wxPoint(88,352), wxSize(40,24), 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(128,80), wxSize(160,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(128,120), wxSize(160,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(128,168), wxSize(160,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(128,216), wxSize(160,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(128,256), wxSize(160,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	TextCtrl6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(128,304), wxSize(160,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	TextCtrl7 = new wxTextCtrl(Panel1, ID_TEXTCTRL7, wxEmptyString, wxPoint(128,344), wxSize(160,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Save"), wxPoint(368,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Close"), wxPoint(368,328), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont Button2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	StaticText8 = new wxStaticText(Panel1, ID_STATICTEXT8, _("Nom :"), wxPoint(56,456), wxSize(64,24), 0, _T("ID_STATICTEXT8"));
	wxFont StaticText8Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);
	StaticText9 = new wxStaticText(Panel1, ID_STATICTEXT9, _("Prenoms :"), wxPoint(40,504), wxSize(80,24), 0, _T("ID_STATICTEXT9"));
	wxFont StaticText9Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText9->SetFont(StaticText9Font);
	StaticText10 = new wxStaticText(Panel1, ID_STATICTEXT10, _("Address :"), wxPoint(48,552), wxSize(72,24), 0, _T("ID_STATICTEXT10"));
	wxFont StaticText10Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText10->SetFont(StaticText10Font);
	StaticText11 = new wxStaticText(Panel1, ID_STATICTEXT11, _("Birthdate :"), wxPoint(32,592), wxSize(88,24), 0, _T("ID_STATICTEXT11"));
	wxFont StaticText11Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText11->SetFont(StaticText11Font);
	StaticText12 = new wxStaticText(Panel1, ID_STATICTEXT12, _("Cel :"), wxPoint(72,632), wxSize(40,24), 0, _T("ID_STATICTEXT12"));
	wxFont StaticText12Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText12->SetFont(StaticText12Font);
	TextCtrl8 = new wxTextCtrl(Panel1, ID_TEXTCTRL8, wxEmptyString, wxPoint(128,448), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	TextCtrl9 = new wxTextCtrl(Panel1, ID_TEXTCTRL9, wxEmptyString, wxPoint(128,496), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	TextCtrl10 = new wxTextCtrl(Panel1, ID_TEXTCTRL10, wxEmptyString, wxPoint(128,544), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	TextCtrl11 = new wxTextCtrl(Panel1, ID_TEXTCTRL11, wxEmptyString, wxPoint(128,592), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	TextCtrl12 = new wxTextCtrl(Panel1, ID_TEXTCTRL12, wxEmptyString, wxPoint(128,632), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	StaticText13 = new wxStaticText(Panel1, ID_STATICTEXT13, _("Username"), wxPoint(224,416), wxSize(96,16), 0, _T("ID_STATICTEXT13"));
	wxFont StaticText13Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText13->SetFont(StaticText13Font);
	TextCtrl13 = new wxTextCtrl(Panel1, ID_TEXTCTRL13, wxEmptyString, wxPoint(312,408), wxSize(160,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Valider"), wxPoint(384,440), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("Retirer"), wxPoint(280,648), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	wxFont Button4Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button4->SetFont(Button4Font);
	Button5 = new wxButton(Panel1, ID_BUTTON5, _("OK"), wxPoint(384,648), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	wxFont Button5Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button5->SetFont(Button5Font);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranInfoPerso::OnButton2Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranInfoPerso::OnButton5Click);
	//*)
}

EcranInfoPerso::~EcranInfoPerso()
{
	//(*Destroy(EcranInfoPerso)
	//*)
}


void EcranInfoPerso::OnButton2Click(wxCommandEvent& event)
{
    EcranGerant fr(this);
    fr.ShowModal();
}

void EcranInfoPerso::OnButton5Click(wxCommandEvent& event)
{
    EcranGerant fr(this);
    fr.ShowModal();
}
