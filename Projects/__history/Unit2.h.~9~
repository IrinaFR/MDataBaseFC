//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
//Функция очистки полей

class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TBitBtn *BitBtn4;
	TMemo *Memo1;
	TPanel *Panel1;
	TDataSource *DataSource1;
	TDataSource *DataSource2;
	TADOTable *ADOTable2;
	TADOQuery *ADOQuery1;
	TDateTimePicker *DateTimePicker2;
	TDataSource *DataSource3;
	TDBLookupComboBox *DBLookupComboBox3;
	TDataSource *DataSource4;
	TADOTable *ADOTable3;
	TPanel *Panel3;
	TADOQuery *ADOQuery2;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TCheckBox *CheckBox4;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TCheckBox *CheckBox5;
	TCheckBox *CheckBox6;
	TCheckBox *CheckBox7;
	TADOQuery *ADOQuery3;
	TPanel *Panel2;
	TDBLookupComboBox *DBLookupComboBox1;
	TDBLookupComboBox *DBLookupComboBox2;
	TComboBox *ComboBox1;
	TDataSource *DataSource5;
	TADOQuery *ADOQuery4;
	TDBText *DBText1;
	TDBEdit *DBEdit1;
	void __fastcall DBLookupComboBox1Click(TObject *Sender);
	void __fastcall BitBtn4Click(TObject *Sender);
	void __fastcall DBLookupComboBox2Click(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);

	//Функция очистки полей а Form 2
void deleteValue() {
	Edit1->Text = "";
	Edit2->Text = "";
	Edit3->Text = "";
	ComboBox1->Text = "";
	CheckBox1->Checked = 0;
	CheckBox2->Checked = 0;
	CheckBox3->Checked = 0;
	CheckBox4->Checked = 0;
	Edit4->Text = "";
	Edit5->Text = "";
	Edit6->Text = "";
	CheckBox5->Checked = 0;
	CheckBox6->Checked = 0;
	CheckBox7->Checked = 0;
	Edit7->Text = "";
	Edit8->Text = "";
	Edit9->Text = "";
	Memo1->Lines->Text = "";
}
	String Check1;
	String Check2;
	String Check3;
	String Check4;
	String Check5;
	String Check6;
	String Check7;
	//функция изменения true/false в CheckBox на да/нет
	void valueCheckBox() {
		if(CheckBox1->Checked == 1){
			Check1 = "Да";
		} else{
			Check1 = "Нет";
		}
		if(CheckBox2->Checked == 1){
			Check2 = "Да";
		} else{
			Check2 = "Нет";
		}
		if(CheckBox3->Checked == 1){
			Check3 = "Да";
		} else{
			Check3 = "Нет";
		}
		if(CheckBox4->Checked == 1){
			Check4 = "Да";
		} else{
			Check4 = "Нет";
		}
		if(CheckBox5->Checked == 1){
			Check5 = "Да";
		} else{
			Check5 = "Нет";
		}
		if(CheckBox6->Checked == 1){
			Check6 = "Да";
		} else{
			Check6 = "Нет";
		}
		if(CheckBox7->Checked == 1){
			Check7 = "Да";
		} else{
			Check7 = "Нет";
		}
	};
};

//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
