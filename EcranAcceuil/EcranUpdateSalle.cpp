#include "EcranUpdateSalle.h"
#include "EcranGerant.h"

//(*InternalHeaders(EcranUpdateSalle)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranUpdateSalle)
const long EcranUpdateSalle::ID_STATICBOX1 = wxNewId();
const long EcranUpdateSalle::ID_STATICBOX2 = wxNewId();
const long EcranUpdateSalle::ID_BUTTON1 = wxNewId();
const long EcranUpdateSalle::ID_STATICTEXT1 = wxNewId();
const long EcranUpdateSalle::ID_TEXTCTRL1 = wxNewId();
const long EcranUpdateSalle::ID_STATICTEXT2 = wxNewId();
const long EcranUpdateSalle::ID_STATICTEXT3 = wxNewId();
const long EcranUpdateSalle::ID_STATICTEXT4 = wxNewId();
const long EcranUpdateSalle::ID_STATICTEXT5 = wxNewId();
const long EcranUpdateSalle::ID_RADIOBOX1 = wxNewId();
const long EcranUpdateSalle::ID_RADIOBOX2 = wxNewId();
const long EcranUpdateSalle::ID_TEXTCTRL3 = wxNewId();
const long EcranUpdateSalle::ID_TEXTCTRL4 = wxNewId();
const long EcranUpdateSalle::ID_TEXTCTRL5 = wxNewId();
const long EcranUpdateSalle::ID_TEXTCTRL6 = wxNewId();
const long EcranUpdateSalle::ID_BUTTON2 = wxNewId();
const long EcranUpdateSalle::ID_BUTTON3 = wxNewId();
const long EcranUpdateSalle::ID_BUTTON4 = wxNewId();
const long EcranUpdateSalle::ID_BUTTON5 = wxNewId();
const long EcranUpdateSalle::ID_STATICTEXT6 = wxNewId();
const long EcranUpdateSalle::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranUpdateSalle,wxDialog)
	//(*EventTable(EcranUpdateSalle)
	//*)
END_EVENT_TABLE()

EcranUpdateSalle::EcranUpdateSalle(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranUpdateSalle)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(600,450), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(0,0,0));
	Panel1->SetBackgroundColour(wxColour(255,255,255));
	StaticBox1 = new wxStaticBox(Panel1, ID_STATICBOX1, _("Salle  "), wxPoint(8,48), wxSize(328,392), 0, _T("ID_STATICBOX1"));
	wxFont StaticBox1Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticBox1->SetFont(StaticBox1Font);
	StaticBox2 = new wxStaticBox(Panel1, ID_STATICBOX2, _("Actions requises  "), wxPoint(368,88), wxSize(216,256), 0, _T("ID_STATICBOX2"));
	wxFont StaticBox2Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticBox2->SetFont(StaticBox2Font);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _(" <<   Return"), wxPoint(496,408), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("N  de la salle :"), wxPoint(16,104), wxSize(136,24), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(136,96), wxSize(48,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Nom :"), wxPoint(72,160), wxSize(56,24), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Superficie :"), wxPoint(48,208), wxSize(88,24), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Nbre de places :"), wxPoint(16,256), wxSize(120,24), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Prix :"), wxPoint(80,296), wxSize(48,32), 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	wxString __wxRadioBoxChoices_1[2] =
	{
		_("Y"),
		_("N")
	};
	RadioBox1 = new wxRadioBox(Panel1, ID_RADIOBOX1, _("Ecran"), wxPoint(32,360), wxSize(105,56), 2, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
	RadioBox1->SetSelection(0);
	wxFont RadioBox1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	RadioBox1->SetFont(RadioBox1Font);
	wxString __wxRadioBoxChoices_2[2] =
	{
		_("Y"),
		_("N")
	};
	RadioBox2 = new wxRadioBox(Panel1, ID_RADIOBOX2, _("Wifi"), wxPoint(168,368), wxSize(97,56), 2, __wxRadioBoxChoices_2, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX2"));
	RadioBox2->SetSelection(0);
	wxFont RadioBox2Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	RadioBox2->SetFont(RadioBox2Font);
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(136,152), wxSize(168,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(136,200), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(136,248), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	TextCtrl6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(136,296), wxSize(128,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Ajouter une salle"), wxPoint(416,128), wxSize(120,34), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont Button2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Retirer  la salle"), wxPoint(416,192), wxSize(120,34), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	wxFont Button3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button3->SetFont(Button3Font);
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("Modifier la salle"), wxPoint(416,264), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	wxFont Button4Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button4->SetFont(Button4Font);
	Button5 = new wxButton(Panel1, ID_BUTTON5, _("OK"), wxPoint(200,96), wxSize(32,24), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Mettez a jour les salles"), wxPoint(184,16), wxSize(240,40), 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(21,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranUpdateSalle::OnButton1Click);
	//*)
}

EcranUpdateSalle::~EcranUpdateSalle()
{
	//(*Destroy(EcranUpdateSalle)
	//*)
}


void EcranUpdateSalle::OnButton1Click(wxCommandEvent& event)
{
    EcranGerant fr(this);
    fr.ShowModal();
}
