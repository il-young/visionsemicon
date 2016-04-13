//---------------------------------------------------------------------------

#ifndef Carrier_ToPGVPortPopup_frmH
#define Carrier_ToPGVPortPopup_frmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TCarrier_ToPGVPort_Popup_frm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TComboBox *Carrier_ToPGVPort_cb;
	TLabel *Label2;
	TAdvGlassButton *Carrier_ToPGVPort_Popup_Ok_bt;
	TAdvGlassButton *Carrier_ToPGVPort_Popup_Cancel_bt;
	void __fastcall Carrier_ToPGVPort_Popup_Cancel_btClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCarrier_ToPGVPort_Popup_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCarrier_ToPGVPort_Popup_frm *Carrier_ToPGVPort_Popup_frm;
//---------------------------------------------------------------------------
#endif
