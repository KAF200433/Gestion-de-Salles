#include "EcranConnexion.h"
#include "EcranInscription.h"
//(*InternalHeaders(EcranConnexion)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranConnexion)
const long EcranConnexion::ID_STATICBITMAP1 = wxNewId();
const long EcranConnexion::ID_STATICTEXT1 = wxNewId();
const long EcranConnexion::ID_STATICTEXT2 = wxNewId();
const long EcranConnexion::ID_TEXTCTRL1 = wxNewId();
const long EcranConnexion::ID_TEXTCTRL2 = wxNewId();
const long EcranConnexion::ID_BUTTON1 = wxNewId();
const long EcranConnexion::ID_BUTTON2 = wxNewId();
const long EcranConnexion::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranConnexion,wxDialog)
	//(*EventTable(EcranConnexion)
	//*)
END_EVENT_TABLE()

EcranConnexion::EcranConnexion(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranConnexion)
	wxBoxSizer* BoxSizer1;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(450,450), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kaf/Documents/ProjetC++2/logo/logo.jpg")).Rescale(wxSize(450,450).GetWidth(),wxSize(450,450).GetHeight())), wxDefaultPosition, wxSize(450,450), 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Username :"), wxPoint(104,280), wxSize(96,24), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Password :"), wxPoint(104,328), wxSize(88,16), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(200,280), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(200,320), wxSize(144,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Submit"), wxPoint(168,360), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("New\? Create account"), wxPoint(128,408), wxSize(168,34), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->SetForegroundColour(wxColour(165,119,184));
	wxFont Button2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EcranConnexion::OnTextCtrl1Text);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranConnexion::OnButton2Click);
	//*)
}

EcranConnexion::~EcranConnexion()
{
	//(*Destroy(EcranConnexion)
	//*)
}


void EcranConnexion::OnButton2Click(wxCommandEvent& event)
{
    EcranInscription fr(this);
    fr.ShowModal();
}

void EcranConnexion::OnTextCtrl1Text(wxCommandEvent& event)
{
}
