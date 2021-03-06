//---------------------------------------------------------------------------

#ifndef uPOSTSUParametersEditorFormH
#define uPOSTSUParametersEditorFormH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TTSUparametersEditorForm : public TForm
{
__published:	// IDE-managed Components
    TStatusBar *StatusBar;
    TLabeledEdit *LabeledEdit_FileName;
    TLabel *Label_DigitalQuantumParameters;
    TStringGrid *StringGrid;
    TButton *Button_Save;
    TButton *Button_Cancel;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall Button_CancelClick(TObject *Sender);
    void __fastcall Button_SaveClick(TObject *Sender);
private:	// User declarations
    AnsiString FileName;
public:		// User declarations
    __fastcall TTSUparametersEditorForm(TComponent* Owner);
    void LoadForm(AnsiString);
    void SetStatusbarText(AnsiString Message);    
};
//---------------------------------------------------------------------------
extern PACKAGE TTSUparametersEditorForm *TSUparametersEditorForm;
//---------------------------------------------------------------------------
#endif
