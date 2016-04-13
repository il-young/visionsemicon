//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Change_AutoM_frm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TChange_AutoManual_frm *Change_AutoManual_frm;
//---------------------------------------------------------------------------
__fastcall TChange_AutoManual_frm::TChange_AutoManual_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TChange_AutoManual_frm::Change_Auto_btClick(TObject *Sender)
{
	Change_Auto_bt-> BackColor = clLime;
	Change_Manual_bt-> BackColor = clGray;
}
//---------------------------------------------------------------------------

void __fastcall TChange_AutoManual_frm::Change_Manual_btClick(TObject *Sender)
{
	Change_Auto_bt-> BackColor = clGray;
	Change_Manual_bt-> BackColor = clLime;
}
//---------------------------------------------------------------------------

void __fastcall TChange_AutoManual_frm::Change_Close_btClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------

