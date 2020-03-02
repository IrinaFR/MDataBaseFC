object Form5: TForm5
  Left = 0
  Top = 0
  Caption = #1055#1088#1086#1092#1080#1083#1100#1085#1099#1077' '#1087#1088#1077#1076#1084#1077#1090#1099
  ClientHeight = 253
  ClientWidth = 400
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
    Top = 138
    Width = 100
    Height = 13
    Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1087#1088#1077#1076#1084#1077#1090#1072
  end
  object Label2: TLabel
    Left = 271
    Top = 138
    Width = 83
    Height = 13
    Caption = #1055#1088#1086#1093#1086#1076#1085#1086#1081' '#1073#1072#1083#1083
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 401
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
        FieldName = 'Name'
        Title.Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1087#1088#1077#1076#1084#1077#1090#1072
        Width = 276
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'PassingScore'
        Title.Caption = #1055#1088#1086#1093#1086#1076#1085#1086#1081' '#1073#1072#1083#1083
        Width = 90
        Visible = True
      end>
  end
  object BitBtn1: TBitBtn
    Left = 8
    Top = 200
    Width = 89
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
  object BitBtn2: TBitBtn
    Left = 139
    Top = 200
    Width = 89
    Height = 33
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = BitBtn2Click
  end
  object BitBtn3: TBitBtn
    Left = 306
    Top = 200
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
    OnClick = BitBtn3Click
  end
  object Edit1: TEdit
    Left = 8
    Top = 157
    Width = 220
    Height = 21
    TabOrder = 4
  end
  object Edit2: TEdit
    Left = 271
    Top = 157
    Width = 121
    Height = 21
    TabOrder = 5
  end
  object DBEdit1: TDBEdit
    Left = 127
    Top = 126
    Width = 121
    Height = 21
    DataField = 'Name'
    DataSource = DataSource1
    TabOrder = 6
    Visible = False
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = Form1.ADOConnection1
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      
        'USE FosterComission SELECT [Id_subject], [Name], [PassingScore] ' +
        'FROM Subject')
    Left = 160
    Top = 24
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 216
    Top = 48
  end
  object MainMenu1: TMainMenu
    Left = 280
    Top = 24
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '
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
end
