//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Carrier_ToAGVPortPopup_frm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AsgCombo"
#pragma link "ColorCombo"
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TCarrier_ToAGVPort_Popup_frm *Carrier_ToAGVPort_Popup_frm;
//---------------------------------------------------------------------------
__fastcall TCarrier_ToAGVPort_Popup_frm::TCarrier_ToAGVPort_Popup_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCarrier_ToAGVPort_Popup_frm::Carrier_ToAGVPort_Popup_Cancel_btClick(TObject *Sender)

{
	Close();
}
//---------------------------------------------------------------------------

