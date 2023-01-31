/***************************************************************
 * Name:      EcranAcceuilApp.cpp
 * Purpose:   Code for Application Class
 * Author:    KAF (kotanmiamedeflorian@gmail.com)
 * Created:   2023-01-25
 * Copyright: KAF ()
 * License:
 **************************************************************/

#include "EcranAcceuilApp.h"
#include "wx/file.h"

//(*AppHeaders
#include "EcranAcceuilMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(EcranAcceuilApp);

bool EcranAcceuilApp::OnInit()
{
        //EcranReservation* R= new EcranReservation(this);

    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	EcranAcceuilFrame* Frame = new EcranAcceuilFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
