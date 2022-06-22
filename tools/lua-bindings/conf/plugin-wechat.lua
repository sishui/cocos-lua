module 'wechat'

path "../../frameworks/plugins/wechat"

headers [[
#include "lua-bindings/lua_conv.h"
#include "lua-bindings/lua_conv_manual.h"
#include "cclua/xlua.h"
#include "WeChat.h"
]]

luacls(function (cppname)
    cppname = string.gsub(cppname, "^cclua::", "cclua.")
    cppname = string.gsub(cppname, "::", ".")
    return cppname
end)

include "conf/exclude-type.lua"

ifdef 'CCLUA_BUILD_WECHAT'
typeconf "cclua::plugin::WeChat::ShareType"
typeconf "cclua::plugin::WeChat::ProgramType"
typeconf "cclua::plugin::WeChat"
    .ifdef 'CCLUA_OS_ANDROID'
    .func('pay')
    .endif ''
    .luaopen 'cclua::runtime::registerFeature("wechat", true);'
endif ''
