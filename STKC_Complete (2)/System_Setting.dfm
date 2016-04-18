object Setting_Frm: TSetting_Frm
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = 'Setting'
  ClientHeight = 536
  ClientWidth = 685
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Label2: TLabel
    Left = 16
    Top = 303
    Width = 325
    Height = 24
    Caption = 'Local Entity IP Address and Port'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 16
    Top = 303
    Width = 325
    Height = 24
    Caption = 'Local Entity IP Address and Port'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object TabControl1: TTabControl
    Left = 8
    Top = 23
    Width = 669
    Height = 505
    MultiLine = True
    TabOrder = 0
    Tabs.Strings = (
      'System'
      'Timer')
    TabIndex = 1
    object lb_t3: TLabel
      Left = 8
      Top = 40
      Width = 189
      Height = 24
      Caption = 'T3(Reply Timeout)'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object lb_t5: TLabel
      Left = 8
      Top = 70
      Width = 241
      Height = 24
      Caption = 'T5(Connect Separation)'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object lb_t6: TLabel
      Left = 8
      Top = 100
      Width = 328
      Height = 24
      Caption = 'T6(Control Transaction Timeout)'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object lb_t7: TLabel
      Left = 8
      Top = 130
      Width = 279
      Height = 24
      Caption = 'T7(NOT SELECTED Timeout)'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object lb_t9: TLabel
      Left = 8
      Top = 160
      Width = 369
      Height = 24
      Caption = 'T8 Network Inter-character Timeout'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label1: TLabel
      Left = 8
      Top = 190
      Width = 394
      Height = 24
      Caption = 'T9(Establish Communications Timeout)'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object lb_connect_mode: TLabel
      Left = 8
      Top = 220
      Width = 143
      Height = 24
      Caption = 'Connect Mode'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object lb_local_ip: TLabel
      Left = 8
      Top = 250
      Width = 233
      Height = 24
      Caption = 'Local Entity IP Address'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object lb_local_port: TLabel
      Left = 199
      Top = 280
      Width = 42
      Height = 24
      Caption = 'Port'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object tb_t3: TEdit
      Left = 448
      Top = 44
      Width = 129
      Height = 24
      ImeName = 'Microsoft IME 2010'
      NumbersOnly = True
      TabOrder = 0
      TextHint = '0~120'
      OnChange = tb_t3Change
    end
    object tb_t5: TEdit
      Left = 448
      Top = 74
      Width = 129
      Height = 24
      ImeName = 'Microsoft IME 2010'
      TabOrder = 1
      TextHint = '0~240'
      OnChange = tb_t5Change
    end
    object cb_connect_mode: TComboBox
      Left = 448
      Top = 224
      Width = 129
      Height = 24
      ImeName = 'Microsoft IME 2010'
      TabOrder = 2
      Items.Strings = (
        'PASSIVE'
        'ACTIVE')
    end
    object AdvIPEdit1: TAdvIPEdit
      Left = 440
      Top = 254
      Width = 137
      Height = 24
      Alignment = taCenter
      Color = clWindow
      Enabled = True
      ImeName = 'Microsoft IME 2010'
      MaxLength = 3
      TabOrder = 3
      Visible = True
      AutoFocus = False
      Flat = False
      FlatLineColor = clBlack
      FlatParentColor = True
      ShowModified = False
      FocusColor = clWindow
      FocusBorder = False
      FocusFontColor = clBlack
      LabelAlwaysEnabled = False
      LabelPosition = lpLeftTop
      LabelMargin = 4
      LabelTransparent = False
      LabelFont.Charset = DEFAULT_CHARSET
      LabelFont.Color = clWindowText
      LabelFont.Height = -13
      LabelFont.Name = 'Tahoma'
      LabelFont.Style = []
      ModifiedColor = clRed
      SelectFirstChar = False
      Version = '1.1.0.2'
      IPAddress = '127.0.0.1'
      IPAddressType = ipv4
    end
    object tb_local_port: TEdit
      Left = 456
      Top = 284
      Width = 121
      Height = 24
      ImeName = 'Microsoft IME 2010'
      NumbersOnly = True
      TabOrder = 4
      Text = '5001'
    end
  end
  object tb_t6: TEdit
    Left = 456
    Top = 127
    Width = 129
    Height = 24
    ImeName = 'Microsoft IME 2010'
    TabOrder = 1
    TextHint = '0~240'
    OnChange = tb_t6Change
  end
  object tb_t7: TEdit
    Left = 456
    Top = 157
    Width = 129
    Height = 24
    ImeName = 'Microsoft IME 2010'
    TabOrder = 2
    TextHint = '0~240'
    OnChange = tb_t7Change
  end
  object tb_t8: TEdit
    Left = 456
    Top = 187
    Width = 129
    Height = 24
    ImeName = 'Microsoft IME 2010'
    TabOrder = 3
    TextHint = '0~120'
    OnChange = tb_t8Change
  end
  object tb_t9: TEdit
    Left = 456
    Top = 217
    Width = 129
    Height = 24
    ImeName = 'Microsoft IME 2010'
    TabOrder = 4
    TextHint = '0~240'
    OnChange = tb_t9Change
  end
end
