//---------------------------------------------------------------------------

#ifndef Carrier_ToAGVPortPopup_frmH
#define Carrier_ToAGVPortPopup_frmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AsgCombo.hpp"
#include "ColorCombo.hpp"
#include <Vcl.ExtCtrls.hpp>
#include "AdvGlassButton.hpp"
//---------------------------------------------------------------------------
class TCarrier_ToAGVPort_Popup_frm : public TForm
{
__published:	// IDE-managed Components
	TComboBox *Carrier_ToAGVPort_cb;
	TLabel *Label1;
	TAdvGlassButton *Carrier_ToAGVPort_Popup_Ok_bt;
	TAdvGlassButton *Carrier_ToAGVPort_Popup_Cancel_bt;
	TLabel *Label2;
	void __fastcall Carrier_ToAGVPort_Popup_Cancel_btClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCarrier_ToAGVPort_Popup_frm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCarrier_ToAGVPort_Popup_frm *Carrier_ToAGVPort_Popup_frm;
//---------------------------------------------------------------------------
#endif
