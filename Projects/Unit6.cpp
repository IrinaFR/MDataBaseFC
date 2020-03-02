//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxPreview"
#pragma link "frxDBSet"
#pragma link "frxTableObject"
#pragma link "frxExportBaseDialog"
#pragma link "frxExportPDF"
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm6::N4Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::N2Click(TObject *Sender)
{
	frxPreview1->Print();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::N3Click(TObject *Sender)
{
	frxPDFExport1->FileName = L"����� ����������";
	frxPDFExport1->ShowDialog = true;
	frxPDFExport1->Quality = 100;
	frxReport1->PrepareReport(/* clearLastReport= */true);
	frxReport1->Export(frxPDFExport1);
}
//---------------------------------------------------------------------------
