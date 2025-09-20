//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Modelos.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
Word sumaPosImpar(Cardinal x, byte c){
	Word s=0;
	if(x<10){
		c++;
		if(c%2!=0){
			s=x;
		}

	}else{
		byte d=x%10;
		x=x/10;
		c++;
		s=sumaPosImpar(x,c);
		if(c%2!=0){
			s=s+d;
		}
	}
	return s;
}

void __fastcall TForm1::Ejercicio11Click(TObject *Sender)
{
	Edit2->Text=sumaPosImpar(StrToInt(Edit1->Text),0);
}
//---------------------------------------------------------------------------
void CargarCadena(TStringGrid *v, byte &n, AnsiString x){
	AnsiString s;
	if(x.Length()>0){
		if(x.Length()==1){
			v->Cells[0][0]=x;
			n++;
		}
		else{
			if(x.Length()%2==0){
				s=x.SubString(x.Length()-1,2);
				x.Delete(x.Length()-1,2);
			}
			else{
				s=x[x.Length()];
				x.Delete(x.Length(),1);
			}
			CargarCadena(v,n,x);
			v->Cells[n][0]=s;
			n++;
		}
	}
}

void __fastcall TForm1::Ejercicio21Click(TObject *Sender)
{
	byte n;
	CargarCadena(StringGrid1, n, Edit1->Text);
    StringGrid1->ColCount=n;
}
//---------------------------------------------------------------------------
void llenarFila(TStringGrid *A, byte f, byte n, byte k){
	if(n>0){
		llenarFila(A,f,n-1,k);
		A->Cells[n-1][f]=k;
	}
}

void llenarCol(TStringGrid *A, byte c, byte fa, byte fb, byte k){
	byte m=fb-fa+1;
	if(m>0){
		llenarCol(A,c,fa+1,fb,k);
		A->Cells[c][fa]=k;
	}
}

void CargarL(TStringGrid *A, byte fa, byte fb, byte n){
	byte m=fb-fa+1;
	if(m!=n){
		throw new Exception("Error: La matriz no es cuadrada");
	}
	else if(m>0 && n>0){
		CargarL(A,fa+1,fb,n-1);
		llenarFila(A,fa,n,fa+1);
		llenarCol(A,n-1,fa,fb,fa+1);
	}
}


void __fastcall TForm1::Ejercicio31Click(TObject *Sender)
{
	byte m,n;
	StringGrid1->RowCount=m=StrToInt(Edit1->Text);
	StringGrid1->ColCount=n=StrToInt(Edit2->Text);
	if(m!=n){
		ShowMessage("La matriz debe ser cuadrada");
	}
	else{
        CargarL(StringGrid1, 0, m-1, n);
    }
}
//---------------------------------------------------------------------------

