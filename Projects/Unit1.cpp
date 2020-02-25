//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
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
    //Form1->Hide();
	Form2->Show();

}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn3Click(TObject *Sender)
{
	Form2->Show();
	String Name = DBEdit1->Text;
	Form2->Edit1->Text = Name;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::SearchBox1Change(TObject *Sender)
{
    // �����
	String valueSearch = SearchBox1->Text;
	ADOQuery1->Close();
	ADOQuery1->SQL->Text = "SELECT [Id_abiturient],[Surname],[Name],[Patronymic],[FormLearning],[abiturient].[Qualification],[specialty].[specialty],[EntryExams],[USE] FROM abiturient JOIN specialty ON abiturient.Id_specialty = specialty.Id_specialty WHERE Surname LIKE '" +valueSearch+"%'";
	ADOQuery1->Active = true;
	ADOQuery1->Open();
	if(SearchBox1->Text == ""){
		ADOQuery1->SQL->Text = "USE FosterComission SELECT TOP 50 [Id_abiturient],[Surname],[Name],[Patronymic],[DateBorn],[FormLearning],[abiturient].[Qualification],[specialty].[specialty],[EntryExams],[USE] FROM abiturient JOIN specialty ON abiturient.Id_specialty = specialty.Id_specialty ORDER BY Id_abiturient DESC";
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn4Click(TObject *Sender)
{
	// ������ �������
	if(mrOk==MessageDlg("�� ����� ������ ������� ("+DBEdit1->Text+")?", mtConfirmation,  TMsgDlgButtons() <<mbOK<<mbCancel , 0)) {
		ADOQuery1->SQL->Text = "DELETE abiturient WHERE Surname = ('" +DBEdit1->Text+ "')";
		ADOQuery1->ExecSQL();
		ADOQuery1->SQL->Text = "USE FosterComission SELECT TOP 50 [Id_abiturient],[Surname],[Name],[Patronymic],[DateBorn],[FormLearning],[abiturient].[Qualification],[specialty].[specialty],[EntryExams],[USE] FROM abiturient JOIN specialty ON abiturient.Id_specialty = specialty.Id_specialty ORDER BY Id_abiturient DESC";
		ADOQuery1->Active = true;
		ShowMessage("������ �������");
	} else{}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
	Form4->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N7Click(TObject *Sender)
{
	Form5->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N5Click(TObject *Sender)
{
    Form3->Show();
}
//---------------------------------------------------------------------------


