#include "EcranInscription.h"
#include "EcranGerant.h"
#include "EcranClient.h"
//(*InternalHeaders(EcranInscription)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EcranInscription)
const long EcranInscription::ID_BITMAPBUTTON1 = wxNewId();
const long EcranInscription::ID_STATICTEXT1 = wxNewId();
const long EcranInscription::ID_STATICTEXT2 = wxNewId();
const long EcranInscription::ID_STATICTEXT3 = wxNewId();
const long EcranInscription::ID_STATICTEXT4 = wxNewId();
const long EcranInscription::ID_STATICTEXT5 = wxNewId();
const long EcranInscription::ID_STATICTEXT6 = wxNewId();
const long EcranInscription::ID_TEXTCTRL1 = wxNewId();
const long EcranInscription::ID_TEXTCTRL2 = wxNewId();
const long EcranInscription::ID_TEXTCTRL4 = wxNewId();
const long EcranInscription::ID_TEXTCTRL5 = wxNewId();
const long EcranInscription::ID_RADIOBOX1 = wxNewId();
const long EcranInscription::ID_BUTTON1 = wxNewId();
const long EcranInscription::ID_STATICTEXT7 = wxNewId();
const long EcranInscription::ID_DATEPICKERCTRL1 = wxNewId();
const long EcranInscription::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EcranInscription,wxDialog)
	//(*EventTable(EcranInscription)
	//*)
END_EVENT_TABLE()

EcranInscription::EcranInscription(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EcranInscription)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(750,400), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(0,0,0));
	Panel1->SetBackgroundColour(wxColour(191,191,191));
	BitmapButton1 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("/home/kaf/Documents/ProjetC++2/logo/logo.jpg"))), wxDefaultPosition, wxSize(400,400), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Inscription"), wxPoint(440,8), wxSize(168,32), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(25,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Name :"), wxPoint(448,56), wxSize(64,24), 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Surname :"), wxPoint(424,104), wxSize(88,24), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Birthdate :"), wxPoint(424,152), wxSize(96,24), 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Address :"), wxPoint(432,200), wxSize(88,16), 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(17,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Cel :"), wxPoint(472,248), wxSize(40,24), 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(520,48), wxSize(200,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(520,96), wxSize(200,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxPoint(520,192), wxSize(200,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxPoint(520,240), wxSize(200,28), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	wxString __wxRadioBoxChoices_1[2] =
	{
		_("Client"),
		_("Gerant")
	};
	RadioBox1 = new wxRadioBox(Panel1, ID_RADIOBOX1, _("Statut"), wxPoint(416,304), wxSize(200,60), 2, __wxRadioBoxChoices_1, 1, 0, wxDefaultValidator, _T("ID_RADIOBOX1"));
	RadioBox1->SetSelection(0);
	wxFont RadioBox1Font(16,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	RadioBox1->SetFont(RadioBox1Font);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Validate"), wxPoint(648,352), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetBackgroundColour(wxColour(41,201,60));
	wxFont Button1Font(15,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Reserve   Room"), wxPoint(136,248), wxSize(136,24), 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_BOLD,false,_T("Z003"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	DatePickerCtrl1 = new wxDatePickerCtrl(Panel1, ID_DATEPICKERCTRL1, wxDefaultDateTime, wxPoint(528,144), wxSize(120,31), wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL1"));
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_RADIOBOX1,wxEVT_COMMAND_RADIOBOX_SELECTED,(wxObjectEventFunction)&EcranInscription::OnRadioBox1Select);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EcranInscription::OnButton1Click);
	//*)
}

EcranInscription::~EcranInscription()
{
	//(*Destroy(EcranInscription)
	//*)
}


void EcranInscription::OnButton1Click(wxCommandEvent& event)
{
    int  statut=RadioBox1->GetSelection();
    if(statut==0)
    {
        EcranClient fr(this);
        fr.ShowModal();
    }else
    {
        EcranGerant fr(this);
        fr.ShowModal();
    }

}

void EcranInscription::OnRadioBox1Select(wxCommandEvent& event)
{
}


