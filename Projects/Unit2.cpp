//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::DBLookupComboBox1Click(TObject *Sender)
{
 String valueFacultet = DBLookupComboBox1->Text;
 ADOQuery1->Close();
 ADOQuery1->SQL->Text = "USE FosterComission SELECT Id_specialty, specialty FROM specialty JOIN facultet ON specialty.Id_facultet = facultet.Id_facultet WHERE (facultet='" + valueFacultet + "')";
 Memo1->Lines->Text = valueFacultet + ' ' + ADOQuery1->SQL->Text;
 ADOQuery1->Active = true;
 ADOQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn4Click(TObject *Sender)
{
	//Form1->ADOQuery1->SQL->Clear();
	//Form1->ADOQuery1->SQL->Add()"";
	Form1->ADOQuery1->Active = true;
	Form2->Close();
}
//---------------------------------------------------------------------------

