#include "EcranReservation.h"
#include "EcranInscription.h"
#include "EcranClient.h"
#include "EcranGerant.h"
#include "wx/file.h"
//(*InternalHeaders(EcranReservation)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranReservation)
const long EcranReservation::ID_STATICBITMAP1 = wxNewId();
const long EcranReservation::ID_STATICTEXT1 = wxNewId();
const long EcranReservation::ID_TEXTCTRL1 = wxNewId();
const long EcranReservation::ID_STATICBOX1 = wxNewId();
const long EcranReservation::ID_STATICTEXT2 = wxNewId();
const long EcranReservation::ID_STATICTEXT3 = wxNewId();
const long EcranReservation::ID_STATICTEXT4 = wxNewId();
const long EcranReservation::ID_STATICTEXT5 = wxNewId();
const long EcranReservation::ID_TEXTCTRL2 = wxNewId();
const long EcranReservation::ID_TEXTCTRL3 = wxNewId();
const long EcranReservation::ID_TEXTCTRL4 = wxNewId();
const long EcranReservation::ID_TEXTCTRL5 = wxNewId();
const long EcranReservation::ID_RADIOBOX1 = wxNewId();
const long EcranReservation::ID_RADIOBOX2 = wxNewId();
const long EcranReservation::ID_BUTTON1 = wxNewId();
const long EcranReservation::ID_BUTTON2 = wxNewId();
const long EcranReservation::ID_BUTTON3 = wxNewId();
const long EcranReservation::ID_STATICTEXT6 = wxNewId();
const long EcranReservation::ID_TEXTCTRL6 = wxNewId();
const long EcranReservation::ID_STATICTEXT7 = wxNewId();
const long EcranReservation::ID_TEXTCTRL7 = wxNewId();
const long EcranReservation::ID_BUTTON4 = wxNewId();
const long EcranReservation::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranReservation,wxDialog)
	//(*EventTable(EcranReservation)
	//*)
END_EVENT_TABLE()

EcranReservation::EcranReservation(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranReservation)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(600,400), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(0,0,0));
	Panel1->SetBackgroundColour(wxColour(255,255,255));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("/home/kaf/Documents/ProjetC++2/logo/logo.jpg")).Rescale(wxSize(600,400).GetWidth(),wxSize(600,400).GetHeight())), wxDefaultPosition, wxSize(600,400), 0, _T("ID_STATICBITMAP1"));
	StaticBitmap1->SetForegroundColour(wxColour(255,255,255));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Salle n"), wxPoint(24,24), wxSize(80,24), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(96,16), wxSize(48,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	StaticBox1 = new wxStaticBox(Panel1, ID_STATICBOX1, _("Salle  "), wxPoint(16,80), wxSize(358,300), 0, _T("ID_STATICBOX1"));
	wxFont StaticBox1Font(23,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticBox1->SetFont(StaticBox1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Nom :"), wxPoint(80,136), wxSize(56,16), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Superficie :"), wxPoint(48,184), wxSize(88,24), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Nbre de places :"), wxPoint(24,232), wxSize(136,16), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Prix :"), wxPoint(88,264), wxSize(48,24), 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(136,128), wxSize(176,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxPoint(136,176), wxSize(176,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(144,224), wxSize(168,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(144,264), wxSize(168,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	wxString __wxRadioBoxChoices_1[2] =
	{
		_("Y"),
		_("N")
	};
	RadioBox1 = new wxRadioBox(Panel1, ID_RADIOBOX1, _("Ecran   "), wxPoint(40,312), wxSize(112,56), 2, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
	RadioBox1->SetSelection(0);
	wxFont RadioBox1Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	RadioBox1->SetFont(RadioBox1Font);
	wxString __wxRadioBoxChoices_2[2] =
	{
		_("Y"),
		_("N")
	};
	RadioBox2 = new wxRadioBox(Panel1, ID_RADIOBOX2, _("Wifi   "), wxPoint(184,320), wxSize(104,48), 2, __wxRadioBoxChoices_2, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX2"));
	RadioBox2->SetSelection(0);
	wxFont RadioBox2Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	RadioBox2->SetFont(RadioBox2Font);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Annuler"), wxPoint(392,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Button1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Reserver"), wxPoint(504,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont Button2Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("<<  Return"), wxPoint(496,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	wxFont Button3Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button3->SetFont(Button3Font);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Pour le :"), wxPoint(392,112), wxSize(96,24), 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	TextCtrl6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxPoint(432,144), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Par :"), wxPoint(400,192), wxSize(56,24), 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	TextCtrl7 = new wxTextCtrl(Panel1, ID_TEXTCTRL7, wxEmptyString, wxPoint(432,224), wxSize(152,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("OK"), wxPoint(168,16), wxSize(48,34), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranReservation::OnButton3Click);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&EcranReservation::OnInit);
	//*)
}

EcranReservation::~EcranReservation()
{
	//(*Destroy(EcranReservation)
	//*)
}


void EcranReservation::OnButton3Click(wxCommandEvent& event)
{
 wxString ch;
wxFile fichier(_("fichier"),wxFile::read_write);
        //ch.Printf(("%d"),RadioBox1->GetSelection());
fichier.ReadAll(&ch);
 int statut=atof(ch);


if(statut==0)
    {
        EcranClient fr(this);
        fr.ShowModal();
    }
    else
    {
        EcranGerant fa(this);
        fa.ShowModal();
    }

}

void EcranReservation::OnInit(wxInitDialogEvent& event)
{
}
