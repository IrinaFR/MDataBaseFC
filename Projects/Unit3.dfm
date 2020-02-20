object Form3: TForm3
  Left = 0
  Top = 0
  Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1092#1072#1082#1091#1083#1100#1090#1077#1090
  ClientHeight = 286
  ClientWidth = 456
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
    Left = 8
    Top = 144
    Width = 122
    Height = 14
    Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1092#1072#1082#1091#1083#1100#1090#1077#1090#1072
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
    Width = 457
    Height = 129
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
        FieldName = 'Id_facultet'
        Title.Caption = #8470
        Width = 37
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'facultet'
        Title.Caption = #1060#1072#1082#1091#1083#1100#1090#1077#1090
        Width = 372
        Visible = True
      end>
  end
  object BitBtn1: TBitBtn
    Left = 8
    Top = 201
    Width = 105
    Height = 33
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = BitBtn1Click
  end
  object DBEdit1: TDBEdit
    Left = 8
    Top = 164
    Width = 438
    Height = 21
    DataField = 'facultet'
    DataSource = DataSource1
    TabOrder = 2
  end
  object BitBtn3: TBitBtn
    Left = 165
    Top = 201
    Width = 105
    Height = 33
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = BitBtn3Click
  end
  object BitBtn4: TBitBtn
    Left = 341
    Top = 201
    Width = 105
    Height = 33
    Caption = #1047#1072#1082#1088#1099#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 267
    Width = 456
    Height = 19
    Panels = <>
    ExplicitTop = 266
  end
  object MainMenu1: TMainMenu
    Left = 392
    Top = 8
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      end
      object N3: TMenuItem
        Caption = #1054#1090#1084#1077#1085#1080#1090#1100
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
      'RESS'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 384
    Top = 56
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'USE FosterComission'
      'Select * FROM facultet')
    Left = 328
    Top = 8
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 328
    Top = 64
  end
end
