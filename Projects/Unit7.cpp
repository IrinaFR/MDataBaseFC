//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit1.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxPreview"
#pragma link "frxExportBaseDialog"
#pragma link "frxExportPDF"
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::N3Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::N2Click(TObject *Sender)
{
	frxPreview1->Print();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::PDF1Click(TObject *Sender)
{
    frxPDFExport1->FileName = L"Список абитуриентов";
	frxPDFExport1->ShowDialog = true;
	frxPDFExport1->Quality = 100;
	frxReport1->PrepareReport(/* clearLastReport= */true);
	frxReport1->Export(frxPDFExport1);
}
//---------------------------------------------------------------------------

