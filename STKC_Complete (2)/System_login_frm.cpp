//---------------------------------------------------------------------------
#include "System_login_frm.h"
#include <vcl.h>
#pragma hdrstop

#include "System_login_frm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLogin_frm *Login_frm;
//---------------------------------------------------------------------------
__fastcall TLogin_frm::TLogin_frm(TComponent* Owner)
	: TForm(Owner)
{




//	manager = new TDataModule();
//	manager->ConnectDB();
}
//---------------------------------------------------------------------------




void __fastcall TLogin_frm::btn_loginClick(TObject *Sender)
{


	stUserInfo info;

	DBManager->ConnectDB();

	AnsiString id = tb_id->Text;
	AnsiString pw = tb_pw->Text;


	if(DBManager->LoginCheckUser(id ,pw ,info))
	{
		ModalResult = mrOk;
		stkc_frm->btn_login->Caption = info.USER_DESCRIPTIONS+", Logout Here";
		stkc_frm->STK_SRVinfo.SRV_USER   = info.USER_ID;
		stkc_frm->logout_time =  info.USER_LOGOUTTIME.ToInt() ;
		stkc_frm->btn_date->Caption = info.USER_LOGINDATE;
		stkc_frm->logout_cnt = 0;
		stkc_frm->logout_timer->Enabled = true;

		stkc_frm->PNT_ListBox(stkc_frm->STK_SRVinfo.SRV_USER  + " Login");

		tb_id->Text = "";
		tb_pw->Text = "";
	}
	else
	{
		stkc_frm->PNT_ListBox("Login Fail");
		MessageDlg("Login Fail!" ,mtWarning, TMsgDlgButtons() << mbOK, 0);

		//editPASS->Text = "";
		tb_id->Text = "";
		tb_pw->Text = "";
	}
	Login_frm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TLogin_frm::OnKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if (Key == vkReturn  ) {
		btn_login->SetFocus();
	}
}
//---------------------------------------------------------------------------

