//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::BitBtn4Click(TObject *Sender)
{
    //кнопка закрыть
	Edit1->Text = "";
	CheckBox1->Checked = 0;
	CheckBox2->Checked = 0;
	Close();
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn1Click(TObject *Sender)
{
	//Кнопка добавить
	if(Edit1->Text == "" || DBLookupComboBox1->Text == "" || ComboBox1->Text == "") {
		ShowMessage("Вы заполнили не все поля");
	} else {
		String Check1;
		String Check2;
		if(CheckBox1->Checked == 1){
			Check1 = "Да";
		} else{
			Check1 = "Нет";
		}
		if(CheckBox1->Checked == 1){
			Check2 = "Да";
		} else{
			Check2 = "Нет";
		}
		ADOQuery1->SQL->Text = "INSERT INTO specialty VALUES ('" +Edit1->Text+ "', '"+DBLookupComboBox1->KeyValue+"', '" +ComboBox1->Text+ "', '" +Check1+ "', '" +Check2+ "')" ;
		ADOQuery1->ExecSQL();
		ADOQuery1->SQL->Text = "USE FosterComission SELECT [specialty], [facultet].[facultet], [specialty].[Id_facultet], [Qualification], [Full-time], [Extramural] FROM specialty JOIN facultet ON specialty.Id_facultet = facultet.Id_facultet";
		ADOQuery1->Active = true;
		Edit1->Text = "";
		CheckBox1->Checked = 0;
		CheckBox2->Checked = 0;
		Form2->ADOQuery1->Active = false;
		Form2->ADOQuery1->Active = true;
		Form2->ADOQuery1->Active = false;
		StatusBar1->Panels->Items[0]->Text = "Специальность успешно добавлена";
		Form6->ADOQuery6->Active = false;
		Form6->ADOQuery3->Active = false;
		Form6->ADOQuery6->Active = true;
		Form6->ADOQuery3->Active = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn5Click(TObject *Sender)
{
	//кнопка удалить
	if(mrOk==MessageDlg("Вы точно хотите удалить специальность ("+DBEdit1->Text+")?", mtConfirmation,  TMsgDlgButtons() <<mbOK<<mbCancel , 0)) {
		ADOQuery1->SQL->Text = "DELETE specialty WHERE specialty = ('" +DBEdit1->Text+ "')";
		ADOQuery1->ExecSQL();
		ADOQuery1->SQL->Text = "USE FosterComission SELECT [specialty], [facultet].[facultet], [specialty].[Id_facultet], [Qualification], [Full-time], [Extramural] FROM specialty JOIN facultet ON specialty.Id_facultet = facultet.Id_facultet";
		ADOQuery1->Active = true;
        Form2->ADOQuery1->Active = false;
		Form2->ADOQuery1->Active = true;
		Form2->ADOQuery1->Active = false;
		StatusBar1->Panels->Items[0]->Text = "Специальность успешно удалена";
		Form6->ADOQuery6->Active = false;
		Form6->ADOQuery3->Active = false;
		Form6->ADOQuery6->Active = true;
		Form6->ADOQuery3->Active = true;
	} else{}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::N3Click(TObject *Sender)
{
	//файл\закрыть
	Edit1->Text = "";
	CheckBox1->Checked = 0;
	CheckBox2->Checked = 0;
	Close();
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::N2Click(TObject *Sender)
{
	//Добавление данных через файл\добавить
	if(Edit1->Text == "" || DBLookupComboBox1->Text == "" || ComboBox1->Text == "") {
		ShowMessage("Вы заполнили не все поля");
	} else {
		String Check1;
		String Check2;
		if(CheckBox1->Checked == 1){
			Check1 = "Да";
		} else{
			Check1 = "Нет";
		}
		if(CheckBox1->Checked == 1){
			Check2 = "Да";
		} else{
			Check2 = "Нет";
		}
		ADOQuery1->SQL->Text = "INSERT INTO specialty VALUES ('" +Edit1->Text+ "', '"+DBLookupComboBox1->KeyValue+"', '" +ComboBox1->Text+ "', '" +Check1+ "', '" +Check2+ "')" ;
		ADOQuery1->ExecSQL();
		ADOQuery1->SQL->Text = "USE FosterComission SELECT [specialty], [facultet].[facultet], [specialty].[Id_facultet], [Qualification], [Full-time], [Extramural] FROM specialty JOIN facultet ON specialty.Id_facultet = facultet.Id_facultet";
		ADOQuery1->Active = true;
		Edit1->Text = "";
		CheckBox1->Checked = 0;
		CheckBox2->Checked = 0;
		Form2->ADOQuery1->Active = false;
		Form2->ADOQuery1->Active = true;
		Form2->ADOQuery1->Active = false;
		StatusBar1->Panels->Items[0]->Text = "Специальность успешно добавлена";
		Form6->ADOQuery6->Active = false;
		Form6->ADOQuery3->Active = false;
		Form6->ADOQuery6->Active = true;
		Form6->ADOQuery3->Active = true;
	}
}
//---------------------------------------------------------------------------

