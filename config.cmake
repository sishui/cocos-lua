# app package name
set(APP_PACKAGE_NAME "com.codetypes.hellolua")

# app name
set(APP_PRODUCT_NAME "cocoslua")

# app version and build
set(APP_VERSION "1.0.0")
set(APP_BUILD "100")

# apple developer team
set(APPLE_DEVELOPMENT_TEAM "2566X92242")

# bugly
if(IOS)
    set(BUGLY_APPID "546f1cf279")
    set(BUGLY_SECRET "d21353e4-26c8-4f94-b646-cf88a225f039")
elseif(ANDROID)
    set(BUGLY_APPID "c082cf3ca0")
    set(BUGLY_SECRET "c332369f-17b2-4f8e-9481-5810319e8c46")
endif()