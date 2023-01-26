#include "EcranHistorique.h"
#include "EcranGerant.h"

//(*InternalHeaders(EcranHistorique)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranHistorique)
const long EcranHistorique::ID_STATICTEXT1 = wxNewId();
const long EcranHistorique::ID_STATICTEXT2 = wxNewId();
const long EcranHistorique::ID_STATICTEXT3 = wxNewId();
const long EcranHistorique::ID_STATICTEXT4 = wxNewId();
const long EcranHistorique::ID_STATICTEXT5 = wxNewId();
const long EcranHistorique::ID_STATICTEXT6 = wxNewId();
const long EcranHistorique::ID_STATICTEXT7 = wxNewId();
const long EcranHistorique::ID_BUTTON1 = wxNewId();
const long EcranHistorique::ID_BUTTON2 = wxNewId();
const long EcranHistorique::ID_BUTTON3 = wxNewId();
const long EcranHistorique::ID_TEXTCTRL1 = wxNewId();
const long EcranHistorique::ID_TEXTCTRL2 = wxNewId();
const long EcranHistorique::ID_TEXTCTRL3 = wxNewId();
const long EcranHistorique::ID_TEXTCTRL4 = wxNewId();
const long EcranHistorique::ID_TEXTCTRL5 = wxNewId();
const long EcranHistorique::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranHistorique,wxDialog)
	//(*EventTable(EcranHistorique)
	//*)
END_EVENT_TABLE()

EcranHistorique::EcranHistorique(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranHistorique)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(1000,450), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(0,0,0));
	Panel1->SetBackgroundColour(wxColour(255,255,255));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Historique des reservations"), wxPoint(48,24), wxSize(280,32), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(21,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Nom"), wxPoint(48,88), wxSize(56,32), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Prenom"), wxPoint(192,88), wxSize(72,24), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Username"), wxPoint(352,88), wxSize(104,24), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Salle n°"), wxPoint(536,88), wxSize(61,24), 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Facture"), wxPoint(688,88), wxSize(80,24), 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Date"), wxPoint(848,88), wxSize(53,24), 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Return"), wxPoint(856,400), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Previous"), wxPoint(728,24), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont Button2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Next"), wxPoint(840,24), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	wxFont Button3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button3->SetFont(Button3Font);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(24,128), wxSize(960,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(24,176), wxSize(960,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(24,232), wxSize(960,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(24,280), wxSize(960,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(24,344), wxSize(960,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranHistorique::OnButton1Click);
	//*)
}

EcranHistorique::~EcranHistorique()
{
	//(*Destroy(EcranHistorique)
	//*)
}


void EcranHistorique::OnButton1Click(wxCommandEvent& event)
{
 EcranGerant fr(this);
    fr.ShowModal();
}
