//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
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
void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
Form2->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
Form4->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SearchBox1Change(TObject *Sender)
{
	String valueSearch = SearchBox1->Text;
	ADOQuery1->Close();
	ADOQuery1->SQL->Text = "SELECT [Id_abiturient],[Surname],[Name],[Patronymic],[FormLearning],[abiturient].[Qualification],[specialty].[specialty],[EntryExams],[USE] FROM abiturient JOIN specialty ON abiturient.Id_specialty = specialty.Id_specialty WHERE Surname LIKE '" +valueSearch+"%'";
	ADOQuery1->Active = true;
	ADOQuery1->Open();
}
//---------------------------------------------------------------------------

