object Form4: TForm4
  Left = 0
  Top = 0
  Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1089#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1100
  ClientHeight = 360
  ClientWidth = 660
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 136
    Width = 86
    Height = 14
    Caption = #1057#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 16
    Top = 183
    Width = 60
    Height = 14
    Caption = #1060#1072#1082#1091#1083#1100#1090#1077#1090
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 16
    Top = 235
    Width = 83
    Height = 14
    Caption = #1050#1074#1072#1083#1080#1092#1080#1082#1072#1094#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 657
    Height = 120
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
        FieldName = 'specialty'
        Title.Caption = #1057#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1100
        Width = 266
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'facultet'
        Title.Caption = #1060#1072#1082#1091#1083#1100#1090#1077#1090
        Width = 163
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Qualification'
        Title.Caption = #1050#1074#1072#1083#1080#1092#1080#1082#1072#1094#1080#1103
        Width = 82
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Full-time'
        Title.Caption = #1054#1095#1085#1086
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Extramural'
        Title.Caption = #1047#1072#1086#1095#1085#1086
        Visible = True
      end>
  end
  object DBLookupComboBox1: TDBLookupComboBox
    Left = 16
    Top = 203
    Width = 481
    Height = 21
    KeyField = 'Id_facultet'
    ListField = 'facultet'
    ListSource = DataSource2
    TabOrder = 1
  end
  object BitBtn1: TBitBtn
    Left = 16
    Top = 294
    Width = 89
    Height = 33
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = BitBtn1Click
  end
  object BitBtn4: TBitBtn
    Left = 552
    Top = 294
    Width = 89
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = BitBtn4Click
  end
  object BitBtn5: TBitBtn
    Left = 127
    Top = 294
    Width = 89
    Height = 33
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = BitBtn5Click
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 341
    Width = 660
    Height = 19
    Panels = <
      item
        Width = 50
      end>
  end
  object DBEdit1: TDBEdit
    Left = 552
    Top = 156
    Width = 65
    Height = 21
    DataField = 'specialty'
    DataSource = DataSource1
    TabOrder = 6
    Visible = False
  end
  object Edit1: TEdit
    Left = 16
    Top = 156
    Width = 481
    Height = 21
    TabOrder = 7
  end
  object ComboBox1: TComboBox
    Left = 16
    Top = 255
    Width = 161
    Height = 21
    TabOrder = 8
    Items.Strings = (
      #1041#1072#1082#1072#1083#1072#1074#1088#1080#1072#1090
      #1052#1072#1075#1080#1089#1090#1088#1072#1090#1091#1088#1072
      #1057#1087#1077#1094#1080#1072#1083#1080#1090#1077#1090
      #1040#1089#1087#1080#1088#1072#1085#1090#1091#1088#1072)
  end
  object CheckBox1: TCheckBox
    Left = 208
    Top = 257
    Width = 97
    Height = 17
    Caption = #1045#1089#1090#1100' '#1086#1095#1085#1072#1103
    TabOrder = 9
  end
  object CheckBox2: TCheckBox
    Left = 311
    Top = 257
    Width = 97
    Height = 17
    Caption = #1045#1089#1090#1100' '#1079#1072#1086#1095#1085#1072#1103
    TabOrder = 10
  end
  object MainMenu1: TMainMenu
    Left = 592
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100
        OnClick = N2Click
      end
      object N3: TMenuItem
        Caption = #1047#1072#1082#1088#1099#1090#1100
        OnClick = N3Click
      end
    end
    object N4: TMenuItem
      Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
    end
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
    Left = 16
    Top = 80
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'USE FosterComission'
      'SELECT [Id_specialty]'
      '      ,[specialty]'
      '      ,[facultet].[facultet]'
      '      ,[specialty].[Id_facultet]'
      '      ,[Qualification]'
      '      ,[Full-time]'
      '      ,[Extramural]'
      '  FROM specialty'
      '  JOIN facultet ON specialty.Id_facultet = facultet.Id_facultet')
    Left = 80
    Top = 80
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 144
    Top = 80
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2
    Left = 320
    Top = 176
  end
  object ADOQuery2: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'USE FosterComission'
      'SELECT   *'
      '  FROM facultet')
    Left = 392
    Top = 176
  end
end
