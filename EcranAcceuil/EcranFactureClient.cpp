#include "EcranFactureClient.h"

//(*InternalHeaders(EcranFactureClient)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranFactureClient)
const long EcranFactureClient::ID_STATICBITMAP1 = wxNewId();
const long EcranFactureClient::ID_STATICTEXT1 = wxNewId();
const long EcranFactureClient::ID_STATICTEXT2 = wxNewId();
const long EcranFactureClient::ID_STATICTEXT3 = wxNewId();
const long EcranFactureClient::ID_STATICTEXT4 = wxNewId();
const long EcranFactureClient::ID_STATICTEXT5 = wxNewId();
const long EcranFactureClient::ID_STATICTEXT6 = wxNewId();
const long EcranFactureClient::ID_TEXTCTRL1 = wxNewId();
const long EcranFactureClient::ID_TEXTCTRL2 = wxNewId();
const long EcranFactureClient::ID_TEXTCTRL3 = wxNewId();
const long EcranFactureClient::ID_TEXTCTRL4 = wxNewId();
const long EcranFactureClient::ID_TEXTCTRL5 = wxNewId();
const long EcranFactureClient::ID_STATICTEXT7 = wxNewId();
const long EcranFactureClient::ID_BUTTON1 = wxNewId();
const long EcranFactureClient::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranFactureClient,wxDialog)
	//(*EventTable(EcranFactureClient)
	//*)
END_EVENT_TABLE()

EcranFactureClient::EcranFactureClient(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranFactureClient)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(650,300), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(0,0,0));
	Panel1->SetBackgroundColour(wxColour(173,90,109));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kaf/Documents/ProjetC++2/logo/logo.jpg")).Rescale(wxSize(60,60).GetWidth(),wxSize(60,60).GetHeight())), wxPoint(8,8), wxSize(60,60), 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Facture"), wxPoint(112,24), wxSize(192,40), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(30,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Nom"), wxPoint(96,104), wxSize(56,24), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Prénom"), wxPoint(88,152), wxSize(88,24), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Montant a payer"), wxPoint(80,200), wxSize(168,32), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Date"), wxPoint(432,24), wxSize(48,24), 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Salle n"), wxPoint(424,88), wxSize(72,24), 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(160,96), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(160,144), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(224,192), wxSize(224,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(496,16), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(504,80), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Le Gerant"), wxPoint(24,264), wxSize(136,24), 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Payer"), wxPoint(536,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

EcranFactureClient::~EcranFactureClient()
{
	//(*Destroy(EcranFactureClient)
	//*)
}

