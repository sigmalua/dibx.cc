local AuthLua = (load or loadstring)(game:HttpGet("https://raw.githubusercontent.com/NewWhitelistService/function/refs/heads/main/function2.lua"))()
getgenv().Project = function()
return "dibx.cc"
end
if AuthLua:Authenticate(Project()) then
print("HWID/Key Valid")
print("Loading…")
end
-- anticheat bypass 

loadstring(game:HttpGet("https://raw.githubusercontent.com/shakar60/universal-anticheat-bypass/main/script",true))()

getgenv().dibxcc = {
    CamlockState = false,
    AutoPredState = true,
    Prediction = 0.120689385
}

loadstring(game:HttpGet("https://raw.githubusercontent.com/sigmalua/dibx.cc/refs/heads/main/function%20for%20dibx.cc",true))()
