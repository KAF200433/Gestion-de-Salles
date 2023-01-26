/***************************************************************
 * Name:      EcranAcceuilMain.h
 * Purpose:   Defines Application Frame
 * Author:    KAF (kotanmiamedeflorian@gmail.com)
 * Created:   2023-01-25
 * Copyright: KAF ()
 * License:
 **************************************************************/

#ifndef ECRANACCEUILMAIN_H
#define ECRANACCEUILMAIN_H
//(*Headers(EcranAcceuilFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)
class EcranAcceuilFrame: public wxFrame
{
    public:

        EcranAcceuilFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~EcranAcceuilFrame();

    private:

        //(*Handlers(EcranAcceuilFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnPanel1Paint(wxPaintEvent& event);
        //*)

        //(*Identifiers(EcranAcceuilFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICBITMAP1;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT2;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(EcranAcceuilFrame)
        wxButton* Button1;
        wxPanel* Panel1;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // ECRANACCEUILMAIN_H
