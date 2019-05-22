[Variables]
bgH=120
dotY=73
highlightColor=183,234,93,230

; ============================================================
; RavenCoin Address

[addressHeader]
Meter=String
MeterStyle=headerText
X=85
Y=30
Text=RVN Address
ToolTipText="The Ravencoin address you wish to monitor"

[address]
Meter=String
MeterStyle=subText
FontSize=10
X=1r
Y=30
W=195
H=18
Text=#Addr#
LeftMouseUpAction=!CommandMeasure "AddressInput" "ExecuteBatch 1"
ToolTipText="click to set RVN Address"

; ============================================================
; Pools

[Pool]
Meter=String
MeterStyle=headerText
X=85
Y=72
Text=Mining Pool
ToolTipText="The Mining Pool you want to monitor"

[Suprnova]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=1r
Y=72
W=71
H=18
Text=Suprnova
FontSize=10
MouseOverAction=[!SetOption Suprnova StringEffect "Border"]
MouseLeaveAction=[!SetOption Suprnova StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue Variables "bgH" "200" #@#ConfigPages\page3.inc][!WriteKeyValue Suprnova InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue NanoPool InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue MinerMore InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue MiningPoolHub InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue RavenMiner InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=[!CommandMeasure "AddressInput" "ExecuteBatch 2"][!WriteKeyValue "Variables" "SN" "0" "#@#Settings.txt"][!WriteKeyValue "Variables" "MM" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "NP" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "MPH" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "RM" "1" "#@#Settings.txt"][!WriteKeyValue "API Key" "Hidden" "0" #@#ConfigPages\page3.inc][!WriteKeyValue "UserID" "Hidden" "0" #@#ConfigPages\page3.inc]

[NanoPool]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=80r
Y=72
W=62
H=18
Text=NanoPool
FontSize=10
MouseOverAction=[!SetOption NanoPool StringEffect "Border"]
MouseLeaveAction=[!SetOption NanoPool StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue Variables "bgH" "120" #@#ConfigPages\page3.inc][!WriteKeyValue NanoPool InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue Suprnova InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue MinerMore InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue MiningPoolHub InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue RavenMiner InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=[!CommandMeasure "AddressInput" "ExecuteBatch 3"][!WriteKeyValue "Variables" "NP" "0" "#@#Settings.txt"][!WriteKeyValue "Variables" "MM" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "SN" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "MPH" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "RM" "1" "#@#Settings.txt"][!WriteKeyValue "API Key" "Hidden" "1" #@#ConfigPages\page3.inc][!WriteKeyValue "UserID" "Hidden" "1" #@#ConfigPages\page3.inc]

[MinerMore]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=80r
Y=72
W=64
H=18
Text=MinerMore
FontSize=10
MouseOverAction=[!SetOption MinerMore StringEffect "Border"]
MouseLeaveAction=[!SetOption MinerMore StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue Variables "bgH" "200" #@#ConfigPages\page3.inc][!WriteKeyValue MinerMore InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue Suprnova InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue NanoPool InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue MiningPoolHub InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue RavenMiner InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=[!CommandMeasure "AddressInput" "ExecuteBatch 4"][!WriteKeyValue "Variables" "MM" "0" "#@#Settings.txt"][!WriteKeyValue "Variables" "NP" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "SN" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "MPH" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "RM" "1" "#@#Settings.txt"][!WriteKeyValue "API Key" "Hidden" "1" #@#ConfigPages\page3.inc][!WriteKeyValue "UserID" "Hidden" "0" #@#ConfigPages\page3.inc]

[MiningPoolHub]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=86
Y=92
W=100
H=18
Text=MiningPoolHub
FontSize=10
MouseOverAction=[!SetOption MiningPoolHub StringEffect "Border"]
MouseLeaveAction=[!SetOption MiningPoolHub StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue Variables "bgH" "200" #@#ConfigPages\page3.inc][!WriteKeyValue MiningPoolHub InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue Suprnova InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue NanoPool InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue MinerMore InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue RavenMiner InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=[!CommandMeasure "AddressInput" "ExecuteBatch 5"][!WriteKeyValue "Variables" "MPH" "0" "#@#Settings.txt"][!WriteKeyValue "Variables" "NP" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "SN" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "MM" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "RM" "1" "#@#Settings.txt"][!WriteKeyValue "API Key" "Hidden" "0" #@#ConfigPages\page3.inc][!WriteKeyValue "UserID" "Hidden" "0" #@#ConfigPages\page3.inc]

[RavenMiner]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=128r
Y=92
W=100
H=18
Text=RavenMiner
FontSize=10
MouseOverAction=[!SetOption RavenMiner StringEffect "Border"]
MouseLeaveAction=[!SetOption RavenMiner StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue Variables "bgH" "120" #@#ConfigPages\page3.inc][!WriteKeyValue RavenMiner InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue Suprnova InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue NanoPool InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue MiningPoolHub InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue MinerMore InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=[!CommandMeasure "AddressInput" "ExecuteBatch 6"][!WriteKeyValue "Variables" "RM" "0" "#@#Settings.txt"][!WriteKeyValue "Variables" "NP" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "SN" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "MPH" "1" "#@#Settings.txt"][!WriteKeyValue "Variables" "MM" "1" "#@#Settings.txt"][!WriteKeyValue "API Key" "Hidden" "1" #@#ConfigPages\page3.inc][!WriteKeyValue "UserID" "Hidden" "1" #@#ConfigPages\page3.inc]

; ============================================================
; Keys

[API Key]
Hidden=1
Meter=String
MeterStyle=headerText
X=85
Y=138
Text=API Key
ToolTipText="API Key from website"

[SNkey]
Hidden=#SN#
Meter=String
MeterStyle=subText
FontSize=10
ClipString=1
X=1r
Y=138
W=240
H=18
Text=#SNAPI#
LeftMouseUpAction=!CommandMeasure "APIInput" "ExecuteBatch 1"
ToolTipText="click to set API Key"

[MPHkey]
Hidden=#MPH#
Meter=String
MeterStyle=subText
FontSize=10
ClipString=1
X=r
Y=138
W=240
H=18
Text=#MPHAPI#
LeftMouseUpAction=!CommandMeasure "APIInput" "ExecuteBatch 2"
ToolTipText="click to set API Key"

; ============================================================
; User ID's

[UserID]
Hidden=1
Meter=String
MeterStyle=headerText
X=85
Y=178
Text=User ID
ToolTipText="User ID for selected pool"

[SNUID]
Hidden=#SN#
Meter=String
MeterStyle=subText
FontSize=10
ClipString=1
X=1r
Y=178
W=240
H=18
Text=#SNUID#
LeftMouseUpAction=!CommandMeasure "UserIDInput" "ExecuteBatch 1"
ToolTipText="click to set User ID #"

[MPHUID]
Hidden=#MPH#
Meter=String
MeterStyle=subText
FontSize=10
ClipString=1
X=1r
Y=178
W=240
H=18
Text=#MPHUID#
LeftMouseUpAction=!CommandMeasure "UserIDInput" "ExecuteBatch 2"
ToolTipText="click to set User ID #"

; ============================================================
; MinerMore

[MinerMoreDashboard]
Hidden=#MM#
Meter=String
MeterStyle=headerText
X=85
Y=138
Text=MinerMore Login
ToolTipText="Select either the User ID login or the Wallet address login"

[MinerMoreUserID]
Hidden=#MM#
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=86
Y=138
W=100
H=18
Text=User ID
FontSize=10
MouseOverAction=[!SetOption MinerMoreUserID StringEffect "Border"]
MouseLeaveAction=[!SetOption MinerMoreUserID StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue MinerMoreUserID InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue MinerMoreWallet InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=[!WriteKeyValue "Variables" "MMAddr" "#MMUID#" "#@#Settings.txt"][!Refresh #CURRENTCONFIG#]

[MinerMoreWallet]
Hidden=#MM#
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=160
Y=138
W=100
H=18
Text=Wallet Address
FontSize=10
MouseOverAction=[!SetOption MinerMoreWallet StringEffect "Border"]
MouseLeaveAction=[!SetOption MinerMoreWallet StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue MinerMoreWallet InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue MinerMoreUserID InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=[!WriteKeyValue "Variables" "MMAddr" "#Addr#" "#@#Settings.txt"][!Refresh #CURRENTCONFIG#]

[MinerMoreUID]
Hidden=#MM#
Meter=String
MeterStyle=subText
FontSize=10
ClipString=1
X=86
Y=178
W=240
H=18
Text=#MMUID#
LeftMouseUpAction=!CommandMeasure "UserIDInput" "ExecuteBatch 3"
ToolTipText="click to enter User ID for MinerMore"

; ============================================================
