local cjson = require "kernel.crypto.cjson"
local runtime = require "kernel.runtime"
local preferences = require "kernel.preferences"
local UserDefault = require "cc.UserDefault"
local Node = require "cc.Node"

function main()
    print("hello bootstrap!")
end

local r = setmetatable({}, {__gc = function ()
    print("lua meta gc")
end})