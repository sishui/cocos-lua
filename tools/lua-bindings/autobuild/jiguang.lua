-- AUTO BUILD, DON'T MODIFY!

dofile "autobuild/jiguang-types.lua"

local olua = require "olua"
local typeconv = olua.typeconv
local typecls = olua.typecls
local cls = nil
local M = {}

M.NAME = "jiguang"
M.PATH = "../../frameworks/plugins/jiguang"
M.INCLUDES = [[
    #include "lua-bindings/lua_conv.h"
    #include "lua-bindings/lua_conv_manual.h"
    #include "cclua/xlua.h"
    #include "JiGuang.h"
]]
M.CHUNK = nil

M.CONVS = {
}

M.CLASSES = {}

cls = typecls 'cclua::plugin::JPush'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.CHUNK = nil
cls.REQUIRE = [[cclua::runtime::registerFeature("jpush", true);]]
cls.ifdef('*', '#ifdef CCLUA_BUILD_JPUSH')
cls.func(nil, 'static void init(const std::string &appKey, const std::string &channel)')
cls.func(nil, 'static void setAlias(const std::string &alias)')
cls.func(nil, 'static void deleteAlias()')
cls.func(nil, 'static void addTags(const std::set<std::string> &tags)')
cls.func(nil, 'static void setTags(const std::set<std::string> &tags)')
cls.func(nil, 'static void deleteTags(const std::set<std::string> &tags)')
cls.func(nil, 'static void cleanTags()')
cls.func(nil, 'static void setDebug(bool enabled)')
cls.func(nil, 'static void setLogOFF()')
cls.func(nil, 'static void setBadge(int value)')
cls.func(nil, 'static bool isEnabled()')
cls.func(nil, 'static void requestPermission()')
cls.func(nil, 'static std::string getRegistrationID()')
cls.prop('enabled', nil, nil)
cls.prop('registrationID', nil, nil)
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'cclua::plugin::JAuth'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.CHUNK = nil
cls.REQUIRE = [[cclua::runtime::registerFeature("jauth", true);]]
cls.ifdef('*', '#ifdef CCLUA_BUILD_JAUTH')
cls.func(nil, 'static void init(const std::string &appKey, const std::string &channel)')
cls.func(nil, 'static bool isInitSuccess()')
cls.func(nil, 'static void setDebug(bool enabled)')
cls.func(nil, 'static bool checkVerifyEnable()')
cls.func(nil, 'static void clearPreLoginCache()')
cls.func(nil, 'static void dismissLoginAuth(@optional bool needCloseAnim)')
cls.func(nil, 'static void setSmsIntervalTime(long intervalTime)')
cls.func(nil, 'static void configUI(cocos2d::ValueMap &value)')
cls.callback {
    FUNCS =  {
        'static void getToken(int timeout, @local const std::function<void (const cocos2d::ValueMap &)> callback)'
    },
    TAG_MAKER = 'Token',
    TAG_MODE = 'OLUA_TAG_NEW',
    TAG_STORE = nil,
    TAG_SCOPE = 'once',
}
cls.callback {
    FUNCS =  {
        'static void preLogin(int timeout, @local const std::function<void (const cocos2d::ValueMap &)> callback)'
    },
    TAG_MAKER = 'preLogin',
    TAG_MODE = 'OLUA_TAG_NEW',
    TAG_STORE = nil,
    TAG_SCOPE = 'once',
}
cls.callback {
    FUNCS =  {
        'static void loginAuth(int timeout, @local const std::function<void (const cocos2d::ValueMap &)> callback)'
    },
    TAG_MAKER = 'loginAuth',
    TAG_MODE = 'OLUA_TAG_NEW',
    TAG_STORE = nil,
    TAG_SCOPE = 'once',
}
cls.callback {
    FUNCS =  {
        'static void getSmsCode(const std::string &phonenum, const std::string &signid, const std::string &tempid, @local const std::function<void (const cocos2d::ValueMap &)> callback)'
    },
    TAG_MAKER = 'SmsCode',
    TAG_MODE = 'OLUA_TAG_NEW',
    TAG_STORE = nil,
    TAG_SCOPE = 'once',
}
cls.prop('initSuccess', nil, nil)
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'cclua::plugin::JAnalytics::EventType'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.CHUNK = nil
cls.REQUIRE = nil
cls.ifdef('*', '#ifdef CCLUA_BUILD_JANALYTICS')
cls.enum('LOGIN', 'cclua::plugin::JAnalytics::EventType::LOGIN')
cls.enum('REGISTER', 'cclua::plugin::JAnalytics::EventType::REGISTER')
cls.enum('PURCHASE', 'cclua::plugin::JAnalytics::EventType::PURCHASE')
cls.enum('BROWSE', 'cclua::plugin::JAnalytics::EventType::BROWSE')
cls.enum('COUNT', 'cclua::plugin::JAnalytics::EventType::COUNT')
cls.enum('CALCULATE', 'cclua::plugin::JAnalytics::EventType::CALCULATE')
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'cclua::plugin::JAnalytics'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.CHUNK = nil
cls.REQUIRE = [[cclua::runtime::registerFeature("janalytics", true);]]
cls.ifdef('*', '#ifdef CCLUA_BUILD_JANALYTICS')
cls.func(nil, 'static void init(const std::string &appKey, const std::string &channel)')
cls.func(nil, 'static void startTrackPage(const std::string &pageName)')
cls.func(nil, 'static void stopTrackPage(const std::string &pageName)')
cls.func(nil, 'static void trackEvent(cclua::plugin::JAnalytics::EventType type, cocos2d::ValueMap &value)')
cls.func(nil, 'static void identifyAccount(cocos2d::ValueMap &value)')
cls.func(nil, 'static void detachAccount()')
cls.func(nil, 'static void setFrequency(int frequency)')
cls.func(nil, 'static void setDebug(bool enable)')
M.CLASSES[#M.CLASSES + 1] = cls

return M
