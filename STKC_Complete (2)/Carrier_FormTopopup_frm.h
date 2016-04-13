//---------------------------------------------------------------------------

#ifndef Carrier_FormTopopup_frmH
#define Carrier_FormTopopup_frmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TCarrier_FormTo_popup_frm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Carrier_FormTo_CurrentLo_Edit;
	TEdit *Carrier_FormTo_Destination_Edit;
	TAdvGlassButton *Carrier_ToAGVPort_Popup_Confirm_bt;
	void __fastcall Carrier_ToAGVPort_Popup_Confirm_btClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCarrier_FormTo_popup_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCarrier_FormTo_popup_frm *Carrier_FormTo_popup_frm;
//---------------------------------------------------------------------------
#endif
