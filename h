local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "Da Rizz Studio Hub", HidePremium = false, IntroText = "Da Rizz Studio Hub",SaveConfig = true, ConfigFolder = "OrionTest"})
	
local ToggleTab = Window:MakeTab({
	Name = "Toggles",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})

local HubTab = Window:MakeTab({
	Name = "Main Hub",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})

local Hub = HubTab:AddSection({
	Name = "Hub"
})
HubTab:AddToggle({
	Name = "Hello",
	Default = false,
	Callback = function(Value)
		print("hello")
	end    
}) 

ToggleTab:AddSlider({
	Name = "Speed!",
	Min = 0,
	Max = 180,
	Default = 5,
	Color = Color3.fromRGB(255,255,255),
	Increment = 1,
	ValueName = "Speed",
	Callback = function(Value)
		game.Players.LocalPlayer.Character.Humanoid.WalkSpeed = Value
	end    
})

 

ToggleTab:AddSlider({
	Name = "JumpPower!",
	Min = 0,
	Max = 180,
	Default = 5,
	Color = Color3.fromRGB(255,255,255),
	Increment = 1,
	ValueName = "JumpPower",
	Callback = function(Value)
game.Players.LocalPlayer.Character.Humanoid.JumpPower = JumpPower
	end    
})



OrionLib:Init()
