object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1043#1083#1072#1074#1085#1072#1103
  ClientHeight = 246
  ClientWidth = 713
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 361
    Top = 11
    Width = 92
    Height = 13
    Caption = #1055#1086#1080#1089#1082' '#1087#1086' '#1092#1072#1084#1080#1083#1080#1080
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 41
    Width = 713
    Height = 120
    Cursor = crNo
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Id_abiturient'
        Title.Caption = #8470
        Width = 40
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Surname'
        Title.Caption = #1060#1072#1084#1080#1083#1080#1103
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Name'
        Title.Caption = #1048#1084#1103
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Patronymic'
        Title.Caption = #1054#1090#1095#1077#1089#1090#1074#1086
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'FormLearning'
        Title.Caption = #1060#1086#1088#1084#1072
        Width = 60
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Qualification'
        Title.Caption = #1050#1074#1072#1083#1080#1092#1080#1082#1072#1094#1080#1103
        Width = 80
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'specialty'
        Title.Caption = #1057#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1100
        Width = 197
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'EntryExams'
        Title.Caption = #1042#1089#1090#1091#1087#1080#1090#1077#1083#1100#1085#1099#1077
        Width = 40
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'USE'
        Title.Caption = #1045#1043#1069
        Width = 32
        Visible = True
      end>
  end
  object SearchBox1: TSearchBox
    Left = 456
    Top = 8
    Width = 257
    Height = 21
    Cursor = crIBeam
    TabOrder = 1
    OnChange = SearchBox1Change
  end
  object BitBtn1: TBitBtn
    Left = 544
    Top = 178
    Width = 161
    Height = 33
    Cursor = crHandPoint
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1072#1073#1080#1090#1091#1088#1080#1077#1085#1090#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 8
    Top = 178
    Width = 101
    Height = 33
    Cursor = crHandPoint
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
  end
  object BitBtn3: TBitBtn
    Left = 115
    Top = 178
    Width = 101
    Height = 33
    Cursor = crHandPoint
    Caption = #1050#1086#1087#1080#1088#1086#1074#1072#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = BitBtn3Click
  end
  object BitBtn4: TBitBtn
    Left = 222
    Top = 178
    Width = 101
    Height = 33
    Cursor = crHandPoint
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Kind = bkAbort
    NumGlyphs = 2
    ParentFont = False
    TabOrder = 5
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=FosterComission;Data Source=USER\SQLEXP' +
      'RESS;Use Procedure for Prepare=1;Auto Translate=True;Packet Size' +
      '=4096;Workstation ID=USER;Use Encryption for Data=False;Tag with' +
      ' column collation when possible=False'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 40
    Top = 96
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT [Id_abiturient]'
      '      ,[Surname]'
      '      ,[Name]'
      '      ,[Patronymic]'
      '      ,[FormLearning]'
      '      ,[abiturient].[Qualification]'
      '      ,[specialty].[specialty]'
      '      ,[EntryExams]'
      '      ,[USE]'
      '    '
      '  FROM abiturient'
      
        ' JOIN specialty ON abiturient.Id_specialty = specialty.Id_specia' +
        'lty')
    Left = 120
    Top = 96
  end
  object DataSource1: TDataSource
    AutoEdit = False
    DataSet = ADOQuery1
    Left = 200
    Top = 96
  end
end