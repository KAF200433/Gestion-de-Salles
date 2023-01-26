#include "EcranRechercherVoirSalle.h"

//(*InternalHeaders(EcranRechercherVoirSalle)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranRechercherVoirSalle)
const long EcranRechercherVoirSalle::ID_STATICTEXT1 = wxNewId();
const long EcranRechercherVoirSalle::ID_STATICTEXT2 = wxNewId();
const long EcranRechercherVoirSalle::ID_TEXTCTRL1 = wxNewId();
const long EcranRechercherVoirSalle::ID_STATICTEXT3 = wxNewId();
const long EcranRechercherVoirSalle::ID_STATICTEXT4 = wxNewId();
const long EcranRechercherVoirSalle::ID_STATICTEXT5 = wxNewId();
const long EcranRechercherVoirSalle::ID_STATICTEXT6 = wxNewId();
const long EcranRechercherVoirSalle::ID_TEXTCTRL2 = wxNewId();
const long EcranRechercherVoirSalle::ID_TEXTCTRL3 = wxNewId();
const long EcranRechercherVoirSalle::ID_TEXTCTRL4 = wxNewId();
const long EcranRechercherVoirSalle::ID_TEXTCTRL5 = wxNewId();
const long EcranRechercherVoirSalle::ID_RADIOBOX1 = wxNewId();
const long EcranRechercherVoirSalle::ID_RADIOBOX2 = wxNewId();
const long EcranRechercherVoirSalle::ID_RADIOBOX3 = wxNewId();
const long EcranRechercherVoirSalle::ID_BUTTON1 = wxNewId();
const long EcranRechercherVoirSalle::ID_BUTTON2 = wxNewId();
const long EcranRechercherVoirSalle::ID_BUTTON3 = wxNewId();
const long EcranRechercherVoirSalle::ID_BUTTON4 = wxNewId();
const long EcranRechercherVoirSalle::ID_BUTTON5 = wxNewId();
const long EcranRechercherVoirSalle::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranRechercherVoirSalle,wxDialog)
	//(*EventTable(EcranRechercherVoirSalle)
	//*)
END_EVENT_TABLE()

EcranRechercherVoirSalle::EcranRechercherVoirSalle(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranRechercherVoirSalle)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(450,500), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Recherher"), wxPoint(40,24), wxSize(160,32), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(30,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Salle n"), wxPoint(16,88), wxSize(64,32), 0, _T("ID_STATICTEXT2"));
	StaticText2->SetForegroundColour(wxColour(0,0,0));
	StaticText2->SetBackgroundColour(wxColour(255,255,255));
	wxFont StaticText2Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(88,80), wxSize(56,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Nom :"), wxPoint(120,160), wxSize(56,24), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Superficie :"), wxPoint(80,208), wxSize(88,24), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Nbre de places :"), wxPoint(48,256), wxSize(128,24), 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Prix :"), wxPoint(120,304), wxSize(56,24), 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(184,152), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(184,200), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(184,248), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(184,296), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	wxString __wxRadioBoxChoices_1[2] =
	{
		_("Y"),
		_("N")
	};
	RadioBox1 = new wxRadioBox(Panel1, ID_RADIOBOX1, _("Ecran"), wxPoint(24,336), wxSize(104,56), 2, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
	RadioBox1->SetSelection(0);
	wxFont RadioBox1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	RadioBox1->SetFont(RadioBox1Font);
	wxString __wxRadioBoxChoices_2[2] =
	{
		_("Y"),
		_("N")
	};
	RadioBox2 = new wxRadioBox(Panel1, ID_RADIOBOX2, _("Wifi"), wxPoint(160,336), wxSize(96,56), 2, __wxRadioBoxChoices_2, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX2"));
	RadioBox2->SetSelection(0);
	wxFont RadioBox2Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	RadioBox2->SetFont(RadioBox2Font);
	wxString __wxRadioBoxChoices_3[2] =
	{
		_("Non Reservee"),
		_("Reservee")
	};
	RadioBox3 = new wxRadioBox(Panel1, ID_RADIOBOX3, _("Statut"), wxPoint(24,400), wxSize(240,56), 2, __wxRadioBoxChoices_3, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX3"));
	wxFont RadioBox3Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	RadioBox3->SetFont(RadioBox3Font);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Plus d\'infos"), wxPoint(232,456), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("OK"), wxPoint(344,456), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont Button2Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("+"), wxPoint(152,80), wxSize(32,24), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("RAZ"), wxPoint(24,120), wxSize(40,24), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	Button4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BACKGROUND));
	Button4->SetBackgroundColour(wxColour(47,81,124));
	Button5 = new wxButton(Panel1, ID_BUTTON5, _("Voir"), wxPoint(200,80), wxSize(48,24), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	wxFont Button5Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button5->SetFont(Button5Font);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

EcranRechercherVoirSalle::~EcranRechercherVoirSalle()
{
	//(*Destroy(EcranRechercherVoirSalle)
	//*)
}

