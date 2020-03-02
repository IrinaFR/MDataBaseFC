//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit2.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::BitBtn1Click(TObject *Sender)
{
	//Кнопка добавить
	if(Edit1->Text == ""){
		ShowMessage("Вы не заполнили поле");
	} else{
		ADOQuery1->SQL->Text = "INSERT INTO facultet VALUES ('" +Edit1->Text+ "')" ;
		ADOQuery1->ExecSQL();
		ADOQuery1->SQL->Text = "USE FosterComission Select * FROM facultet";
		Edit1->Text = "";
		ADOQuery1->Active = true;
		Form2->ADOTable2->Active = false;
		Form2->ADOTable2->Active = true;
		Form6->ADOQuery2->Active = false;
		Form6->ADOQuery2->Active = true;
		Form6->ADOQuery2->Active = false;
		Form6->ADOQuery5->Active = false;
		Form6->ADOQuery2->Active = true;
		Form6->ADOQuery5->Active = true;
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn3Click(TObject *Sender)
{
	//кнопка удалить
	if(mrOk==MessageDlg("Вы точно хотите удалить факультет("+DBEdit1->Text+")?", mtConfirmation,  TMsgDlgButtons() <<mbOK<<mbCancel , 0)) {
		ADOQuery1->SQL->Text = "DELETE facultet WHERE facultet = ('" +DBEdit1->Text+ "')";
		ADOQuery1->ExecSQL();
		ADOQuery1->SQL->Text = "USE FosterComission Select * FROM facultet";
		ADOQuery1->Active = true;
		Form2->ADOTable2->Active = false;
		Form2->ADOTable2->Active = true;
		Form6->ADOQuery2->Active = false;
		Form6->ADOQuery5->Active = false;
		Form6->ADOQuery2->Active = true;
		Form6->ADOQuery5->Active = true;
	} else{}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N2Click(TObject *Sender)
{
    //Добавление через файл\добавить
	if(Edit1->Text == ""){
		ShowMessage("Вы не заполнили поле");
	} else{
		ADOQuery1->SQL->Text = "INSERT INTO facultet VALUES ('" +Edit1->Text+ "')" ;
		ADOQuery1->ExecSQL();
		ADOQuery1->SQL->Text = "USE FosterComission Select * FROM facultet";
		Edit1->Text = "";
		ADOQuery1->Active = true;
		Form2->ADOTable2->Active = false;
		Form2->ADOTable2->Active = true;
		Form6->ADOQuery2->Active = false;
		Form6->ADOQuery5->Active = false;
		Form6->ADOQuery2->Active = true;
		Form6->ADOQuery5->Active = true;
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N3Click(TObject *Sender)
{
	//Файл\закрыть
	Edit1->Text = "";
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn4Click(TObject *Sender)
{
    //кнопка закрыть
	Edit1->Text = "";
	Close();
}
//---------------------------------------------------------------------------

