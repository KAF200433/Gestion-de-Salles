#include "EcranHistoriqueClient.h"
#include "EcranClient.h"

//(*InternalHeaders(EcranHistoriqueClient)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranHistoriqueClient)
const long EcranHistoriqueClient::ID_STATICTEXT1 = wxNewId();
const long EcranHistoriqueClient::ID_STATICTEXT2 = wxNewId();
const long EcranHistoriqueClient::ID_STATICTEXT3 = wxNewId();
const long EcranHistoriqueClient::ID_STATICTEXT4 = wxNewId();
const long EcranHistoriqueClient::ID_TEXTCTRL1 = wxNewId();
const long EcranHistoriqueClient::ID_TEXTCTRL2 = wxNewId();
const long EcranHistoriqueClient::ID_TEXTCTRL3 = wxNewId();
const long EcranHistoriqueClient::ID_TEXTCTRL4 = wxNewId();
const long EcranHistoriqueClient::ID_TEXTCTRL5 = wxNewId();
const long EcranHistoriqueClient::ID_BUTTON2 = wxNewId();
const long EcranHistoriqueClient::ID_BUTTON3 = wxNewId();
const long EcranHistoriqueClient::ID_BUTTON4 = wxNewId();
const long EcranHistoriqueClient::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranHistoriqueClient,wxDialog)
	//(*EventTable(EcranHistoriqueClient)
	//*)
END_EVENT_TABLE()

EcranHistoriqueClient::EcranHistoriqueClient(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranHistoriqueClient)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(500,400), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Historique de mes réservations"), wxPoint(168,16), wxSize(312,32), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Salle n°"), wxPoint(48,128), wxSize(56,24), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Facturé"), wxPoint(216,128), wxSize(72,24), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Date"), wxPoint(400,128), wxSize(56,24), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(16,160), wxSize(464,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(16,216), wxSize(464,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(16,264), wxSize(464,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(16,312), wxSize(464,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(16,352), wxSize(464,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Previous"), wxPoint(32,32), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont Button2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Next"), wxPoint(32,80), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	wxFont Button3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button3->SetFont(Button3Font);
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("OK"), wxPoint(376,80), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	wxFont Button4Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button4->SetFont(Button4Font);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranHistoriqueClient::OnButton4Click);
	//*)
}

EcranHistoriqueClient::~EcranHistoriqueClient()
{
	//(*Destroy(EcranHistoriqueClient)
	//*)
}


void EcranHistoriqueClient::OnButton4Click(wxCommandEvent& event)
{
    EcranClient fr(this);
    fr.ShowModal();
}
