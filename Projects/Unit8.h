//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TDBEdit *DBEdit1;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TLabel *Label1;
	TDBEdit *DBEdit2;
	TLabel *Label2;
	TDBEdit *DBEdit3;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TDBEdit *DBEdit8;
	TLabel *Label10;
	TDBEdit *DBEdit9;
	TLabel *Label11;
	TDBEdit *DBEdit10;
	TDBMemo *DBMemo1;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TDBEdit *DBEdit11;
	TDBLookupComboBox *DBLookupComboBox1;
	TDBLookupComboBox *DBLookupComboBox2;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TDataSource *DataSource2;
	TADOQuery *ADOQuery2;
	TDataSource *DataSource3;
	TADOQuery *ADOQuery3;
	TDBText *DBText1;
	TADOQuery *ADOQuery4;
	TDataSource *DataSource4;
	TDBComboBox *DBComboBox1;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TDBComboBox *DBComboBox2;
	TLabel *Label15;
	TDBComboBox *DBComboBox3;
	TLabel *Label16;
	TDBComboBox *DBComboBox4;
	TLabel *Label17;
	TDBComboBox *DBComboBox5;
	TLabel *Label18;
	TDBComboBox *DBComboBox6;
	TLabel *Label19;
	TDBComboBox *DBComboBox7;
	TLabel *Label20;
	TDBEdit *DBEdit4;
	TLabel *Label21;
	TDBEdit *DBEdit6;
	TLabel *Label22;
	TDBEdit *DBEdit7;
	TDBLookupComboBox *DBLookupComboBox3;
	TADOQuery *ADOQuery5;
	TDBComboBox *DBComboBox8;
	TDBEdit *DBEdit5;
	void __fastcall DBLookupComboBox1Click(TObject *Sender);
	void __fastcall DBLookupComboBox2Click(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
