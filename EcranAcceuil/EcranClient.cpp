#include "EcranClient.h"
#include "EcranRechercherVoirSalle.h"
#include "EcranReservation.h"
#include "EcranHistoriqueClient.h"
#include "EcranInfoPersoClient.h"

//(*InternalHeaders(EcranClient)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranClient)
const long EcranClient::ID_STATICBITMAP1 = wxNewId();
const long EcranClient::ID_STATICTEXT1 = wxNewId();
const long EcranClient::ID_BUTTON1 = wxNewId();
const long EcranClient::ID_BUTTON2 = wxNewId();
const long EcranClient::ID_BUTTON3 = wxNewId();
const long EcranClient::ID_BUTTON4 = wxNewId();
const long EcranClient::ID_BUTTON5 = wxNewId();
const long EcranClient::ID_BUTTON6 = wxNewId();
const long EcranClient::ID_BUTTON7 = wxNewId();
const long EcranClient::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranClient,wxDialog)
	//(*EventTable(EcranClient)
	//*)
END_EVENT_TABLE()

EcranClient::EcranClient(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranClient)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(600,550), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kaf/Documents/ProjetC++2/logo/creer-une-entreprise-de-service-aux-entreprises.jpg")).Rescale(wxSize(600,550).GetWidth(),wxSize(600,550).GetHeight())), wxDefaultPosition, wxSize(600,550), 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Options Disponibles"), wxPoint(24,24), wxSize(280,40), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(25,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Faire une nouvelle\n reservation"), wxPoint(64,104), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Annuler une reservation\nen cours"), wxPoint(360,104), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont Button2Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Voir les salles"), wxPoint(64,200), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	wxFont Button3Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button3->SetFont(Button3Font);
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("Rechercher une salle"), wxPoint(360,200), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	wxFont Button4Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button4->SetFont(Button4Font);
	Button5 = new wxButton(Panel1, ID_BUTTON5, _("Mes informations\n      personnelles"), wxPoint(64,304), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	wxFont Button5Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button5->SetFont(Button5Font);
	Button6 = new wxButton(Panel1, ID_BUTTON6, _("Historique de mes\n      reservations"), wxPoint(360,312), wxSize(200,60), 0, wxDefaultValidator, _T("ID_BUTTON6"));
	wxFont Button6Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button6->SetFont(Button6Font);
	Button7 = new wxButton(Panel1, ID_BUTTON7, _(" <<  Log out"), wxPoint(416,472), wxSize(109,42), 0, wxDefaultValidator, _T("ID_BUTTON7"));
	wxFont Button7Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button7->SetFont(Button7Font);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranClient::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranClient::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranClient::OnButton3Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranClient::OnButton4Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranClient::OnButton5Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranClient::OnButton6Click);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranClient::OnButton7Click);
	//*)
}

EcranClient::~EcranClient()
{
	//(*Destroy(EcranClient)
	//*)
}


void EcranClient::OnButton4Click(wxCommandEvent& event)
{
    EcranRechercherVoirSalle fr(this);
    fr.ShowModal();
}

void EcranClient::OnButton7Click(wxCommandEvent& event)
{
    exit(0);
}

void EcranClient::OnButton1Click(wxCommandEvent& event)
{
    EcranReservation fr(this);
    fr.ShowModal();
}

void EcranClient::OnButton2Click(wxCommandEvent& event)
{
    EcranReservation fr(this);
    fr.ShowModal();
}

void EcranClient::OnButton3Click(wxCommandEvent& event)
{
    EcranRechercherVoirSalle fr(this);
    fr.ShowModal();
}

void EcranClient::OnButton5Click(wxCommandEvent& event)
{
    EcranInfoPersoClient fr(this);
    fr.ShowModal();
}

void EcranClient::OnButton6Click(wxCommandEvent& event)
{
    EcranHistoriqueClient fr(this);
    fr.ShowModal();
}
