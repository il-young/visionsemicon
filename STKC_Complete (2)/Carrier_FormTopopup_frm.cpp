//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Carrier_FormTopopup_frm.h"
#include "Carrier_FormTopopupConfirm_frm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TCarrier_FormTo_popup_frm *Carrier_FormTo_popup_frm;
//---------------------------------------------------------------------------
__fastcall TCarrier_FormTo_popup_frm::TCarrier_FormTo_popup_frm(TComponent* Owner)
	: TForm(Owner)
{
	Carrier_FormTopopup_Confirm_frm = new TCarrier_FormTopopup_Confirm_frm(this);
}
//---------------------------------------------------------------------------
void __fastcall TCarrier_FormTo_popup_frm::Carrier_ToAGVPort_Popup_Confirm_btClick(TObject *Sender)

{
	Carrier_FormTopopup_Confirm_frm->Show();
}
//---------------------------------------------------------------------------

