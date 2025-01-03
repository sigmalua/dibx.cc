local AuthLua = (load or loadstring)(game:HttpGet("https://raw.githubusercontent.com/NewWhitelistService/function/refs/heads/main/function2.lua"))()
getgenv().Project = function()
return "dibx.cc"
end
if AuthLua:Authenticate(Project()) then
print("HWID/Key Valid")
print("Loading…")
end

