-- AUTO BUILD, DON'T MODIFY!

dofile "autobuild/xgame-types.lua"

local olua = require "olua"
local typeconv = olua.typeconv
local typecls = olua.typecls
local cls = nil
local M = {}

M.NAME = "xgame"
M.PATH = "../../frameworks/libxgame/src/lua-bindings"
M.INCLUDES = [[
    #include "lua-bindings/lua_conv.h"
    #include "lua-bindings/lua_conv_manual.h"
    #include "xgame/filesystem.h"
    #include "xgame/xlua.h"
    #include "xgame/preferences.h"
    #include "xgame/downloader.h"
    #include "xgame/runtime.h"
    #include "xgame/RootScene.h"
    #include "xgame/timer.h"
    #include "olua/olua.hpp"
]]
M.CHUNK = ''

M.CONVS = {
    typeconv {
        CPPCLS = 'xgame::downloader::FileTask',
        DEF = [[
            std::string url;
            std::string path;
            @optional std::string md5;
            @optional xgame::downloader::FileState state;
        ]],
    },
}

M.CLASSES = {}

cls = typecls 'xgame::SceneNoCamera'
cls.SUPERCLS = 'cocos2d::Scene'
cls.REG_LUATYPE = true
cls.DEFIF = nil
cls.CHUNK = nil
cls.func(nil, 'static xgame::SceneNoCamera *create()')
cls.func(nil, 'static xgame::SceneNoCamera *createWithSize(const cocos2d::Size &size)')
cls.func(nil, 'static xgame::SceneNoCamera *createWithPhysics()')
cls.func(nil, 'SceneNoCamera()')
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'xgame::Permission'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.DEFIF = nil
cls.CHUNK = nil
cls.enum('AUDIO', 'xgame::Permission::AUDIO')
cls.enum('CAMERA', 'xgame::Permission::CAMERA')
cls.enum('PHOTO', 'xgame::Permission::PHOTO')
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'xgame::PermissionStatus'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.DEFIF = nil
cls.CHUNK = nil
cls.enum('NOT_DETERMINED', 'xgame::PermissionStatus::NOT_DETERMINED')
cls.enum('RESTRICTED', 'xgame::PermissionStatus::RESTRICTED')
cls.enum('DENIED', 'xgame::PermissionStatus::DENIED')
cls.enum('AUTHORIZED', 'xgame::PermissionStatus::AUTHORIZED')
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'xgame::runtime'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.DEFIF = nil
cls.CHUNK = nil
cls.func('testCrash', [[
    {
        xgame::runtime::log("test native crash!!!!");
        char *prt = NULL;
        *prt = 0;
        return 0;
    }
]])
cls.func('setDispatcher', [[
    {
        int handler = olua_reffunc(L, 1);
        xgame::runtime::setDispatcher([handler](const std::string &event, const std::string &args) {
            lua_State *L = olua_mainthread(NULL);
            if (L != NULL) {
                int top = lua_gettop(L);
                olua_geterrorfunc(L);
                olua_getref(L, handler);
                if (lua_isfunction(L, -1)) {
                    lua_pushstring(L, event.c_str());
                    lua_pushstring(L, args.c_str());
                    lua_pcall(L, 2, 0, top + 1);
                }
                lua_settop(L, top);
            }
        });
        return 0;
    }
]])
cls.func(nil, 'static void clearStorage()')
cls.func(nil, 'static bool launch(const std::string &scriptPath)')
cls.func(nil, 'static bool restart()')
cls.func(nil, 'static bool isRestarting()')
cls.func(nil, 'static bool isDebug()')
cls.func(nil, 'static float getTime()')
cls.func(nil, 'static void gc()')
cls.func(nil, 'static const std::string getVersion()')
cls.func(nil, 'static const std::string getPackageName()')
cls.func(nil, 'static const std::string getAppVersion()')
cls.func(nil, 'static const std::string getAppBuild()')
cls.func(nil, 'static const std::string getChannel()')
cls.func(nil, 'static const std::string getOS()')
cls.func(nil, 'static const std::string getDeviceInfo()')
cls.func(nil, 'static const std::string getLanguage()')
cls.func(nil, 'static const std::string getManifestVersion()')
cls.func(nil, 'static void setManifestVersion(const std::string &version)')
cls.func(nil, 'static const std::string getNetworkStatus()')
cls.func(nil, 'static cocos2d::RenderTexture *capture(cocos2d::Node *node, @optional cocos2d::backend::PixelFormat format, @optional cocos2d::backend::PixelFormat depthStencilFormat)')
cls.func(nil, 'static const xgame::PermissionStatus getPermissionStatus(xgame::Permission permission)')
cls.func(nil, 'static void setAudioSessionCatalog(const std::string &catalog)')
cls.func(nil, 'static const std::string getAudioSessionCatalog()')
cls.func(nil, 'static std::string getIDFA()')
cls.func(nil, 'static bool isAdvertisingTrackingEnabled()')
cls.func(nil, 'static bool canOpenURL(const std::string &uri)')
cls.func(nil, 'static void setLogPath(const std::string &path)')
cls.func(nil, 'static const std::string getLogPath()')
cls.func(nil, 'static void setSampleCount(unsigned int samples)')
cls.func(nil, 'static unsigned int getSampleCount()')
cls.func(nil, 'static bool support(const std::string &api)')
cls.func(nil, 'static void printSupport()')
cls.func(nil, 'static void disableReport()')
cls.callback {
    FUNCS =  {
        'static void openURL(const std::string &uri, @local @optional const std::function<void (bool)> callback)'
    },
    TAG_MAKER = 'openURL',
    TAG_MODE = 'OLUA_TAG_NEW',
    TAG_STORE = nil,
    TAG_SCOPE = 'once',
}
cls.callback {
    FUNCS =  {
        'static void requestPermission(xgame::Permission permission, @local const std::function<void (PermissionStatus)> callback)'
    },
    TAG_MAKER = 'requestPermission',
    TAG_MODE = 'OLUA_TAG_NEW',
    TAG_STORE = nil,
    TAG_SCOPE = 'once',
}
cls.callback {
    FUNCS =  {
        'static void alert(const std::string &title, const std::string &message, const std::string &ok, const std::string &no, @local const std::function<void (bool)> callback)'
    },
    TAG_MAKER = 'alert',
    TAG_MODE = 'OLUA_TAG_NEW',
    TAG_STORE = nil,
    TAG_SCOPE = 'once',
}
cls.prop('restarting', nil, nil)
cls.prop('debug', nil, nil)
cls.prop('time', nil, nil)
cls.prop('version', nil, nil)
cls.prop('packageName', nil, nil)
cls.prop('appVersion', nil, nil)
cls.prop('appBuild', nil, nil)
cls.prop('channel', nil, nil)
cls.prop('os', nil, nil)
cls.prop('deviceInfo', nil, nil)
cls.prop('language', nil, nil)
cls.prop('manifestVersion', nil, nil)
cls.prop('networkStatus', nil, nil)
cls.prop('audioSessionCatalog', nil, nil)
cls.prop('idfa', nil, nil)
cls.prop('advertisingTrackingEnabled', nil, nil)
cls.prop('logPath', nil, nil)
cls.prop('sampleCount', nil, nil)
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'xgame::filesystem'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.DEFIF = nil
cls.CHUNK = nil
cls.func('write', [[
    {
        size_t len;
        std::string path = olua_tostring(L, 1);
        const char *data = olua_checklstring(L, 2, &len);
        bool ret = (bool)xgame::filesystem::write(path, data, len);
        olua_push_bool(L, ret);
        return 1;
    }
]])
cls.func(nil, 'static const std::string getWritablePath()')
cls.func(nil, 'static const std::string getCacheDirectory()')
cls.func(nil, 'static const std::string getDocumentDirectory()')
cls.func(nil, 'static const std::string getTmpDirectory()')
cls.func(nil, 'static const std::string getBuiltinCacheDirectory()')
cls.func(nil, 'static const std::string getSDCardDirectory()')
cls.func(nil, 'static void addSearchPath(const std::string &path, @optional bool front)')
cls.func(nil, 'static const std::string shortPath(const std::string &path, @optional size_t limit)')
cls.func(nil, 'static const std::string fullPath(const std::string &path)')
cls.func(nil, 'static bool createDirectory(const std::string &path, @optional bool isFilePath)')
cls.func(nil, 'static bool remove(const std::string &path)')
cls.func(nil, 'static bool exist(const std::string &path)')
cls.func(nil, 'static bool isFile(const std::string &path)')
cls.func(nil, 'static bool isDirectory(const std::string &path)')
cls.func(nil, 'static bool rename(const std::string &oldPath, const std::string &newPath)')
cls.func(nil, 'static bool copy(const std::string &srcPath, const std::string &destPath)')
cls.func(nil, 'static cocos2d::Data read(const std::string &path)')
cls.func(nil, 'static bool unzip(const std::string &path, const std::string &dest)')
cls.prop('writablePath', nil, nil)
cls.prop('cacheDirectory', nil, nil)
cls.prop('documentDirectory', nil, nil)
cls.prop('tmpDirectory', nil, nil)
cls.prop('builtinCacheDirectory', nil, nil)
cls.prop('sdCardDirectory', nil, nil)
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'xgame::preferences'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.DEFIF = nil
cls.CHUNK = nil
cls.func(nil, 'static bool getBoolean(const char *key, @optional bool defaultValue)')
cls.func(nil, 'static void setBoolean(const char *key, bool value)')
cls.func(nil, 'static float getFloat(const char *key, @optional float defaultValue)')
cls.func(nil, 'static void setFloat(const char *key, float value)')
cls.func(nil, 'static double getDouble(const char *key, @optional double defaultValue)')
cls.func(nil, 'static void setDouble(const char *key, double value)')
cls.func(nil, 'static int getInteger(const char *key, @optional int defaultValue)')
cls.func(nil, 'static void setInteger(const char *key, int value)')
cls.func(nil, 'static std::string getString(const char *key, @optional const char *defaultValue)')
cls.func(nil, 'static void setString(const char *key, const char *value)')
cls.func(nil, 'static void deleteKey(const char *key)')
cls.func(nil, 'static void flush()')
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'xgame::timer'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.DEFIF = nil
cls.CHUNK = [[#define makeTimerDelayTag(tag) ("delayTag." + tag)]]
cls.func('schedule', [[
    {
        float interval = (float)olua_checknumber(L, 1);
        uint32_t callback = olua_reffunc(L, 2);
        uint32_t id = xgame::timer::schedule(interval, [callback](float dt) {
            lua_State *L = olua_mainthread(NULL);
            if (L != NULL) {
                int top = lua_gettop(L);
                olua_geterrorfunc(L);
                olua_getref(L, callback);
                if (lua_isfunction(L, -1)) {
                    lua_pushnumber(L, dt);
                    lua_pcall(L, 1, 0, top + 1);
                }
                lua_settop(L, top);
            }
        });
        lua_pushinteger(L, ((uint64_t)callback << 32) | (uint64_t)id);
        return 1;
    }
]])
cls.func('unschedule', [[
    {
        uint64_t value = olua_checkinteger(L, 1);
        uint32_t callback = value >> 32;
        uint32_t id = value & 0xFFFFFFFF;
        olua_unref(L, callback);
        xgame::timer::unschedule(id);
        return 0;
    }
]])
cls.func(nil, 'static std::string createTag()')
cls.callback {
    FUNCS =  {
        'static void delayWithTag(float time, const std::string &tag, @local std::function<void ()> callback)'
    },
    TAG_MAKER = 'makeTimerDelayTag(#2)',
    TAG_MODE = 'OLUA_TAG_REPLACE',
    TAG_STORE = nil,
    TAG_SCOPE = 'once',
}
cls.callback {
    FUNCS =  {
        'static void killDelay(const std::string &tag)'
    },
    TAG_MAKER = 'makeTimerDelayTag(#1)',
    TAG_MODE = 'OLUA_TAG_SUBEQUAL',
    TAG_STORE = nil,
    TAG_SCOPE = 'object',
}
cls.callback {
    FUNCS =  {
        'static void delay(float time, @local const std::function<void ()> callback)'
    },
    TAG_MAKER = 'delay',
    TAG_MODE = 'OLUA_TAG_NEW',
    TAG_STORE = nil,
    TAG_SCOPE = 'once',
}
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'xgame::window'
cls.SUPERCLS = nil
cls.REG_LUATYPE = false
cls.DEFIF = nil
cls.CHUNK = nil
cls.func('getVisibleBounds', [[
    {
        auto rect = cocos2d::Director::getInstance()->getOpenGLView()->getVisibleRect();
        lua_pushinteger(L, rect.getMinX());
        lua_pushinteger(L, rect.getMaxX());
        lua_pushinteger(L, rect.getMaxY());
        lua_pushinteger(L, rect.getMinY());
        return 4;
    }
]])
cls.func('getVisibleSize', [[
    {
        auto rect = cocos2d::Director::getInstance()->getOpenGLView()->getVisibleRect();
        lua_pushinteger(L, rect.size.width);
        lua_pushinteger(L, rect.size.height);
        return 2;
    }
]])
cls.func('getFrameSize', [[
    {
        auto size = cocos2d::Director::getInstance()->getOpenGLView()->getFrameSize();
        lua_pushnumber(L, size.width);
        lua_pushnumber(L, size.height);
        return 2;
    }
]])
cls.func('setFrameSize', [[
    {
        auto glView = cocos2d::Director::getInstance()->getOpenGLView();
        float width = (float)olua_checknumber(L, 1);
        float height = (float)olua_checknumber(L, 2);
        xgame::preferences::setFloat(CONF_WINDOW_WIDTH, width);
        xgame::preferences::setFloat(CONF_WINDOW_HEIGHT, height);
        glView->setFrameSize(width, height);
        return 0;
    }
]])
cls.func('getDesignSize', [[
    {
        auto size = cocos2d::Director::getInstance()->getOpenGLView()->getDesignResolutionSize();
        lua_pushnumber(L, size.width);
        lua_pushnumber(L, size.height);
        return 2;
    }
]])
cls.func('setDesignSize', [[
    {
        cocos2d::Director::getInstance()->getOpenGLView()->setDesignResolutionSize(
            (float)olua_checknumber(L, 1), (float)olua_checknumber(L, 2),
            (ResolutionPolicy)olua_checkinteger(L, 3));
        return 0;
    }
]])
cls.func('convertToCameraSpace', [[
    {
        cocos2d::Rect rect;
        cocos2d::Vec3 out;
        auto director = cocos2d::Director::getInstance();
        auto pt = cocos2d::Vec2(olua_checknumber(L, 1), olua_checknumber(L, 2));
        auto runningScene = director->getRunningScene();
        auto w2l = runningScene->getWorldToNodeTransform();
        rect.size = director->getOpenGLView()->getDesignResolutionSize();
        cocos2d::isScreenPointInRect(pt, runningScene->getDefaultCamera(), w2l, rect, &out);
        lua_pushnumber(L, out.x);
        lua_pushnumber(L, out.y);
        return 2;
    }
]])
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'xgame::downloader::FileState'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.DEFIF = nil
cls.CHUNK = nil
cls.enum('IOERROR', 'xgame::downloader::FileState::IOERROR')
cls.enum('LOADED', 'xgame::downloader::FileState::LOADED')
cls.enum('PENDING', 'xgame::downloader::FileState::PENDING')
cls.enum('INVALID', 'xgame::downloader::FileState::INVALID')
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'xgame::downloader'
cls.SUPERCLS = nil
cls.REG_LUATYPE = true
cls.DEFIF = nil
cls.CHUNK = nil
cls.func(nil, 'static void load(const xgame::downloader::FileTask &task)')
cls.func(nil, 'static void init()')
cls.func(nil, 'static void end()')
cls.callback {
    FUNCS =  {
        'static void setDispatcher(@local const std::function<void (const FileTask &)> callback)'
    },
    TAG_MAKER = 'Dispatcher',
    TAG_MODE = 'OLUA_TAG_REPLACE',
    TAG_STORE = nil,
    TAG_SCOPE = 'object',
}
M.CLASSES[#M.CLASSES + 1] = cls

cls = typecls 'xgame::MaskLayout'
cls.SUPERCLS = 'cocos2d::ui::Layout'
cls.REG_LUATYPE = true
cls.DEFIF = nil
cls.CHUNK = nil
cls.func(nil, 'static xgame::MaskLayout *create()')
cls.func(nil, 'cocos2d::DrawNode *getClippingNode()')
cls.prop('clippingNode', nil, nil)
M.CLASSES[#M.CLASSES + 1] = cls

return M
