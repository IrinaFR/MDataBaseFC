//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "frxClass.hpp"
#include "frxPreview.hpp"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include "frxDBSet.hpp"
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include "frxTableObject.hpp"
#include "frxExportBaseDialog.hpp"
#include "frxExportPDF.hpp"
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TfrxReport *frxReport1;
	TfrxPreview *frxPreview1;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TfrxDBDataset *frxDBDataset1;
	TADOQuery *ADOQuery1;
	TfrxDBDataset *frxDBDataset2;
	TfrxDBDataset *frxDBDataset3;
	TfrxDBDataset *frxDBDataset4;
	TfrxDBDataset *frxDBDataset5;
	TfrxDBDataset *frxDBDataset6;
	TfrxDBDataset *frxDBDataset7;
	TADOQuery *ADOQuery2;
	TADOQuery *ADOQuery3;
	TADOQuery *ADOQuery4;
	TADOQuery *ADOQuery5;
	TADOQuery *ADOQuery6;
	TADOQuery *ADOQuery7;
	TfrxReportTableObject *frxReportTableObject1;
	TfrxPDFExport *frxPDFExport1;
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif