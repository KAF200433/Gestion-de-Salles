#include "EcranFacture.h"

//(*InternalHeaders(EcranFacture)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranFacture)
const long EcranFacture::ID_STATICBITMAP1 = wxNewId();
const long EcranFacture::ID_STATICTEXT1 = wxNewId();
const long EcranFacture::ID_STATICTEXT2 = wxNewId();
const long EcranFacture::ID_STATICTEXT3 = wxNewId();
const long EcranFacture::ID_STATICTEXT4 = wxNewId();
const long EcranFacture::ID_TEXTCTRL2 = wxNewId();
const long EcranFacture::ID_TEXTCTRL3 = wxNewId();
const long EcranFacture::ID_STATICTEXT5 = wxNewId();
const long EcranFacture::ID_TEXTCTRL4 = wxNewId();
const long EcranFacture::ID_STATICTEXT6 = wxNewId();
const long EcranFacture::ID_BUTTON1 = wxNewId();
const long EcranFacture::ID_STATICTEXT7 = wxNewId();
const long EcranFacture::ID_TEXTCTRL5 = wxNewId();
const long EcranFacture::ID_DATEPICKERCTRL1 = wxNewId();
const long EcranFacture::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranFacture,wxDialog)
	//(*EventTable(EcranFacture)
	//*)
END_EVENT_TABLE()

EcranFacture::EcranFacture(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranFacture)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(650,300));
	Move(wxDefaultPosition);
	wxFont thisFont(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(650,300), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(0,0,0));
	Panel1->SetBackgroundColour(wxColour(173,90,109));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kaf/Documents/ProjetC++2/logo/logo.jpg")).Rescale(wxSize(60,60).GetWidth(),wxSize(60,60).GetHeight())), wxPoint(8,8), wxSize(60,60), 0, _T("ID_STATICBITMAP1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Facture"), wxPoint(160,32), wxSize(104,32), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(25,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Date"), wxPoint(384,24), wxSize(64,24), 0, _T("ID_STATICTEXT2"));
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Nom"), wxPoint(72,104), wxSize(64,24), wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Prénom"), wxPoint(40,144), wxSize(80,24), wxALIGN_CENTRE, _T("ID_STATICTEXT4"));
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(136,104), wxSize(168,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(136,144), wxSize(168,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Montant a payer"), wxPoint(32,208), wxSize(192,30), wxALIGN_CENTRE, _T("ID_STATICTEXT5"));
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(232,208), wxSize(288,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Le Gerant"), wxPoint(32,256), wxSize(136,24), wxALIGN_CENTRE, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Envoyer"), wxPoint(520,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Salle réservée"), wxPoint(464,104), wxSize(56,24), wxALIGN_CENTRE, _T("ID_STATICTEXT7"));
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(536,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	DatePickerCtrl1 = new wxDatePickerCtrl(Panel1, ID_DATEPICKERCTRL1, wxDefaultDateTime, wxPoint(448,16), wxDefaultSize, wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL1"));
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	SetSizer(BoxSizer1);
	Layout();
	//*)
}

EcranFacture::~EcranFacture()
{
	//(*Destroy(EcranFacture)
	//*)
}

