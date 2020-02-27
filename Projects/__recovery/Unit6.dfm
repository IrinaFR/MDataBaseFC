object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Form6'
  ClientHeight = 276
  ClientWidth = 537
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object frxPreview1: TfrxPreview
    Left = 0
    Top = 0
    Width = 537
    Height = 276
    Align = alClient
    OutlineVisible = True
    OutlineWidth = 121
    ThumbnailVisible = False
    FindFmVisible = False
    OnClick = frxPreview1Click
    UseReportHints = True
    HideScrolls = False
    ExplicitLeft = 200
    ExplicitTop = 104
    ExplicitWidth = 100
    ExplicitHeight = 100
  end
  object frxReport1: TfrxReport
    Version = '6.5.11'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick, pbCopy, pbSelection]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = 'Default'
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 43886.984561504600000000
    ReportOptions.LastChange = 43886.984561504600000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      ''
      'begin'
      ''
      'end.')
    Left = 48
    Top = 72
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
      end
      item
        DataSet = frxDBDataset2
        DataSetName = 'frxDBDataset2'
      end
      item
        DataSet = frxDBDataset3
        DataSetName = 'frxDBDataset3'
      end
      item
        DataSet = frxDBDataset4
        DataSetName = 'frxDBDataset4'
      end
      item
        DataSet = frxDBDataset5
        DataSetName = 'frxDBDataset5'
      end
      item
        DataSet = frxReport1.ADOQuery1
        DataSetName = 'ADOQuery1'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
      object ADOQuery1: TfrxADOQuery
        UserName = 'ADOQuery1'
        CloseDataSource = True
        BCDToCurrency = False
        IgnoreDupParams = False
        Params = <>
        SQL.Strings = (
          
            'SELECT * FROM facultet                                          ' +
            '       ')
        CommandTimeout = 30
        LockType = ltReadOnly
        pLeft = 44
        pTop = 32
        Parameters = <>
      end
      object ADODatabase1: TfrxADODatabase
        pLeft = 120
        pTop = 36
      end
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      Frame.Typ = []
      MirrorMode = []
      object ReportTitle1: TfrxReportTitle
        FillType = ftBrush
        Frame.Typ = []
        Height = 45.354360000000000000
        Top = 16.000000000000000000
        Width = 718.110700000000000000
        object Memo2: TfrxMemoView
          AllowVectorExport = True
          Left = 181.417440000000000000
          Top = 3.779530000000000000
          Width = 393.071120000000000000
          Height = 30.236240000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -27
          Font.Name = 'Arial'
          Font.Style = [fsBold]
          Frame.Typ = []
          HAlign = haCenter
          Memo.UTF8W = (
            #1054#1090#1095#1105#1090'. '#1054#1073#1097#1072#1103' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1103)
          ParentFont = False
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Frame.Typ = []
        Height = 366.614410000000000000
        Top = 80.000000000000000000
        Width = 718.110700000000000000
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDataset1'
        RowCount = 0
        object Memo3: TfrxMemoView
          AllowVectorExport = True
          Top = 11.338590000000000000
          Width = 487.559370000000000000
          Height = 18.897650000000000000
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDataset1'
          Frame.Typ = []
          Memo.UTF8W = (
            #1042#1089#1077#1075#1086' '#1072#1073#1080#1090#1091#1088#1080#1077#1085#1090#1086#1074' '#1079#1072#1088#1077#1075#1080#1089#1090#1088#1080#1088#1086#1074#1072#1085#1086': [frxDBDataset1."COLUMN1"]')
        end
        object Memo4: TfrxMemoView
          AllowVectorExport = True
          Top = 45.354360000000000000
          Width = 491.338900000000000000
          Height = 18.897650000000000000
          DataSet = frxDBDataset2
          DataSetName = 'frxDBDataset2'
          Frame.Typ = []
          Memo.UTF8W = (
            #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1092#1072#1082#1091#1083#1100#1090#1077#1090#1086#1074': [frxDBDataset2."COLUMN1"]')
        end
        object Memo5: TfrxMemoView
          AllowVectorExport = True
          Top = 272.126160000000000000
          Width = 491.338900000000000000
          Height = 18.897650000000000000
          DataSet = frxDBDataset3
          DataSetName = 'frxDBDataset3'
          Frame.Typ = []
          Memo.UTF8W = (
            #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1089#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1077#1081': [frxDBDataset3."COLUMN1"]')
        end
        object Memo6: TfrxMemoView
          AllowVectorExport = True
          Top = 294.803340000000000000
          Width = 491.338900000000000000
          Height = 18.897650000000000000
          DataSet = frxDBDataset4
          DataSetName = 'frxDBDataset4'
          Frame.Typ = []
          Memo.UTF8W = (
            #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1087#1088#1086#1092#1080#1083#1100#1085#1099#1081#1093' '#1087#1088#1077#1076#1084#1077#1090#1086#1074': [frxDBDataset4."COLUMN1"]')
        end
        object Memo7: TfrxMemoView
          AllowVectorExport = True
          Left = 3.779530000000000000
          Top = 71.811070000000000000
          Width = 487.559370000000000000
          Height = 192.756030000000000000
          DataField = 'facultet'
          DataSet = frxDBDataset5
          DataSetName = 'frxDBDataset5'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'Arial'
          Font.Style = []
          Frame.Typ = []
          Memo.UTF8W = (
            '[frxDBDataset5."facultet"]')
          ParentFont = False
        end
      end
      object PageFooter1: TfrxPageFooter
        FillType = ftBrush
        Frame.Typ = []
        Height = 22.677180000000000000
        Top = 468.000000000000000000
        Width = 718.110700000000000000
        object Memo1: TfrxMemoView
          AllowVectorExport = True
          Left = 642.520100000000000000
          Width = 75.590600000000000000
          Height = 18.897650000000000000
          Frame.Typ = []
          HAlign = haRight
          Memo.UTF8W = (
            '[Page#]')
        end
      end
    end
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDataset1'
    CloseDataSource = False
    DataSource = DataSource1
    BCDToCurrency = False
    Left = 344
    Top = 32
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'USE FosterComission SELECT COUNT(*) FROM abiturient')
    Left = 472
    Top = 32
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 400
    Top = 32
  end
  object ADOQuery2: TADOQuery
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'USE FosterComission SELECT COUNT(*) FROM facultet')
    Left = 472
    Top = 56
  end
  object frxDBDataset2: TfrxDBDataset
    UserName = 'frxDBDataset2'
    CloseDataSource = False
    DataSource = DataSource2
    BCDToCurrency = False
    Left = 344
    Top = 40
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2
    Left = 400
    Top = 48
  end
  object frxDBDataset3: TfrxDBDataset
    UserName = 'frxDBDataset3'
    CloseDataSource = False
    DataSource = DataSource3
    BCDToCurrency = False
    Left = 344
    Top = 56
  end
  object frxDBDataset4: TfrxDBDataset
    UserName = 'frxDBDataset4'
    CloseDataSource = False
    DataSource = DataSource4
    BCDToCurrency = False
    Left = 344
    Top = 88
  end
  object DataSource3: TDataSource
    DataSet = ADOQuery3
    Left = 400
    Top = 72
  end
  object DataSource4: TDataSource
    DataSet = ADOQuery4
    Left = 400
    Top = 96
  end
  object ADOQuery3: TADOQuery
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'USE FosterComission SELECT COUNT(*) FROM specialty')
    Left = 472
    Top = 72
  end
  object ADOQuery4: TADOQuery
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'USE FosterComission SELECT COUNT(*) FROM subject')
    Left = 472
    Top = 104
  end
  object frxDBDataset5: TfrxDBDataset
    UserName = 'frxDBDataset5'
    CloseDataSource = False
    DataSet = ADOTable1
    BCDToCurrency = False
    Left = 152
    Top = 216
  end
  object DataSource5: TDataSource
    DataSet = ADOTable1
    Left = 264
    Top = 224
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    TableName = 'facultet'
    Left = 208
    Top = 224
  end
end
