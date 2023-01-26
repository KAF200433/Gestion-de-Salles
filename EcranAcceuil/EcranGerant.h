#ifndef ECRANGERANT_H
#define ECRANGERANT_H

//(*Headers(EcranGerant)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class EcranGerant: public wxDialog
{
	public:

		EcranGerant(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~EcranGerant();

		//(*Declarations(EcranGerant)
		wxButton* Button10;
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button4;
		wxButton* Button5;
		wxButton* Button6;
		wxButton* Button7;
		wxButton* Button8;
		wxButton* Button9;
		wxPanel* Panel1;
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(EcranGerant)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_BUTTON8;
		static const long ID_BUTTON9;
		static const long ID_BUTTON10;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(EcranGerant)
		void OnButton10Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnButton8Click(wxCommandEvent& event);
		void OnButton7Click(wxCommandEvent& event);
		void OnButton9Click(wxCommandEvent& event);
		void OnButton6Click(wxCommandEvent& event);
		void OnButton5Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
