//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TfrxPreview *frxPreview1;
	TfrxReport *frxReport1;
	TfrxDBDataset *frxDBDataset1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TADOQuery *ADOQuery2;
	TfrxDBDataset *frxDBDataset2;
	TDataSource *DataSource2;
	TfrxDBDataset *frxDBDataset3;
	TfrxDBDataset *frxDBDataset4;
	TDataSource *DataSource3;
	TDataSource *DataSource4;
	TADOQuery *ADOQuery3;
	TADOQuery *ADOQuery4;
	TfrxDBDataset *frxDBDataset5;
	TDataSource *DataSource5;
	TADOTable *ADOTable1;
	void __fastcall frxPreview1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
