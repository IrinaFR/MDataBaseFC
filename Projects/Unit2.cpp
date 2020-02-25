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
	//���������� ������������� ��� ��������� ���� ���������
	String valueFacultet = DBLookupComboBox1->Text;
	ADOQuery1->Close();
	ADOQuery1->SQL->Text = "USE FosterComission SELECT Id_specialty, specialty FROM specialty JOIN facultet ON specialty.Id_facultet = facultet.Id_facultet WHERE (facultet='" + valueFacultet + "')";
	ADOQuery1->Active = true;
 	ADOQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::BitBtn4Click(TObject *Sender)
{
    //���������� ����� ������ ��������
	valueCheckBox();
	ADOQuery3->SQL->Text = "INSERT INTO abiturient ([Surname],[Name],[Patronymic],[DateBorn],[FormLearning],[Id_facultet],[Qualification],[Id_specialty],[Statement],[Passport],[Photo],[Diplom],[QtyFive],[QtyFour],[QtyThree],[NeedHostel],[EntryExams],[USE],[Mathematics],[RussianLanguage],[Id_subject],[BallsProfile],[Info]) VALUES ('" +Edit1->Text+ "', '"+Edit2->Text+"', '" +Edit3->Text+ "', '" +DateTimePicker2->Date+ "', '" +ComboBox1->Text+ "', '" +DBLookupComboBox1->KeyValue+ "', '" +DBText1->Caption+ "', '" +DBLookupComboBox2->KeyValue+ "', '" +Check1+ "', '" +Check2+ "', '" +Check3+ "', '" +Check4+ "', '" +Edit4->Text+ "', '" +Edit5->Text+ "', '" +Edit6->Text+ "', '" +Check5+ "', '" +Check6+ "', '" +Check7+ "', '" +Edit7->Text+ "', '" +Edit8->Text+ "', '" +DBLookupComboBox3->KeyValue+ "', '" +Edit9->Text+ "', '" +Memo1->Lines->Text+ "')" ;
	ADOQuery3->ExecSQL();
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->Active = true;
	Form2->Close();
}
//---------------------------------------------------------------------------



void __fastcall TForm2::DBLookupComboBox2Click(TObject *Sender)
{
    //����� ������������ � ����������� �� ������ �������������
	String valueSpecialty = DBLookupComboBox2->Text;
	ADOQuery4->SQL->Text = "USE FosterComission SELECT Qualification FROM specialty WHERE specialty = '" +valueSpecialty+ "'";
	ADOQuery4->Active = true;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::BitBtn2Click(TObject *Sender)
{
	//������ ������
	deleteValue();
	Close();
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N3Click(TObject *Sender)
{
	//������ ����\������
	deleteValue();
	Close();
	Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N4Click(TObject *Sender)
{
	//���������� ����������� � ���������� Grid � Form1
	//����� ����\��������
	valueCheckBox();
	ADOQuery3->SQL->Text = "INSERT INTO abiturient ([Surname],[Name],[Patronymic],[DateBorn],[FormLearning],[Id_facultet],[Qualification],[Id_specialty],[Statement],[Passport],[Photo],[Diplom],[QtyFive],[QtyFour],[QtyThree],[NeedHostel],[EntryExams],[USE],[Mathematics],[RussianLanguage],[Id_subject],[BallsProfile],[Info]) VALUES ('" +Edit1->Text+ "', '"+Edit2->Text+"', '" +Edit3->Text+ "', '" +DateTimePicker2->Date+ "', '" +ComboBox1->Text+ "', '" +DBLookupComboBox1->KeyValue+ "', '" +DBText1->Caption+ "', '" +DBLookupComboBox2->KeyValue+ "', '" +Check1+ "', '" +Check2+ "', '" +Check3+ "', '" +Check4+ "', '" +Edit4->Text+ "', '" +Edit5->Text+ "', '" +Edit6->Text+ "', '" +Check5+ "', '" +Check6+ "', '" +Check7+ "', '" +Edit7->Text+ "', '" +Edit8->Text+ "', '" +DBLookupComboBox3->KeyValue+ "', '" +Edit9->Text+ "', '" +Memo1->Lines->Text+ "')" ;
	ADOQuery3->ExecSQL();
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->Active = true;
	Form2->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N5Click(TObject *Sender)
{
	//������� ���� �����
	deleteValue();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::BitBtn1Click(TObject *Sender)
{
	//���������� ����� ������ �������� � �����������
	valueCheckBox();
	ADOQuery3->SQL->Text = "INSERT INTO abiturient ([Surname],[Name],[Patronymic],[DateBorn],[FormLearning],[Id_facultet],[Qualification],[Id_specialty],[Statement],[Passport],[Photo],[Diplom],[QtyFive],[QtyFour],[QtyThree],[NeedHostel],[EntryExams],[USE],[Mathematics],[RussianLanguage],[Id_subject],[BallsProfile],[Info]) VALUES ('" +Edit1->Text+ "', '"+Edit2->Text+"', '" +Edit3->Text+ "', '" +DateTimePicker2->Date+ "', '" +ComboBox1->Text+ "', '" +DBLookupComboBox1->KeyValue+ "', '" +DBText1->Caption+ "', '" +DBLookupComboBox2->KeyValue+ "', '" +Check1+ "', '" +Check2+ "', '" +Check3+ "', '" +Check4+ "', '" +Edit4->Text+ "', '" +Edit5->Text+ "', '" +Edit6->Text+ "', '" +Check5+ "', '" +Check6+ "', '" +Check7+ "', '" +Edit7->Text+ "', '" +Edit8->Text+ "', '" +DBLookupComboBox3->KeyValue+ "', '" +Edit9->Text+ "', '" +Memo1->Lines->Text+ "')" ;
	ADOQuery3->ExecSQL();
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::N6Click(TObject *Sender)
{
	//���������� ������ ����� ����\�������� � �����������
    valueCheckBox();
	ADOQuery3->SQL->Text = "INSERT INTO abiturient ([Surname],[Name],[Patronymic],[DateBorn],[FormLearning],[Id_facultet],[Qualification],[Id_specialty],[Statement],[Passport],[Photo],[Diplom],[QtyFive],[QtyFour],[QtyThree],[NeedHostel],[EntryExams],[USE],[Mathematics],[RussianLanguage],[Id_subject],[BallsProfile],[Info]) VALUES ('" +Edit1->Text+ "', '"+Edit2->Text+"', '" +Edit3->Text+ "', '" +DateTimePicker2->Date+ "', '" +ComboBox1->Text+ "', '" +DBLookupComboBox1->KeyValue+ "', '" +DBText1->Caption+ "', '" +DBLookupComboBox2->KeyValue+ "', '" +Check1+ "', '" +Check2+ "', '" +Check3+ "', '" +Check4+ "', '" +Edit4->Text+ "', '" +Edit5->Text+ "', '" +Edit6->Text+ "', '" +Check5+ "', '" +Check6+ "', '" +Check7+ "', '" +Edit7->Text+ "', '" +Edit8->Text+ "', '" +DBLookupComboBox3->KeyValue+ "', '" +Edit9->Text+ "', '" +Memo1->Lines->Text+ "')" ;
	ADOQuery3->ExecSQL();
	Form1->ADOQuery1->Active = false;
	Form1->ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

