//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::BitBtn1Click(TObject *Sender)
{
	ADOQuery1->SQL->Text = "INSERT INTO Subject VALUES ('" +Edit1->Text+ "', '" +Edit2->Text+ "')" ;
	ADOQuery1->ExecSQL();
	ADOQuery1->SQL->Text = "USE FosterComission SELECT [Id_subject], [Name], [PassingScore] FROM Subject";
	ADOQuery1->Active = true;
	Edit1->Text = "";
	Edit2->Text = "";
    Form2->ADOTable3->Active = false;
	Form2->ADOTable3->Active = true;

}
//---------------------------------------------------------------------------
void __fastcall TForm5::BitBtn2Click(TObject *Sender)
{
if (DBEdit1->Text == "") {
	ShowMessage("������� ������");
} else if(mrOk==MessageDlg("�� ����� ������ ������� ("+DBEdit1->Text+")?", mtConfirmation,  TMsgDlgButtons() <<mbOK<<mbCancel , 0)) {
		ADOQuery1->SQL->Text = "DELETE Subject WHERE Name = ('" +DBEdit1->Text+ "')";
		ADOQuery1->ExecSQL();
		ADOQuery1->SQL->Text = "USE FosterComission SELECT [Id_subject], [Name], [PassingScore] FROM Subject";
		ADOQuery1->Active = true;
		Form2->ADOTable3->Active = false;
		Form2->ADOTable3->Active = true;
		ShowMessage("������ �������");
} else{
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm5::BitBtn3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::N3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::N2Click(TObject *Sender)
{
	ADOQuery1->SQL->Text = "INSERT INTO Subject VALUES ('" +Edit1->Text+ "', '" +Edit2->Text+ "')" ;
	ADOQuery1->ExecSQL();
	ADOQuery1->SQL->Text = "USE FosterComission SELECT [Id_subject], [Name], [PassingScore] FROM Subject";
	ADOQuery1->Active = true;
    Edit1->Text = "";
	Edit2->Text = "";
	Form2->ADOTable3->Active = false;
	Form2->ADOTable3->Active = true;

}
//---------------------------------------------------------------------------