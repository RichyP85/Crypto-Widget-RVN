[Variables]
bgH=120
dotY=48
highlightColor=89,186,255,230
;highlightColor=93,208,234,230

; ============================================================
; color and transparency

[colorHeader]
Meter=String
MeterStyle=headerText
X=85
Y=30
Text=Colors
ToolTipText="Audjusts the three colors used in the skins.  Clicking a colored square will allow you to edit it using the RainRGB color picker.  The bar above the text controls the transparency of that color.  Clicking the text itself will allow the color code to be set manually."

[1ColorBG]
Meter=IMAGE
SolidColor=0,0,0,100
X=93
Y=30
W=25
H=25
Group=p1 | allPages
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor "#*dimColor*#"][!Redraw #CURRENTCONFIG#]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor "0,0,0,80"][!Redraw #CURRENTCONFIG#]

[1ColorSqr]
Meter=IMAGE
SolidColor=#textColor#
Group=p1 | allPages
X=2r
Y=2r
W=21
H=21
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=textColor" "FileName=#@#Appearance.txt"]
ToolTipText="Edit the Text color in RainRGB"

[2ColorBG]
Meter=IMAGE
MeterStyle=1ColorBG
Y=60

[2ColorSqr]
Meter=IMAGE
MeterStyle=1ColorSqr
SolidColor=#numColor#
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=numColor" "FileName=#@#Appearance.txt"]
ToolTipText="Edit the Numerical color in RainRGB"

[3ColorBG]
Meter=IMAGE
MeterStyle=1ColorBG
Y=90

[3ColorSqr]
Meter=IMAGE
MeterStyle=1ColorSqr
SolidColor=#barColor#
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=barColor" "FileName=#@#Appearance.txt"]
ToolTipText="Edit the Balance Bar color in RainRGB"

; Bar Graph Color ==========================================

[1ColorAlphaBg]
Meter=Image
SolidColor=#dimColor#
Group=p1 | allPages
X=130
Y=33
W=120
H=4
LeftMouseUpAction=[!CommandMeasure "mSettingsScript" "changeAlpha('textColor',$MouseX:%$)"][!RefreshGroup RVN][!Redraw #CURRENTCONFIG#][!ToggleConfig "#ROOTCONFIG#" "Config.ini"]
ToolTipText="Set the transparency of the primary color"

[1ColorAlpha]
Meter=IMAGE
SolidColor=#textMainColor#
Group=p1 | allPages
X=r
Y=r
H=4
W=1

[2ColorAlphaBg]
Meter=Image
MeterStyle=1ColorAlphaBg
Y=63
LeftMouseUpAction=[!CommandMeasure "mSettingsScript" "changeAlpha('numColor',$MouseX:%$)"][!RefreshGroup RVN][!Redraw #CURRENTCONFIG#][!ToggleConfig "#ROOTCONFIG#" "Config.ini"]
ToolTipText="Set the transparency of the secondary color"

[2ColorAlpha]
Meter=IMAGE
MeterStyle=1ColorAlpha
W=1

[3ColorAlphaBg]
Meter=Image
MeterStyle=1ColorAlphaBg
Y=93
LeftMouseUpAction=[!CommandMeasure "mSettingsScript" "changeAlpha('barColor',$MouseX:%$)"][!RefreshGroup RVN][!Redraw #CURRENTCONFIG#][!ToggleConfig "#ROOTCONFIG#" "Config.ini"]
ToolTipText="Set the transparency of the circle background color"

[3ColorAlpha]
Meter=IMAGE
MeterStyle=1ColorAlpha
W=1

; Hex Text Color ==========================================

[1ColorString]
Meter=String
FontFace=Sansation
FontColor=#textMainColor#
FontSize=10
SolidColor=0,0,0,1
AntiAlias=1
Group=p1 | allPages
Text=#textColor#
X=130
Y=40
LeftMouseUpAction=!CommandMeasure "ColorInput" "ExecuteBatch 1"

[2ColorString]
Meter=String
MeterStyle=1ColorString
Text=#numColor#
Y=70
LeftMouseUpAction=!CommandMeasure "ColorInput" "ExecuteBatch 2"

[3ColorString]
Meter=String
MeterStyle=1ColorString
Text=#barColor#
Y=100
LeftMouseUpAction=!CommandMeasure "ColorInput" "ExecuteBatch 3"

; ============================================================