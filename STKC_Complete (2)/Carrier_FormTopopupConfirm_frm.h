//---------------------------------------------------------------------------

#ifndef Carrier_FormTopopupConfirm_frmH
#define Carrier_FormTopopupConfirm_frmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TCarrier_FormTopopup_Confirm_frm : public TForm
{
__published:	// IDE-managed Components
	TAdvGlassButton *Carrier_ToPGVPort_Popup_Ok_bt;
	TAdvGlassButton *Carrier_ToPGVPort_Popup_Cancel_bt;
	TLabel *Label2;
	void __fastcall Carrier_ToPGVPort_Popup_Cancel_btClick(TObject *Sender);
	void __fastcall Carrier_ToPGVPort_Popup_Ok_btClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCarrier_FormTopopup_Confirm_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCarrier_FormTopopup_Confirm_frm *Carrier_FormTopopup_Confirm_frm;
//---------------------------------------------------------------------------
#endif
