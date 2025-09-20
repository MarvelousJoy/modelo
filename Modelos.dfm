object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 408
  ClientWidth = 694
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
  object Edit1: TEdit
    Left = 121
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 256
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit2'
  end
  object StringGrid1: TStringGrid
    Left = 121
    Top = 112
    Width = 392
    Height = 225
    ColCount = 7
    DefaultColWidth = 50
    DefaultRowHeight = 40
    FixedCols = 0
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 2
  end
  object MainMenu1: TMainMenu
    Left = 608
    Top = 176
    object Modelo11: TMenuItem
      Caption = 'Modelo 1'
      object Ejercicio11: TMenuItem
        Caption = 'Ejercicio 1'
        OnClick = Ejercicio11Click
      end
      object Ejercicio21: TMenuItem
        Caption = 'Ejercicio 2'
        OnClick = Ejercicio21Click
      end
      object Ejercicio31: TMenuItem
        Caption = 'Ejercicio 3'
        OnClick = Ejercicio31Click
      end
    end
  end
end
