isDbg = false

function Initialize()
	
	hexChars = { 	[0]='0', [1]='1', [2]='2', [3]='3', 
				[4]='4', [5]='5', [6]='6', [7]='7', 
				[8]='8', [9]='9', [10]='a', [11]='b', 
				[12]='c', [13]='d', [14]='e', [15]='f' }
	
	page = tonumber(SKIN:GetVariable('page',1))
	
	ulBytes = SKIN:GetVariable('uploadMax')
	dlBytes = SKIN:GetVariable('downloadMax')
	
	SKIN:Bang('!SetOptionGroup','pButtons','FontColor','#*textMainColor*#')
	
	if (page == 1) then
		SKIN:Bang('!SetOption','page1','FontColor','#*highlightColor*#')
	
	elseif page == 2 then
		SKIN:Bang('!SetOption','page2','FontColor','#*highlightColor*#')
	
		colors = { 	SKIN:GetVariable('textColor'), 
					SKIN:GetVariable('numColor'), 
					SKIN:GetVariable('barColor') }
		
		bars = {	SKIN:GetMeter('1ColorAlpha'), 
					SKIN:GetMeter('2ColorAlpha'), 
					SKIN:GetMeter('3ColorAlpha') }
		
		maxBarW = SKIN:GetMeter('1ColorAlphaBg'):GetW()
		
		-- set the width of the bars that show the alpha of the three colors
		for i=1,#colors do
			tempW = math.floor(getStringAlphaPercent(colors[i]) * maxBarW)
			SKIN:Bang('!SetOption', bars[i]:GetName(), 'W', tempW)
		end
	
	elseif page == 3 then
		SKIN:Bang('!SetOption','page3','FontColor','#*highlightColor*#')
	
	elseif page == 4 then
		SKIN:Bang('!SetOption','page4','FontColor','#*highlightColor*#')
	
	elseif page == 5 then
		SKIN:Bang('!SetOption','page5','FontColor','#*highlightColor*#')
	
	else 
		print('C2: wtf? invalid page number in settings skin')
	end
	SKIN:Bang('!Redraw')
end

function Update()
	
	
end

-- ==========================================================================================
-- Functions used for displaying and changing the transparency of the colors on page 2

-- called from skin - changes alpha value on a color in Appearance.txt
function changeAlpha(color, percent)
	baseColor = SKIN:GetVariable(color)
	alpha = math.floor(percent*0.01*255)
	if (string.find(baseColor, ",") ~= nil) then 
		rgb = string.match(baseColor, "%d+,%d+,%d+")
		newColor = rgb .. ',' .. alpha
	else
		rgb = string.sub(baseColor,1,6)
		alpha = decToHex(alpha)
		newColor = rgb .. alpha
	end
	SKIN:Bang('!WriteKeyValue','Variables',color,newColor,'#@#Appearance.txt')
end

-- intended to retreive the alpha component of an RGBA or hex color and return as a percent 0.0 to 1.0
function getStringAlphaPercent(color)
	local alpha
	if (string.find(color, ",") ~= nil) then
		
		rgbIt = string.gmatch(color,"%d+")
		rgbTable = {}
		for match in rgbIt do
			table.insert(rgbTable, match)
		end
		
		if (#rgbTable < 4) then
			alpha = 1
		else
			alpha = (rgbTable[4] / 255)
			alpha = string.format("%.2f",alpha)
		end
	else
		if (string.len(color)) > 6 then
			alpha = hexToDec(string.sub(color,7,8))
			alpha = (alpha / 255)
			alpha = string.format("%.2f",alpha)
		else
			alpha = 1
		end
	end
	return tonumber(alpha)
end

-- converts a hexadecimal string to a decimal number
function hexToDec(hexNum)
	hexNum = string.lower(hexNum)
	sum = 0
	for i=1,#hexNum,1 do
		sum = sum + (findHexChar(string.sub(hexNum,i,i)) * 16^(#hexNum-i))
	end
	return sum
end

-- converts decimal number to hexadecimal string
function decToHex(decNum)
	local result = {}
	while (decNum > 0) do
		table.insert(result, 1, hexChars[math.fmod(decNum, 16)])
		decNum = math.floor(decNum / 16)
	end
	return table.concat(result,'',1,#result)
end

-- linearly searches hexChar array for a given character and returns its index
function findHexChar(char)
	for i=0,#hexChars do
		if hexChars[i] == char then
			return i
		end
	end
	return -1
end

-- ==========================================================================================
-- function rewrites appearance.txt and settings.txt with default values

function resetAllVariables()
	
	settingsDefaults = { 
		{ 'Addr', 'Input Address' }, 
		{ 'Payment', 'Input Payment Amount' }, 
	}
	
	appearanceDefaults = {
		{ 'numColor', '250,250,250,155' },
		{ 'barColor', '100,100,100,51' },
		{ 'textColor', '250,250,250,230' },
		{ 'TextMainColor', '#*textMainColor*#' },
		{ 'radius', '36' },
		{ 'orient', 'left' }
	}

	for _,t in pairs(settingsDefaults) do
		SKIN:Bang('!WriteKeyValue', 'Variables', t[1], t[2], '#@#Settings.txt')
	end
	
	for _,t in pairs(appearanceDefaults) do
		SKIN:Bang('!WriteKeyValue', 'Variables', t[1], t[2], '#@#Appearance.txt')
	end
	
	SKIN:Bang('!RefreshGroup', 'RVN')
	
	print('C2: all user settings reset to default')
end