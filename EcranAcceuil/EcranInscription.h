#ifndef ECRANINSCRIPTION_H
#define ECRANINSCRIPTION_H

//(*Headers(EcranInscription)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/radiobox.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class EcranInscription: public wxDialog
{
	public:

		EcranInscription(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~EcranInscription();

		//(*Declarations(EcranInscription)
		wxBitmapButton* BitmapButton1;
		wxButton* Button1;
		wxDatePickerCtrl* DatePickerCtrl1;
		wxPanel* Panel1;
		wxRadioBox* RadioBox1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl4;
		wxTextCtrl* TextCtrl5;
		//*)

	protected:

		//(*Identifiers(EcranInscription)
		static const long ID_BITMAPBUTTON1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL4;
		static const long ID_TEXTCTRL5;
		static const long ID_RADIOBOX1;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT7;
		static const long ID_DATEPICKERCTRL1;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(EcranInscription)
		void OnButton1Click(wxCommandEvent& event);
		void OnRadioBox1Select(wxCommandEvent& event);

		//*)

		DECLARE_EVENT_TABLE()
};

#endif
