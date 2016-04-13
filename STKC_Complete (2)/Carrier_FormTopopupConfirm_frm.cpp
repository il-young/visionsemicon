//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Carrier_FormTopopupConfirm_frm.h"
#include "Carrier_FormTopopup_frm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TCarrier_FormTopopup_Confirm_frm *Carrier_FormTopopup_Confirm_frm;
//---------------------------------------------------------------------------
__fastcall TCarrier_FormTopopup_Confirm_frm::TCarrier_FormTopopup_Confirm_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCarrier_FormTopopup_Confirm_frm::Carrier_ToPGVPort_Popup_Cancel_btClick(TObject *Sender)

{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TCarrier_FormTopopup_Confirm_frm::Carrier_ToPGVPort_Popup_Ok_btClick(TObject *Sender)

{   Carrier_FormTo_popup_frm->Close(); //부모폼까지 같이 닫음.
	Close();
}
//---------------------------------------------------------------------------
