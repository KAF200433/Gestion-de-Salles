#ifndef ECRANFACTURE_H
#define ECRANFACTURE_H

//(*Headers(EcranFacture)
#include <wx/button.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class EcranFacture: public wxDialog
{
	public:

		EcranFacture(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~EcranFacture();

		//(*Declarations(EcranFacture)
		wxButton* Button1;
		wxDatePickerCtrl* DatePickerCtrl1;
		wxPanel* Panel1;
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl3;
		wxTextCtrl* TextCtrl4;
		wxTextCtrl* TextCtrl5;
		//*)

	protected:

		//(*Identifiers(EcranFacture)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL2;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT6;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL5;
		static const long ID_DATEPICKERCTRL1;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(EcranFacture)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
