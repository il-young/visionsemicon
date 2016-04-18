//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "System_Setting.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdvEdit"
#pragma link "AdvIPEdit"
#pragma resource "*.dfm"
TSetting_Frm *Setting_Frm;
//---------------------------------------------------------------------------
__fastcall TSetting_Frm::TSetting_Frm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSetting_Frm::tb_t3Change(TObject *Sender)
{
	int t3_temp;

	t3_temp = StrToInt(tb_t3->Text);

	if (t3_temp < 0 ) {
			tb_t3->Text = 0;
		}
		else if(t3_temp > 120){
			tb_t3->Text = 120;
		}
}
//---------------------------------------------------------------------------

void __fastcall TSetting_Frm::tb_t5Change(TObject *Sender)
{
		int t5_temp;

	t5_temp = StrToInt(tb_t5->Text);

	if (t5_temp < 0 ) {
			tb_t5->Text = 0;
		}
		else if(t5_temp > 240){
			tb_t5->Text = 240;
		}
}
//---------------------------------------------------------------------------

void __fastcall TSetting_Frm::tb_t6Change(TObject *Sender)
{
	int t6_temp;

	t6_temp = StrToInt(tb_t6->Text);

	if (t6_temp < 0 ) {
			tb_t6->Text = 0;
		}
		else if(t6_temp > 240){
			tb_t6->Text = 240;
		}
}
//---------------------------------------------------------------------------

void __fastcall TSetting_Frm::tb_t7Change(TObject *Sender)
{
	int t7_temp;

	t7_temp = StrToInt(tb_t7->Text);

	if (t7_temp < 0 ) {
			tb_t7->Text = 0;
		}
		else if(t7_temp > 240){
			tb_t7->Text = 240;
		}
}
//---------------------------------------------------------------------------

void __fastcall TSetting_Frm::tb_t8Change(TObject *Sender)
{
	int t8_temp;

	t8_temp = StrToInt(tb_t8->Text);

	if (t8_temp < 0 ) {
			tb_t8->Text = 0;
		}
		else if(t8_temp > 120){
			tb_t8->Text = 120;
		}
}
//---------------------------------------------------------------------------

void __fastcall TSetting_Frm::tb_t9Change(TObject *Sender)
{
	int t9_temp;

	t9_temp = StrToInt(tb_t9->Text);

	if (t9_temp < 0 ) {
			tb_t9->Text = 0;
		}
		else if(t9_temp > 240){
			tb_t9->Text = 240;
		}
}
//---------------------------------------------------------------------------

