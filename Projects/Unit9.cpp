//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxPreview"
#pragma link "frxExportBaseDialog"
#pragma link "frxExportPDF"
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::N3Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm9::N2Click(TObject *Sender)
{
    frxPreview1->Print();
}
//---------------------------------------------------------------------------

void __fastcall TForm9::PDF1Click(TObject *Sender)
{
	frxPDFExport1->FileName = L"Абитуриент";
	frxPDFExport1->ShowDialog = true;
	frxPDFExport1->Quality = 100;
	frxReport1->PrepareReport(/* clearLastReport= */true);
	frxReport1->Export(frxPDFExport1);
}
//---------------------------------------------------------------------------


