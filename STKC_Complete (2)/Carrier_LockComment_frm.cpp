//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Carrier_LockComment_frm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TCarrier_Lock_Comment_frm *Carrier_Lock_Comment_frm;
//---------------------------------------------------------------------------
__fastcall TCarrier_Lock_Comment_frm::TCarrier_Lock_Comment_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCarrier_Lock_Comment_frm::Carrier_Lock_Comment_Cancel_btClick(TObject *Sender)

{
	Close();
}
//---------------------------------------------------------------------------

