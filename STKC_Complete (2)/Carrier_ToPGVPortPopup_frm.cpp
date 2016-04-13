//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Carrier_ToPGVPortPopup_frm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TCarrier_ToPGVPort_Popup_frm *Carrier_ToPGVPort_Popup_frm;
//---------------------------------------------------------------------------
__fastcall TCarrier_ToPGVPort_Popup_frm::TCarrier_ToPGVPort_Popup_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCarrier_ToPGVPort_Popup_frm::Carrier_ToPGVPort_Popup_Cancel_btClick(TObject *Sender)

{
	Close();
}
//---------------------------------------------------------------------------
