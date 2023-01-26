#include "EcranGerant.h"
#include "EcranReservation.h"
#include "EcranRechercherVoirSalle.h"
#include "EcranUpdateSalle.h"
#include "EcranFacture.h"
#include "EcranInfoPerso.h"
#include "EcranHistorique.h"
//(*InternalHeaders(EcranGerant)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranGerant)
const long EcranGerant::ID_STATICBITMAP1 = wxNewId();
const long EcranGerant::ID_STATICTEXT1 = wxNewId();
const long EcranGerant::ID_BUTTON1 = wxNewId();
const long EcranGerant::ID_BUTTON2 = wxNewId();
const long EcranGerant::ID_BUTTON3 = wxNewId();
const long EcranGerant::ID_BUTTON4 = wxNewId();
const long EcranGerant::ID_BUTTON5 = wxNewId();
const long EcranGerant::ID_BUTTON6 = wxNewId();
const long EcranGerant::ID_BUTTON7 = wxNewId();
const long EcranGerant::ID_BUTTON8 = wxNewId();
const long EcranGerant::ID_BUTTON9 = wxNewId();
const long EcranGerant::ID_BUTTON10 = wxNewId();
const long EcranGerant::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranGerant,wxDialog)
	//(*EventTable(EcranGerant)
	//*)
END_EVENT_TABLE()

EcranGerant::EcranGerant(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranGerant)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(550,600), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kaf/Documents/ProjetC++2/logo/gérant-majoritaire-sarl.jpg")).Rescale(wxSize(550,600).GetWidth(),wxSize(550,600).GetHeight())), wxDefaultPosition, wxSize(550,600), 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Gerant"), wxPoint(208,40), wxSize(152,32), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(28,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Faire une nouvelle \nreservation"), wxPoint(40,112), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Annuler une reservation\n    en cours"), wxPoint(312,112), wxSize(224,60), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont Button2Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Voir les salles"), wxPoint(40,200), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	wxFont Button3Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button3->SetFont(Button3Font);
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("Rechercher une salle"), wxPoint(336,200), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	wxFont Button4Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button4->SetFont(Button4Font);
	Button5 = new wxButton(Panel1, ID_BUTTON5, _("Informations personnelles\n    Gerant/Client"), wxPoint(48,304), wxSize(208,60), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	wxFont Button5Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button5->SetFont(Button5Font);
	Button6 = new wxButton(Panel1, ID_BUTTON6, _("Historique des reservations"), wxPoint(328,304), wxSize(208,60), 0, wxDefaultValidator, _T("ID_BUTTON6"));
	wxFont Button6Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button6->SetFont(Button6Font);
	Button7 = new wxButton(Panel1, ID_BUTTON7, _("Facturer"), wxPoint(336,400), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON7"));
	wxFont Button7Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button7->SetFont(Button7Font);
	Button8 = new wxButton(Panel1, ID_BUTTON8, _("Mise a jour Salle"), wxPoint(48,400), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON8"));
	wxFont Button8Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button8->SetFont(Button8Font);
	Button9 = new wxButton(Panel1, ID_BUTTON9, _("Retirer Client"), wxPoint(48,504), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON9"));
	wxFont Button9Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button9->SetFont(Button9Font);
	Button10 = new wxButton(Panel1, ID_BUTTON10, _("Log out"), wxPoint(432,552), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
	wxFont Button10Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button10->SetFont(Button10Font);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranGerant::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranGerant::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranGerant::OnButton3Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranGerant::OnButton4Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranGerant::OnButton5Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranGerant::OnButton6Click);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranGerant::OnButton7Click);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranGerant::OnButton8Click);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranGerant::OnButton9Click);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranGerant::OnButton10Click);
	//*)
}

EcranGerant::~EcranGerant()
{
	//(*Destroy(EcranGerant)
	//*)
}


void EcranGerant::OnButton10Click(wxCommandEvent& event)
{
    exit(0);
}

void EcranGerant::OnButton1Click(wxCommandEvent& event)
{
    EcranReservation fr(this);
    fr.ShowModal();
}

void EcranGerant::OnButton2Click(wxCommandEvent& event)
{
   EcranReservation fr(this);
    fr.ShowModal();
}

void EcranGerant::OnButton3Click(wxCommandEvent& event)
{
    EcranRechercherVoirSalle fr(this);
    fr.ShowModal();
}

void EcranGerant::OnButton4Click(wxCommandEvent& event)
{
    EcranRechercherVoirSalle fr(this);
    fr.ShowModal();
}

void EcranGerant::OnButton8Click(wxCommandEvent& event)
{
    EcranUpdateSalle fr(this);
    fr.ShowModal();
}

void EcranGerant::OnButton7Click(wxCommandEvent& event)
{
    EcranFacture fr(this);
    fr.ShowModal();
}

void EcranGerant::OnButton9Click(wxCommandEvent& event)
{
    EcranInfoPerso fr(this);
    fr.ShowModal();
}

void EcranGerant::OnButton6Click(wxCommandEvent& event)
{
    EcranHistorique fr(this);
    fr.ShowModal();
}

void EcranGerant::OnButton5Click(wxCommandEvent& event)
{
    EcranInfoPerso fr(this);
    fr.ShowModal();
}
