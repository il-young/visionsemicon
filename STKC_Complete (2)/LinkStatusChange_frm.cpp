//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LinkStatusChange_frm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvGlassButton"
#pragma resource "*.dfm"
TLink_Status_Change_frm *Link_Status_Change_frm;
//---------------------------------------------------------------------------
__fastcall TLink_Status_Change_frm::TLink_Status_Change_frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLink_Status_Change_frm::Change_LinkStatusChange_Close_btClick(TObject *Sender)

{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TLink_Status_Change_frm::Change_LinkStatusChange_Online_btClick(TObject *Sender)

{
	Change_LinkStatusChange_Online_bt-> BackColor = clLime;
	Change_LinkStatusChange_Offline_bt-> BackColor = clGray;

	if(Change_LinkStatusChange_Online_bt-> BackColor == clLime)
	{
	 Change_LinkStatusChange_Online_Remote_bt->Visible = true;
	 Change_LinkStatusChange_Online_Lock_bt->Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TLink_Status_Change_frm::Change_LinkStatusChange_Offline_btClick(TObject *Sender)

{
	Change_LinkStatusChange_Online_bt-> BackColor = clGray;
	Change_LinkStatusChange_Offline_bt-> BackColor = clLime;

	if(Change_LinkStatusChange_Offline_bt-> BackColor == clLime)
	{
	 Change_LinkStatusChange_Online_Remote_bt->Visible = false;
	 Change_LinkStatusChange_Online_Lock_bt->Visible = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TLink_Status_Change_frm::Change_LinkStatusChange_Online_Remote_btClick(TObject *Sender)

{
	if(Change_LinkStatusChange_Online_Remote_bt ->BackColor == clLime)
	{
		Change_LinkStatusChange_Online_Remote_bt ->BackColor = clGray;
	}
	else if(Change_LinkStatusChange_Online_Remote_bt ->BackColor == clGray)
	{
		Change_LinkStatusChange_Online_Remote_bt ->BackColor = clLime;
	}
}
//---------------------------------------------------------------------------

void __fastcall TLink_Status_Change_frm::Change_LinkStatusChange_Online_Lock_btClick(TObject *Sender)

{
	if(Change_LinkStatusChange_Online_Lock_bt ->BackColor == clLime)
	{
		Change_LinkStatusChange_Online_Lock_bt ->BackColor = clGray;
	}
	else if(Change_LinkStatusChange_Online_Lock_bt ->BackColor == clGray)
	{
		Change_LinkStatusChange_Online_Lock_bt ->BackColor = clLime;
	}
}
//---------------------------------------------------------------------------
