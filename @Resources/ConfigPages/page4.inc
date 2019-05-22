[Variables]
bgH=120
dotY=98
highlightColor=255,172,53,
highlightTrans=0
CopiedColor=183,234,93,

; ============================================================
; Donations Clipboard

[Donations]
Meter=String
MeterStyle=headerText
X=85
Y=30
Text=Donations - Thank You!
ToolTipText="Thanks"

[Thanks]
Meter=String
MeterStyle=subText
FontSize=10
Text=Although not required, a small donation#CRLF#would be cool. Hope this widget is helpful.

[UBQ]
Meter=String
MeterStyle=subText
X=115
Y=65
H=15
W=35
Text=UBQ
FontColor=#CopiedColor#
StringEffect=None
FontEffectColor=#CopiedColor#
ToolTipTitle=UBQ Address
ToolTipIcon=Info
ToolTipWidth=1200
ToolTipText="0xF12548F9007977c7120B22969C30613d2C88b147"
LeftMouseDownAction=[!SetClip "0xF12548F9007977c7120B22969C30613d2C88b147"]
LeftMouseUpAction=[!CommandMeasure MeasureCopied "Stop 1"][!CommandMeasure MeasureCopied "Execute 1"]
MouseOverAction=[!SetOption UBQ StringEffect "Border"]
MouseLeaveAction=[!SetOption UBQ StringEffect "None"]

[ETH]
Meter=String
MeterStyle=subText
X=115
Y=90
H=15
W=35
Text=ETH
FontColor=#CopiedColor#
StringEffect=None
FontEffectColor=#CopiedColor#
ToolTipTitle=ETH Address
ToolTipIcon=Info
ToolTipWidth=1200
ToolTipText="0x761aB34deFEC4ed4fe29646F6147F16047f10357"
LeftMouseDownAction=!SetClip "0x761aB34deFEC4ed4fe29646F6147F16047f10357"
LeftMouseUpAction=[!CommandMeasure MeasureCopied "Stop 1"][!CommandMeasure MeasureCopied "Execute 1"]
MouseOverAction=[!SetOption ETH StringEffect "Border"]
MouseLeaveAction=[!SetOption ETH StringEffect "None"]

[RVN]
Meter=String
MeterStyle=subText
X=180
Y=65
H=15
W=35
Text=RVN
FontColor=#CopiedColor#
StringEffect=None
FontEffectColor=#CopiedColor#
ToolTipTitle=RVN Address
ToolTipIcon=Info
ToolTipWidth=1200
ToolTipText="RX7SUoefDRtHicYeTHUqf7e1cyJhBJ9YyL"
LeftMouseDownAction=!SetClip "RX7SUoefDRtHicYeTHUqf7e1cyJhBJ9YyL"
LeftMouseUpAction=[!CommandMeasure MeasureCopied "Stop 1"][!CommandMeasure MeasureCopied "Execute 1"]
MouseOverAction=[!SetOption RVN StringEffect "Border"]
MouseLeaveAction=[!SetOption RVN StringEffect "None"]

[ETC]
Meter=String
MeterStyle=subText
X=180
Y=90
H=15
W=35
Text=ETC
FontColor=#CopiedColor#
StringEffect=None
FontEffectColor=#CopiedColor#
ToolTipTitle=ETC Address
ToolTipIcon=Info
ToolTipWidth=1200
ToolTipText="0xEAb15060e0145a3c4e784689E7041618D8Cd4290"
LeftMouseDownAction=!SetClip "0xEAb15060e0145a3c4e784689E7041618D8Cd4290"
LeftMouseUpAction=[!CommandMeasure MeasureCopied "Stop 1"][!CommandMeasure MeasureCopied "Execute 1"]
MouseOverAction=[!SetOption ETC StringEffect "Border"]
MouseLeaveAction=[!SetOption ETC StringEffect "None"]

[BTC]
Meter=String
MeterStyle=subText
X=245
Y=65
H=15
W=35
Text=BTC
FontColor=#CopiedColor#
StringEffect=None
FontEffectColor=#CopiedColor#
ToolTipTitle=BTC Address
ToolTipIcon=Info
ToolTipWidth=1200
ToolTipText="1K72gVU47KJTWJmCkw8aPqx54tfLMjBJHq"
LeftMouseDownAction=!SetClip "1K72gVU47KJTWJmCkw8aPqx54tfLMjBJHq"
LeftMouseUpAction=[!CommandMeasure MeasureCopied "Stop 1"][!CommandMeasure MeasureCopied "Execute 1"]
MouseOverAction=[!SetOption BTC StringEffect "Border"]
MouseLeaveAction=[!SetOption BTC StringEffect "None"]

[LTC]
Meter=String
MeterStyle=subText
X=245
Y=90
H=15
W=35
Text=LTC
FontColor=#CopiedColor#
StringEffect=None
FontEffectColor=#CopiedColor#
ToolTipTitle=LTC Address
ToolTipIcon=Info
ToolTipWidth=1200
ToolTipText="Lbcmd5iwwkdszjzJMvYapcQxxiQuwXiPML"
LeftMouseDownAction=!SetClip "Lbcmd5iwwkdszjzJMvYapcQxxiQuwXiPML"
LeftMouseUpAction=[!CommandMeasure MeasureCopied "Stop 1"][!CommandMeasure MeasureCopied "Execute 1"]
MouseOverAction=[!SetOption LTC StringEffect "Border"]
MouseLeaveAction=[!SetOption LTC StringEffect "None"]

[Copied]
Meter=String
MeterStyle=subText
X=360
Y=5
Text=Copied!
FontSize=14
FontColor=#CopiedColor##highlightTrans#

[MeasureCopied]
Measure=Plugin
Plugin=ActionTimer
ActionList1=SetTransOff | Wait 1000 | SetTransOn
SetTransOff=[!SetOption Copied FontColor "#CopiedColor#255"][!UpdateMeter Copied][!Redraw]
SetTransOn=[!SetOption Copied FontColor "#CopiedColor##highlightTrans#"][!UpdateMeter Copied][!Redraw]