object DBManager: TDBManager
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Height = 265
  Width = 198
  object dbConnection: TADOConnection
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 32
    Top = 8
  end
  object dbQuery: TADOQuery
    Parameters = <>
    Left = 32
    Top = 64
  end
  object ALConnection: TADOConnection
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 128
    Top = 8
  end
  object ALQuery: TADOQuery
    Parameters = <>
    Left = 120
    Top = 72
  end
  object CAConnection: TADOConnection
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 120
    Top = 136
  end
  object CAQuery: TADOQuery
    Parameters = <>
    Left = 120
    Top = 192
  end
  object QConnection: TADOConnection
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 32
    Top = 136
  end
  object QQuery: TADOQuery
    Parameters = <>
    Left = 32
    Top = 192
  end
end
