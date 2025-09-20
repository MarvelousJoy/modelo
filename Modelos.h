//---------------------------------------------------------------------------

#ifndef ModelosH
#define ModelosH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TMainMenu *MainMenu1;
	TMenuItem *Modelo11;
	TMenuItem *Ejercicio11;
	TMenuItem *Ejercicio21;
	TStringGrid *StringGrid1;
	TMenuItem *Ejercicio31;
	void __fastcall Ejercicio11Click(TObject *Sender);
	void __fastcall Ejercicio21Click(TObject *Sender);
	void __fastcall Ejercicio31Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
