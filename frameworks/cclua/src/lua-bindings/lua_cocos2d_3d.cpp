//
// AUTO BUILD, DON'T MODIFY!
//
#include "lua_cocos2d_3d.h"
#include "lua-bindings/lua_cocos2d_types.h"
#include "lua-bindings/lua_conv_manual.h"
#include "cocos2d.h"
#include "3d/CC3DProgramInfo.h"

static int _cocos2d_MeshVertexAttrib___call(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshVertexAttrib ret;

    luaL_checktype(L, 2, LUA_TTABLE);

    cocos2d::backend::VertexFormat arg1 = (cocos2d::backend::VertexFormat)0;       /** type */
    cocos2d::shaderinfos::VertexKey arg2 = (cocos2d::shaderinfos::VertexKey)0;       /** vertexAttrib */

    olua_getfield(L, 2, "type");
    olua_check_enum(L, -1, &arg1);
    ret.type = arg1;
    lua_pop(L, 1);

    olua_getfield(L, 2, "vertexAttrib");
    olua_check_enum(L, -1, &arg2);
    ret.vertexAttrib = arg2;
    lua_pop(L, 1);

    olua_pushcopy_object(L, ret, "cc.MeshVertexAttrib");

    olua_endinvoke(L);

    return 1;
}

static int _cocos2d_MeshVertexAttrib___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (cocos2d::MeshVertexAttrib *)olua_toobj(L, 1, "cc.MeshVertexAttrib");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_MeshVertexAttrib___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (cocos2d::MeshVertexAttrib *)olua_toobj(L, 1, "cc.MeshVertexAttrib");
    olua_push_object(L, self, "cc.MeshVertexAttrib");

    olua_endinvoke(L);

    return 1;
}

static int _cocos2d_MeshVertexAttrib_getAttribSizeBytes(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshVertexAttrib *self = nullptr;

    olua_to_object(L, 1, &self, "cc.MeshVertexAttrib");

    // int getAttribSizeBytes()
    int ret = self->getAttribSizeBytes();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshVertexAttrib_get_type(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshVertexAttrib *self = nullptr;

    olua_to_object(L, 1, &self, "cc.MeshVertexAttrib");

    // cocos2d::backend::VertexFormat type
    cocos2d::backend::VertexFormat ret = self->type;
    int num_ret = olua_push_enum(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshVertexAttrib_set_type(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshVertexAttrib *self = nullptr;
    cocos2d::backend::VertexFormat arg1 = (cocos2d::backend::VertexFormat)0;       /** type */

    olua_to_object(L, 1, &self, "cc.MeshVertexAttrib");
    olua_check_enum(L, 2, &arg1);

    // cocos2d::backend::VertexFormat type
    self->type = arg1;

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_MeshVertexAttrib_get_vertexAttrib(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshVertexAttrib *self = nullptr;

    olua_to_object(L, 1, &self, "cc.MeshVertexAttrib");

    // cocos2d::shaderinfos::VertexKey vertexAttrib
    cocos2d::shaderinfos::VertexKey ret = self->vertexAttrib;
    int num_ret = olua_push_enum(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshVertexAttrib_set_vertexAttrib(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshVertexAttrib *self = nullptr;
    cocos2d::shaderinfos::VertexKey arg1 = (cocos2d::shaderinfos::VertexKey)0;       /** vertexAttrib */

    olua_to_object(L, 1, &self, "cc.MeshVertexAttrib");
    olua_check_enum(L, 2, &arg1);

    // cocos2d::shaderinfos::VertexKey vertexAttrib
    self->vertexAttrib = arg1;

    olua_endinvoke(L);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_MeshVertexAttrib(lua_State *L)
{
    oluacls_class<cocos2d::MeshVertexAttrib>(L, "cc.MeshVertexAttrib");
    oluacls_func(L, "__call", _cocos2d_MeshVertexAttrib___call);
    oluacls_func(L, "__gc", _cocos2d_MeshVertexAttrib___gc);
    oluacls_func(L, "__olua_move", _cocos2d_MeshVertexAttrib___olua_move);
    oluacls_func(L, "getAttribSizeBytes", _cocos2d_MeshVertexAttrib_getAttribSizeBytes);
    oluacls_prop(L, "attribSizeBytes", _cocos2d_MeshVertexAttrib_getAttribSizeBytes, nullptr);
    oluacls_prop(L, "type", _cocos2d_MeshVertexAttrib_get_type, _cocos2d_MeshVertexAttrib_set_type);
    oluacls_prop(L, "vertexAttrib", _cocos2d_MeshVertexAttrib_get_vertexAttrib, _cocos2d_MeshVertexAttrib_set_vertexAttrib);

    return 1;
}
OLUA_END_DECLS

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_NTextureData_Usage(lua_State *L)
{
    oluacls_class<cocos2d::NTextureData::Usage>(L, "cc.NTextureData.Usage");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "Ambient", (lua_Integer)cocos2d::NTextureData::Usage::Ambient);
    oluacls_enum(L, "Bump", (lua_Integer)cocos2d::NTextureData::Usage::Bump);
    oluacls_enum(L, "Diffuse", (lua_Integer)cocos2d::NTextureData::Usage::Diffuse);
    oluacls_enum(L, "Emissive", (lua_Integer)cocos2d::NTextureData::Usage::Emissive);
    oluacls_enum(L, "None", (lua_Integer)cocos2d::NTextureData::Usage::None);
    oluacls_enum(L, "Normal", (lua_Integer)cocos2d::NTextureData::Usage::Normal);
    oluacls_enum(L, "Reflection", (lua_Integer)cocos2d::NTextureData::Usage::Reflection);
    oluacls_enum(L, "Shininess", (lua_Integer)cocos2d::NTextureData::Usage::Shininess);
    oluacls_enum(L, "Specular", (lua_Integer)cocos2d::NTextureData::Usage::Specular);
    oluacls_enum(L, "Transparency", (lua_Integer)cocos2d::NTextureData::Usage::Transparency);
    oluacls_enum(L, "Unknown", (lua_Integer)cocos2d::NTextureData::Usage::Unknown);

    return 1;
}
OLUA_END_DECLS

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_shaderinfos_VertexKey(lua_State *L)
{
    oluacls_class<cocos2d::shaderinfos::VertexKey>(L, "cc.VertexKey");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "VERTEX_ATTRIB_BINORMAL", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_BINORMAL);
    oluacls_enum(L, "VERTEX_ATTRIB_BLEND_INDEX", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_BLEND_INDEX);
    oluacls_enum(L, "VERTEX_ATTRIB_BLEND_WEIGHT", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_BLEND_WEIGHT);
    oluacls_enum(L, "VERTEX_ATTRIB_COLOR", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_COLOR);
    oluacls_enum(L, "VERTEX_ATTRIB_ERROR", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_ERROR);
    oluacls_enum(L, "VERTEX_ATTRIB_MAX", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_MAX);
    oluacls_enum(L, "VERTEX_ATTRIB_NORMAL", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_NORMAL);
    oluacls_enum(L, "VERTEX_ATTRIB_POSITION", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_POSITION);
    oluacls_enum(L, "VERTEX_ATTRIB_TANGENT", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_TANGENT);
    oluacls_enum(L, "VERTEX_ATTRIB_TEX_COORD", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_TEX_COORD);
    oluacls_enum(L, "VERTEX_ATTRIB_TEX_COORD1", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_TEX_COORD1);
    oluacls_enum(L, "VERTEX_ATTRIB_TEX_COORD2", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_TEX_COORD2);
    oluacls_enum(L, "VERTEX_ATTRIB_TEX_COORD3", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_TEX_COORD3);
    oluacls_enum(L, "VERTEX_ATTRIB_TEX_COORDS", (lua_Integer)cocos2d::shaderinfos::VertexKey::VERTEX_ATTRIB_TEX_COORDS);

    return 1;
}
OLUA_END_DECLS

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_shaderinfos_Uniformkey(lua_State *L)
{
    oluacls_class<cocos2d::shaderinfos::Uniformkey>(L, "cc.Uniformkey");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "UNIFORM_AMBIENT_COLOR", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_AMBIENT_COLOR);
    oluacls_enum(L, "UNIFORM_COS_TIME", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_COS_TIME);
    oluacls_enum(L, "UNIFORM_MAX", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_MAX);
    oluacls_enum(L, "UNIFORM_MULTIVIEW_MVP_MATRIX", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_MULTIVIEW_MVP_MATRIX);
    oluacls_enum(L, "UNIFORM_MULTIVIEW_P_MATRIX", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_MULTIVIEW_P_MATRIX);
    oluacls_enum(L, "UNIFORM_MVP_MATRIX", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_MVP_MATRIX);
    oluacls_enum(L, "UNIFORM_MV_MATRIX", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_MV_MATRIX);
    oluacls_enum(L, "UNIFORM_NORMAL_MATRIX", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_NORMAL_MATRIX);
    oluacls_enum(L, "UNIFORM_P_MATRIX", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_P_MATRIX);
    oluacls_enum(L, "UNIFORM_RANDOM01", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_RANDOM01);
    oluacls_enum(L, "UNIFORM_SAMPLER0", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_SAMPLER0);
    oluacls_enum(L, "UNIFORM_SAMPLER1", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_SAMPLER1);
    oluacls_enum(L, "UNIFORM_SAMPLER2", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_SAMPLER2);
    oluacls_enum(L, "UNIFORM_SAMPLER3", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_SAMPLER3);
    oluacls_enum(L, "UNIFORM_SIN_TIME", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_SIN_TIME);
    oluacls_enum(L, "UNIFORM_TIME", (lua_Integer)cocos2d::shaderinfos::Uniformkey::UNIFORM_TIME);

    return 1;
}
OLUA_END_DECLS

static int _cocos2d_NTextureData___call(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData ret;

    luaL_checktype(L, 2, LUA_TTABLE);

    std::string arg1;       /** id */
    std::string arg2;       /** filename */
    cocos2d::NTextureData::Usage arg3 = (cocos2d::NTextureData::Usage)0;       /** type */
    cocos2d::backend::SamplerAddressMode arg4 = (cocos2d::backend::SamplerAddressMode)0;       /** wrapS */
    cocos2d::backend::SamplerAddressMode arg5 = (cocos2d::backend::SamplerAddressMode)0;       /** wrapT */

    olua_getfield(L, 2, "id");
    olua_check_string(L, -1, &arg1);
    ret.id = arg1;
    lua_pop(L, 1);

    olua_getfield(L, 2, "filename");
    olua_check_string(L, -1, &arg2);
    ret.filename = arg2;
    lua_pop(L, 1);

    olua_getfield(L, 2, "type");
    olua_check_enum(L, -1, &arg3);
    ret.type = arg3;
    lua_pop(L, 1);

    olua_getfield(L, 2, "wrapS");
    olua_check_enum(L, -1, &arg4);
    ret.wrapS = arg4;
    lua_pop(L, 1);

    olua_getfield(L, 2, "wrapT");
    olua_check_enum(L, -1, &arg5);
    ret.wrapT = arg5;
    lua_pop(L, 1);

    olua_pushcopy_object(L, ret, "cc.NTextureData");

    olua_endinvoke(L);

    return 1;
}

static int _cocos2d_NTextureData___gc(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (cocos2d::NTextureData *)olua_toobj(L, 1, "cc.NTextureData");
    olua_postgc(L, self);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_NTextureData___olua_move(lua_State *L)
{
    olua_startinvoke(L);

    auto self = (cocos2d::NTextureData *)olua_toobj(L, 1, "cc.NTextureData");
    olua_push_object(L, self, "cc.NTextureData");

    olua_endinvoke(L);

    return 1;
}

static int _cocos2d_NTextureData_get_filename(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData *self = nullptr;

    olua_to_object(L, 1, &self, "cc.NTextureData");

    // std::string filename
    std::string ret = self->filename;
    int num_ret = olua_push_string(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_NTextureData_set_filename(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData *self = nullptr;
    std::string arg1;       /** filename */

    olua_to_object(L, 1, &self, "cc.NTextureData");
    olua_check_string(L, 2, &arg1);

    // std::string filename
    self->filename = arg1;

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_NTextureData_get_id(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData *self = nullptr;

    olua_to_object(L, 1, &self, "cc.NTextureData");

    // std::string id
    std::string ret = self->id;
    int num_ret = olua_push_string(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_NTextureData_set_id(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData *self = nullptr;
    std::string arg1;       /** id */

    olua_to_object(L, 1, &self, "cc.NTextureData");
    olua_check_string(L, 2, &arg1);

    // std::string id
    self->id = arg1;

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_NTextureData_get_type(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData *self = nullptr;

    olua_to_object(L, 1, &self, "cc.NTextureData");

    // cocos2d::NTextureData::Usage type
    cocos2d::NTextureData::Usage ret = self->type;
    int num_ret = olua_push_enum(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_NTextureData_set_type(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData *self = nullptr;
    cocos2d::NTextureData::Usage arg1 = (cocos2d::NTextureData::Usage)0;       /** type */

    olua_to_object(L, 1, &self, "cc.NTextureData");
    olua_check_enum(L, 2, &arg1);

    // cocos2d::NTextureData::Usage type
    self->type = arg1;

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_NTextureData_get_wrapS(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData *self = nullptr;

    olua_to_object(L, 1, &self, "cc.NTextureData");

    // cocos2d::backend::SamplerAddressMode wrapS
    cocos2d::backend::SamplerAddressMode ret = self->wrapS;
    int num_ret = olua_push_enum(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_NTextureData_set_wrapS(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData *self = nullptr;
    cocos2d::backend::SamplerAddressMode arg1 = (cocos2d::backend::SamplerAddressMode)0;       /** wrapS */

    olua_to_object(L, 1, &self, "cc.NTextureData");
    olua_check_enum(L, 2, &arg1);

    // cocos2d::backend::SamplerAddressMode wrapS
    self->wrapS = arg1;

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_NTextureData_get_wrapT(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData *self = nullptr;

    olua_to_object(L, 1, &self, "cc.NTextureData");

    // cocos2d::backend::SamplerAddressMode wrapT
    cocos2d::backend::SamplerAddressMode ret = self->wrapT;
    int num_ret = olua_push_enum(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_NTextureData_set_wrapT(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::NTextureData *self = nullptr;
    cocos2d::backend::SamplerAddressMode arg1 = (cocos2d::backend::SamplerAddressMode)0;       /** wrapT */

    olua_to_object(L, 1, &self, "cc.NTextureData");
    olua_check_enum(L, 2, &arg1);

    // cocos2d::backend::SamplerAddressMode wrapT
    self->wrapT = arg1;

    olua_endinvoke(L);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_NTextureData(lua_State *L)
{
    oluacls_class<cocos2d::NTextureData>(L, "cc.NTextureData");
    oluacls_func(L, "__call", _cocos2d_NTextureData___call);
    oluacls_func(L, "__gc", _cocos2d_NTextureData___gc);
    oluacls_func(L, "__olua_move", _cocos2d_NTextureData___olua_move);
    oluacls_prop(L, "filename", _cocos2d_NTextureData_get_filename, _cocos2d_NTextureData_set_filename);
    oluacls_prop(L, "id", _cocos2d_NTextureData_get_id, _cocos2d_NTextureData_set_id);
    oluacls_prop(L, "type", _cocos2d_NTextureData_get_type, _cocos2d_NTextureData_set_type);
    oluacls_prop(L, "wrapS", _cocos2d_NTextureData_get_wrapS, _cocos2d_NTextureData_set_wrapS);
    oluacls_prop(L, "wrapT", _cocos2d_NTextureData_get_wrapT, _cocos2d_NTextureData_set_wrapT);

    return 1;
}
OLUA_END_DECLS

static int _cocos2d_Mesh_calculateAABB(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // void calculateAABB()
    self->calculateAABB();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_create$1(lua_State *L)
{
    olua_startinvoke(L);

    std::vector<float> arg1;       /** positions */
    std::vector<float> arg2;       /** normals */
    std::vector<float> arg3;       /** texs */
    std::vector<unsigned short> arg4;       /** indices */

    olua_check_vector<float>(L, 1, arg1, [L](float *arg1) {
        olua_check_number(L, -1, arg1);
    });
    olua_check_vector<float>(L, 2, arg2, [L](float *arg1) {
        olua_check_number(L, -1, arg1);
    });
    olua_check_vector<float>(L, 3, arg3, [L](float *arg1) {
        olua_check_number(L, -1, arg1);
    });
    olua_check_vector<unsigned short>(L, 4, arg4, [L](unsigned short *arg1) {
        olua_check_integer(L, -1, arg1);
    });

    // static cocos2d::Mesh *create(const std::vector<float> &positions, const std::vector<float> &normals, const std::vector<float> &texs, const std::vector<unsigned short> &indices)
    cocos2d::Mesh *ret = cocos2d::Mesh::create(arg1, arg2, arg3, arg4);
    int num_ret = olua_push_object(L, ret, "cc.Mesh");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_create$2(lua_State *L)
{
    olua_startinvoke(L);

    std::vector<float> arg1;       /** vertices */
    int arg2 = 0;       /** perVertexSizeInFloat */
    std::vector<unsigned short> arg3;       /** indices */
    std::vector<cocos2d::MeshVertexAttrib> arg4;       /** attribs */

    olua_check_vector<float>(L, 1, arg1, [L](float *arg1) {
        olua_check_number(L, -1, arg1);
    });
    olua_check_integer(L, 2, &arg2);
    olua_check_vector<unsigned short>(L, 3, arg3, [L](unsigned short *arg1) {
        olua_check_integer(L, -1, arg1);
    });
    olua_check_vector<cocos2d::MeshVertexAttrib>(L, 4, arg4, [L](cocos2d::MeshVertexAttrib *arg1) {
        olua_check_object(L, -1, arg1, "cc.MeshVertexAttrib");
    });

    // static cocos2d::Mesh *create(const std::vector<float> &vertices, int perVertexSizeInFloat, const std::vector<unsigned short> &indices, const std::vector<cocos2d::MeshVertexAttrib> &attribs)
    cocos2d::Mesh *ret = cocos2d::Mesh::create(arg1, arg2, arg3, arg4);
    int num_ret = olua_push_object(L, ret, "cc.Mesh");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 4) {
        if ((olua_is_vector(L, 1)) && (olua_is_vector(L, 2)) && (olua_is_vector(L, 3)) && (olua_is_vector(L, 4))) {
            // static cocos2d::Mesh *create(const std::vector<float> &positions, const std::vector<float> &normals, const std::vector<float> &texs, const std::vector<unsigned short> &indices)
            return _cocos2d_Mesh_create$1(L);
        }

        // if ((olua_is_vector(L, 1)) && (olua_is_integer(L, 2)) && (olua_is_vector(L, 3)) && (olua_is_vector(L, 4))) {
            // static cocos2d::Mesh *create(const std::vector<float> &vertices, int perVertexSizeInFloat, const std::vector<unsigned short> &indices, const std::vector<cocos2d::MeshVertexAttrib> &attribs)
            return _cocos2d_Mesh_create$2(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Mesh::create' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_Mesh_draw(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    cocos2d::Renderer *arg1 = nullptr;       /** renderer */
    float arg2 = 0;       /** globalZ */
    cocos2d::Mat4 arg3;       /** transform */
    uint32_t arg4 = 0;       /** flags */
    unsigned int arg5 = 0;       /** lightMask */
    cocos2d::Vec4 arg6;       /** color */
    bool arg7 = false;       /** forceDepthWrite */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_object(L, 2, &arg1, "cc.Renderer");
    olua_check_number(L, 3, &arg2);
    olua_check_object(L, 4, &arg3, "cc.Mat4");
    olua_check_integer(L, 5, &arg4);
    olua_check_integer(L, 6, &arg5);
    olua_check_object(L, 7, &arg6, "cc.Vec4");
    olua_check_bool(L, 8, &arg7);

    // void draw(cocos2d::Renderer *renderer, float globalZ, const cocos2d::Mat4 &transform, uint32_t flags, unsigned int lightMask, const cocos2d::Vec4 &color, bool forceDepthWrite)
    self->draw(arg1, arg2, arg3, arg4, arg5, arg6, arg7);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_getBlendFunc(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // const cocos2d::BlendFunc &getBlendFunc()
    const cocos2d::BlendFunc &ret = self->getBlendFunc();
    int num_ret = olua_push_object(L, ret, "cc.BlendFunc");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getIndexBuffer(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // cocos2d::backend::Buffer *getIndexBuffer()
    cocos2d::backend::Buffer *ret = self->getIndexBuffer();
    int num_ret = olua_push_object(L, ret, "ccb.Buffer");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getIndexCount(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // ssize_t getIndexCount()
    ssize_t ret = self->getIndexCount();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getIndexFormat(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // cocos2d::CustomCommand::IndexFormat getIndexFormat()
    cocos2d::CustomCommand::IndexFormat ret = self->getIndexFormat();
    int num_ret = olua_push_enum(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getMaterial(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // cocos2d::Material *getMaterial()
    cocos2d::Material *ret = self->getMaterial();
    int num_ret = olua_push_object(L, ret, "cc.Material");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getMeshVertexAttribCount(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // ssize_t getMeshVertexAttribCount()
    ssize_t ret = self->getMeshVertexAttribCount();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getMeshVertexAttribute(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    int arg1 = 0;       /** idx */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_integer(L, 2, &arg1);

    // const cocos2d::MeshVertexAttrib &getMeshVertexAttribute(int idx)
    const cocos2d::MeshVertexAttrib &ret = self->getMeshVertexAttribute(arg1);
    int num_ret = olua_push_object(L, ret, "cc.MeshVertexAttrib");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getName(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // const std::string &getName()
    const std::string &ret = self->getName();
    int num_ret = olua_push_string(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getPrimitiveType(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // cocos2d::CustomCommand::PrimitiveType getPrimitiveType()
    cocos2d::CustomCommand::PrimitiveType ret = self->getPrimitiveType();
    int num_ret = olua_push_enum(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getProgramState(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // cocos2d::backend::ProgramState *getProgramState()
    cocos2d::backend::ProgramState *ret = self->getProgramState();
    int num_ret = olua_push_object(L, ret, "ccb.ProgramState");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getSkin(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // cocos2d::MeshSkin *getSkin()
    cocos2d::MeshSkin *ret = self->getSkin();
    int num_ret = olua_push_object(L, ret, "cc.MeshSkin");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getTexture$1(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // cocos2d::Texture2D *getTexture()
    cocos2d::Texture2D *ret = self->getTexture();
    int num_ret = olua_push_object(L, ret, "cc.Texture2D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getTexture$2(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    cocos2d::NTextureData::Usage arg1 = (cocos2d::NTextureData::Usage)0;       /** usage */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_enum(L, 2, &arg1);

    // cocos2d::Texture2D *getTexture(cocos2d::NTextureData::Usage usage)
    cocos2d::Texture2D *ret = self->getTexture(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Texture2D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getTexture(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // cocos2d::Texture2D *getTexture()
        return _cocos2d_Mesh_getTexture$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_enum(L, 2))) {
            // cocos2d::Texture2D *getTexture(cocos2d::NTextureData::Usage usage)
            return _cocos2d_Mesh_getTexture$2(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Mesh::getTexture' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_Mesh_getTextureFileName(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // std::string getTextureFileName()
    std::string ret = self->getTextureFileName();
    int num_ret = olua_push_string(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getVertexBuffer(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // cocos2d::backend::Buffer *getVertexBuffer()
    cocos2d::backend::Buffer *ret = self->getVertexBuffer();
    int num_ret = olua_push_object(L, ret, "ccb.Buffer");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_getVertexSizeInBytes(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // int getVertexSizeInBytes()
    int ret = self->getVertexSizeInBytes();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_hasVertexAttrib(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    cocos2d::shaderinfos::VertexKey arg1 = (cocos2d::shaderinfos::VertexKey)0;       /** attrib */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_enum(L, 2, &arg1);

    // bool hasVertexAttrib(cocos2d::shaderinfos::VertexKey attrib)
    bool ret = self->hasVertexAttrib(arg1);
    int num_ret = olua_push_bool(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_isVisible(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Mesh");

    // bool isVisible()
    bool ret = self->isVisible();
    int num_ret = olua_push_bool(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_new(lua_State *L)
{
    olua_startinvoke(L);

    // Mesh()
    cocos2d::Mesh *ret = new cocos2d::Mesh();
    int num_ret = olua_push_object(L, ret, "cc.Mesh");
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Mesh_setBlendFunc(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    cocos2d::BlendFunc arg1;       /** blendFunc */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_object(L, 2, &arg1, "cc.BlendFunc");

    // void setBlendFunc(const cocos2d::BlendFunc &blendFunc)
    self->setBlendFunc(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setForce2DQueue(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    bool arg1 = false;       /** force2D */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_bool(L, 2, &arg1);

    // void setForce2DQueue(bool force2D)
    self->setForce2DQueue(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setMaterial(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    cocos2d::Material *arg1 = nullptr;       /** material */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_object(L, 2, &arg1, "cc.Material");

    // void setMaterial(cocos2d::Material *material)
    self->setMaterial(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setName(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    std::string arg1;       /** name */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_string(L, 2, &arg1);

    // void setName(const std::string &name)
    self->setName(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setProgramState(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    cocos2d::backend::ProgramState *arg1 = nullptr;       /** programState */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_object(L, 2, &arg1, "ccb.ProgramState");

    // void setProgramState(cocos2d::backend::ProgramState *programState)
    self->setProgramState(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setSkin(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    cocos2d::MeshSkin *arg1 = nullptr;       /** skin */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_object(L, 2, &arg1, "cc.MeshSkin");

    // void setSkin(cocos2d::MeshSkin *skin)
    self->setSkin(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setTexture$1(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    std::string arg1;       /** texPath */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_string(L, 2, &arg1);

    // void setTexture(const std::string &texPath)
    self->setTexture(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setTexture$2(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    cocos2d::Texture2D *arg1 = nullptr;       /** tex */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_object(L, 2, &arg1, "cc.Texture2D");

    // void setTexture(cocos2d::Texture2D *tex)
    self->setTexture(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setTexture$3(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    cocos2d::Texture2D *arg1 = nullptr;       /** tex */
    cocos2d::NTextureData::Usage arg2 = (cocos2d::NTextureData::Usage)0;       /** usage */
    bool arg3 = false;       /** cacheFileName */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_object(L, 2, &arg1, "cc.Texture2D");
    olua_check_enum(L, 3, &arg2);
    olua_check_bool(L, 4, &arg3);

    // void setTexture(cocos2d::Texture2D *tex, cocos2d::NTextureData::Usage usage, @optional bool cacheFileName)
    self->setTexture(arg1, arg2, arg3);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setTexture$4(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    std::string arg1;       /** texPath */
    cocos2d::NTextureData::Usage arg2 = (cocos2d::NTextureData::Usage)0;       /** usage */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_string(L, 2, &arg1);
    olua_check_enum(L, 3, &arg2);

    // void setTexture(const std::string &texPath, cocos2d::NTextureData::Usage usage)
    self->setTexture(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setTexture$5(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    cocos2d::Texture2D *arg1 = nullptr;       /** tex */
    cocos2d::NTextureData::Usage arg2 = (cocos2d::NTextureData::Usage)0;       /** usage */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_object(L, 2, &arg1, "cc.Texture2D");
    olua_check_enum(L, 3, &arg2);

    // void setTexture(cocos2d::Texture2D *tex, cocos2d::NTextureData::Usage usage, @optional bool cacheFileName)
    self->setTexture(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Mesh_setTexture(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        if ((olua_is_string(L, 2))) {
            // void setTexture(const std::string &texPath)
            return _cocos2d_Mesh_setTexture$1(L);
        }

        // if ((olua_is_object(L, 2, "cc.Texture2D"))) {
            // void setTexture(cocos2d::Texture2D *tex)
            return _cocos2d_Mesh_setTexture$2(L);
        // }
    }

    if (num_args == 2) {
        if ((olua_is_string(L, 2)) && (olua_is_enum(L, 3))) {
            // void setTexture(const std::string &texPath, cocos2d::NTextureData::Usage usage)
            return _cocos2d_Mesh_setTexture$4(L);
        }

        // if ((olua_is_object(L, 2, "cc.Texture2D")) && (olua_is_enum(L, 3))) {
            // void setTexture(cocos2d::Texture2D *tex, cocos2d::NTextureData::Usage usage, @optional bool cacheFileName)
            return _cocos2d_Mesh_setTexture$5(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_object(L, 2, "cc.Texture2D")) && (olua_is_enum(L, 3)) && (olua_is_bool(L, 4))) {
            // void setTexture(cocos2d::Texture2D *tex, cocos2d::NTextureData::Usage usage, @optional bool cacheFileName)
            return _cocos2d_Mesh_setTexture$3(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Mesh::setTexture' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_Mesh_setVisible(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Mesh *self = nullptr;
    bool arg1 = false;       /** visible */

    olua_to_object(L, 1, &self, "cc.Mesh");
    olua_check_bool(L, 2, &arg1);

    // void setVisible(bool visible)
    self->setVisible(arg1);

    olua_endinvoke(L);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_Mesh(lua_State *L)
{
    oluacls_class<cocos2d::Mesh, cocos2d::Ref>(L, "cc.Mesh");
    oluacls_func(L, "calculateAABB", _cocos2d_Mesh_calculateAABB);
    oluacls_func(L, "create", _cocos2d_Mesh_create);
    oluacls_func(L, "draw", _cocos2d_Mesh_draw);
    oluacls_func(L, "getBlendFunc", _cocos2d_Mesh_getBlendFunc);
    oluacls_func(L, "getIndexBuffer", _cocos2d_Mesh_getIndexBuffer);
    oluacls_func(L, "getIndexCount", _cocos2d_Mesh_getIndexCount);
    oluacls_func(L, "getIndexFormat", _cocos2d_Mesh_getIndexFormat);
    oluacls_func(L, "getMaterial", _cocos2d_Mesh_getMaterial);
    oluacls_func(L, "getMeshVertexAttribCount", _cocos2d_Mesh_getMeshVertexAttribCount);
    oluacls_func(L, "getMeshVertexAttribute", _cocos2d_Mesh_getMeshVertexAttribute);
    oluacls_func(L, "getName", _cocos2d_Mesh_getName);
    oluacls_func(L, "getPrimitiveType", _cocos2d_Mesh_getPrimitiveType);
    oluacls_func(L, "getProgramState", _cocos2d_Mesh_getProgramState);
    oluacls_func(L, "getSkin", _cocos2d_Mesh_getSkin);
    oluacls_func(L, "getTexture", _cocos2d_Mesh_getTexture);
    oluacls_func(L, "getTextureFileName", _cocos2d_Mesh_getTextureFileName);
    oluacls_func(L, "getVertexBuffer", _cocos2d_Mesh_getVertexBuffer);
    oluacls_func(L, "getVertexSizeInBytes", _cocos2d_Mesh_getVertexSizeInBytes);
    oluacls_func(L, "hasVertexAttrib", _cocos2d_Mesh_hasVertexAttrib);
    oluacls_func(L, "isVisible", _cocos2d_Mesh_isVisible);
    oluacls_func(L, "new", _cocos2d_Mesh_new);
    oluacls_func(L, "setBlendFunc", _cocos2d_Mesh_setBlendFunc);
    oluacls_func(L, "setForce2DQueue", _cocos2d_Mesh_setForce2DQueue);
    oluacls_func(L, "setMaterial", _cocos2d_Mesh_setMaterial);
    oluacls_func(L, "setName", _cocos2d_Mesh_setName);
    oluacls_func(L, "setProgramState", _cocos2d_Mesh_setProgramState);
    oluacls_func(L, "setSkin", _cocos2d_Mesh_setSkin);
    oluacls_func(L, "setTexture", _cocos2d_Mesh_setTexture);
    oluacls_func(L, "setVisible", _cocos2d_Mesh_setVisible);
    oluacls_prop(L, "blendFunc", _cocos2d_Mesh_getBlendFunc, _cocos2d_Mesh_setBlendFunc);
    oluacls_prop(L, "indexBuffer", _cocos2d_Mesh_getIndexBuffer, nullptr);
    oluacls_prop(L, "indexCount", _cocos2d_Mesh_getIndexCount, nullptr);
    oluacls_prop(L, "indexFormat", _cocos2d_Mesh_getIndexFormat, nullptr);
    oluacls_prop(L, "material", _cocos2d_Mesh_getMaterial, _cocos2d_Mesh_setMaterial);
    oluacls_prop(L, "meshVertexAttribCount", _cocos2d_Mesh_getMeshVertexAttribCount, nullptr);
    oluacls_prop(L, "name", _cocos2d_Mesh_getName, _cocos2d_Mesh_setName);
    oluacls_prop(L, "primitiveType", _cocos2d_Mesh_getPrimitiveType, nullptr);
    oluacls_prop(L, "programState", _cocos2d_Mesh_getProgramState, _cocos2d_Mesh_setProgramState);
    oluacls_prop(L, "skin", _cocos2d_Mesh_getSkin, _cocos2d_Mesh_setSkin);
    oluacls_prop(L, "textureFileName", _cocos2d_Mesh_getTextureFileName, nullptr);
    oluacls_prop(L, "vertexBuffer", _cocos2d_Mesh_getVertexBuffer, nullptr);
    oluacls_prop(L, "vertexSizeInBytes", _cocos2d_Mesh_getVertexSizeInBytes, nullptr);
    oluacls_prop(L, "visible", _cocos2d_Mesh_isVisible, _cocos2d_Mesh_setVisible);

    return 1;
}
OLUA_END_DECLS

static int _cocos2d_MeshSkin_addSkinBone(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;
    cocos2d::Bone3D *arg1 = nullptr;       /** bone */

    olua_to_object(L, 1, &self, "cc.MeshSkin");
    olua_check_object(L, 2, &arg1, "cc.Bone3D");

    // void addSkinBone(cocos2d::Bone3D *bone)
    self->addSkinBone(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_MeshSkin_getBoneByIndex(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;
    unsigned int arg1 = 0;       /** index */

    olua_to_object(L, 1, &self, "cc.MeshSkin");
    olua_check_integer(L, 2, &arg1);

    // cocos2d::Bone3D *getBoneByIndex(unsigned int index)
    cocos2d::Bone3D *ret = self->getBoneByIndex(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Bone3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshSkin_getBoneByName(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;
    std::string arg1;       /** id */

    olua_to_object(L, 1, &self, "cc.MeshSkin");
    olua_check_string(L, 2, &arg1);

    // cocos2d::Bone3D *getBoneByName(const std::string &id)
    cocos2d::Bone3D *ret = self->getBoneByName(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Bone3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshSkin_getBoneCount(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;

    olua_to_object(L, 1, &self, "cc.MeshSkin");

    // ssize_t getBoneCount()
    ssize_t ret = self->getBoneCount();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshSkin_getBoneIndex(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;
    cocos2d::Bone3D *arg1 = nullptr;       /** bone */

    olua_to_object(L, 1, &self, "cc.MeshSkin");
    olua_check_object(L, 2, &arg1, "cc.Bone3D");

    // int getBoneIndex(cocos2d::Bone3D *bone)
    int ret = self->getBoneIndex(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshSkin_getInvBindPose(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;
    cocos2d::Bone3D *arg1 = nullptr;       /** bone */

    olua_to_object(L, 1, &self, "cc.MeshSkin");
    olua_check_object(L, 2, &arg1, "cc.Bone3D");

    // const cocos2d::Mat4 &getInvBindPose(const cocos2d::Bone3D *bone)
    const cocos2d::Mat4 &ret = self->getInvBindPose(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Mat4");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshSkin_getMatrixPalette(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;

    olua_to_object(L, 1, &self, "cc.MeshSkin");

    // cocos2d::Vec4 *getMatrixPalette()
    cocos2d::Vec4 *ret = self->getMatrixPalette();
    int num_ret = olua_push_object(L, ret, "cc.Vec4");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshSkin_getMatrixPaletteSize(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;

    olua_to_object(L, 1, &self, "cc.MeshSkin");

    // ssize_t getMatrixPaletteSize()
    ssize_t ret = self->getMatrixPaletteSize();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshSkin_getMatrixPaletteSizeInBytes(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;

    olua_to_object(L, 1, &self, "cc.MeshSkin");

    // ssize_t getMatrixPaletteSizeInBytes()
    ssize_t ret = self->getMatrixPaletteSizeInBytes();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshSkin_getRootBone(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;

    olua_to_object(L, 1, &self, "cc.MeshSkin");

    // cocos2d::Bone3D *getRootBone()
    cocos2d::Bone3D *ret = self->getRootBone();
    int num_ret = olua_push_object(L, ret, "cc.Bone3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshSkin_new(lua_State *L)
{
    olua_startinvoke(L);

    // MeshSkin()
    cocos2d::MeshSkin *ret = new cocos2d::MeshSkin();
    int num_ret = olua_push_object(L, ret, "cc.MeshSkin");
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_MeshSkin_removeAllBones(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::MeshSkin *self = nullptr;

    olua_to_object(L, 1, &self, "cc.MeshSkin");

    // void removeAllBones()
    self->removeAllBones();

    olua_endinvoke(L);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_MeshSkin(lua_State *L)
{
    oluacls_class<cocos2d::MeshSkin, cocos2d::Ref>(L, "cc.MeshSkin");
    oluacls_func(L, "addSkinBone", _cocos2d_MeshSkin_addSkinBone);
    oluacls_func(L, "getBoneByIndex", _cocos2d_MeshSkin_getBoneByIndex);
    oluacls_func(L, "getBoneByName", _cocos2d_MeshSkin_getBoneByName);
    oluacls_func(L, "getBoneCount", _cocos2d_MeshSkin_getBoneCount);
    oluacls_func(L, "getBoneIndex", _cocos2d_MeshSkin_getBoneIndex);
    oluacls_func(L, "getInvBindPose", _cocos2d_MeshSkin_getInvBindPose);
    oluacls_func(L, "getMatrixPalette", _cocos2d_MeshSkin_getMatrixPalette);
    oluacls_func(L, "getMatrixPaletteSize", _cocos2d_MeshSkin_getMatrixPaletteSize);
    oluacls_func(L, "getMatrixPaletteSizeInBytes", _cocos2d_MeshSkin_getMatrixPaletteSizeInBytes);
    oluacls_func(L, "getRootBone", _cocos2d_MeshSkin_getRootBone);
    oluacls_func(L, "new", _cocos2d_MeshSkin_new);
    oluacls_func(L, "removeAllBones", _cocos2d_MeshSkin_removeAllBones);
    oluacls_prop(L, "boneCount", _cocos2d_MeshSkin_getBoneCount, nullptr);
    oluacls_prop(L, "matrixPalette", _cocos2d_MeshSkin_getMatrixPalette, nullptr);
    oluacls_prop(L, "matrixPaletteSize", _cocos2d_MeshSkin_getMatrixPaletteSize, nullptr);
    oluacls_prop(L, "matrixPaletteSizeInBytes", _cocos2d_MeshSkin_getMatrixPaletteSizeInBytes, nullptr);
    oluacls_prop(L, "rootBone", _cocos2d_MeshSkin_getRootBone, nullptr);

    return 1;
}
OLUA_END_DECLS

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_BillBoard_Mode(lua_State *L)
{
    oluacls_class<cocos2d::BillBoard::Mode>(L, "cc.BillBoard.Mode");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "VIEW_PLANE_ORIENTED", (lua_Integer)cocos2d::BillBoard::Mode::VIEW_PLANE_ORIENTED);
    oluacls_enum(L, "VIEW_POINT_ORIENTED", (lua_Integer)cocos2d::BillBoard::Mode::VIEW_POINT_ORIENTED);

    return 1;
}
OLUA_END_DECLS

static int _cocos2d_BillBoard_create$1(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::BillBoard::Mode arg1 = (cocos2d::BillBoard::Mode)0;       /** mode */

    olua_check_enum(L, 1, &arg1);

    // static cocos2d::BillBoard *create(@optional cocos2d::BillBoard::Mode mode)
    cocos2d::BillBoard *ret = cocos2d::BillBoard::create(arg1);
    int num_ret = olua_push_object(L, ret, "cc.BillBoard");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_BillBoard_create$2(lua_State *L)
{
    olua_startinvoke(L);

    std::string arg1;       /** filename */
    cocos2d::BillBoard::Mode arg2 = (cocos2d::BillBoard::Mode)0;       /** mode */

    olua_check_string(L, 1, &arg1);
    olua_check_enum(L, 2, &arg2);

    // static cocos2d::BillBoard *create(const std::string &filename, @optional cocos2d::BillBoard::Mode mode)
    cocos2d::BillBoard *ret = cocos2d::BillBoard::create(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "cc.BillBoard");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_BillBoard_create$3(lua_State *L)
{
    olua_startinvoke(L);

    std::string arg1;       /** filename */
    cocos2d::Rect arg2;       /** rect */
    cocos2d::BillBoard::Mode arg3 = (cocos2d::BillBoard::Mode)0;       /** mode */

    olua_check_string(L, 1, &arg1);
    olua_check_object(L, 2, &arg2, "cc.Rect");
    olua_check_enum(L, 3, &arg3);

    // static cocos2d::BillBoard *create(const std::string &filename, const cocos2d::Rect &rect, @optional cocos2d::BillBoard::Mode mode)
    cocos2d::BillBoard *ret = cocos2d::BillBoard::create(arg1, arg2, arg3);
    int num_ret = olua_push_object(L, ret, "cc.BillBoard");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_BillBoard_create$4(lua_State *L)
{
    olua_startinvoke(L);

    // static cocos2d::BillBoard *create(@optional cocos2d::BillBoard::Mode mode)
    cocos2d::BillBoard *ret = cocos2d::BillBoard::create();
    int num_ret = olua_push_object(L, ret, "cc.BillBoard");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_BillBoard_create$5(lua_State *L)
{
    olua_startinvoke(L);

    std::string arg1;       /** filename */

    olua_check_string(L, 1, &arg1);

    // static cocos2d::BillBoard *create(const std::string &filename, @optional cocos2d::BillBoard::Mode mode)
    cocos2d::BillBoard *ret = cocos2d::BillBoard::create(arg1);
    int num_ret = olua_push_object(L, ret, "cc.BillBoard");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_BillBoard_create$6(lua_State *L)
{
    olua_startinvoke(L);

    std::string arg1;       /** filename */
    cocos2d::Rect arg2;       /** rect */

    olua_check_string(L, 1, &arg1);
    olua_check_object(L, 2, &arg2, "cc.Rect");

    // static cocos2d::BillBoard *create(const std::string &filename, const cocos2d::Rect &rect, @optional cocos2d::BillBoard::Mode mode)
    cocos2d::BillBoard *ret = cocos2d::BillBoard::create(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "cc.BillBoard");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_BillBoard_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // static cocos2d::BillBoard *create(@optional cocos2d::BillBoard::Mode mode)
        return _cocos2d_BillBoard_create$4(L);
    }

    if (num_args == 1) {
        if ((olua_is_enum(L, 1))) {
            // static cocos2d::BillBoard *create(@optional cocos2d::BillBoard::Mode mode)
            return _cocos2d_BillBoard_create$1(L);
        }

        // if ((olua_is_string(L, 1))) {
            // static cocos2d::BillBoard *create(const std::string &filename, @optional cocos2d::BillBoard::Mode mode)
            return _cocos2d_BillBoard_create$5(L);
        // }
    }

    if (num_args == 2) {
        if ((olua_is_string(L, 1)) && (olua_is_object(L, 2, "cc.Rect"))) {
            // static cocos2d::BillBoard *create(const std::string &filename, const cocos2d::Rect &rect, @optional cocos2d::BillBoard::Mode mode)
            return _cocos2d_BillBoard_create$6(L);
        }

        // if ((olua_is_string(L, 1)) && (olua_is_enum(L, 2))) {
            // static cocos2d::BillBoard *create(const std::string &filename, @optional cocos2d::BillBoard::Mode mode)
            return _cocos2d_BillBoard_create$2(L);
        // }
    }

    if (num_args == 3) {
        // if ((olua_is_string(L, 1)) && (olua_is_object(L, 2, "cc.Rect")) && (olua_is_enum(L, 3))) {
            // static cocos2d::BillBoard *create(const std::string &filename, const cocos2d::Rect &rect, @optional cocos2d::BillBoard::Mode mode)
            return _cocos2d_BillBoard_create$3(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::BillBoard::create' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_BillBoard_createWithTexture$1(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Texture2D *arg1 = nullptr;       /** texture */
    cocos2d::BillBoard::Mode arg2 = (cocos2d::BillBoard::Mode)0;       /** mode */

    olua_check_object(L, 1, &arg1, "cc.Texture2D");
    olua_check_enum(L, 2, &arg2);

    // static cocos2d::BillBoard *createWithTexture(cocos2d::Texture2D *texture, @optional cocos2d::BillBoard::Mode mode)
    cocos2d::BillBoard *ret = cocos2d::BillBoard::createWithTexture(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "cc.BillBoard");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_BillBoard_createWithTexture$2(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Texture2D *arg1 = nullptr;       /** texture */

    olua_check_object(L, 1, &arg1, "cc.Texture2D");

    // static cocos2d::BillBoard *createWithTexture(cocos2d::Texture2D *texture, @optional cocos2d::BillBoard::Mode mode)
    cocos2d::BillBoard *ret = cocos2d::BillBoard::createWithTexture(arg1);
    int num_ret = olua_push_object(L, ret, "cc.BillBoard");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_BillBoard_createWithTexture(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 1) {
        // if ((olua_is_object(L, 1, "cc.Texture2D"))) {
            // static cocos2d::BillBoard *createWithTexture(cocos2d::Texture2D *texture, @optional cocos2d::BillBoard::Mode mode)
            return _cocos2d_BillBoard_createWithTexture$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 1, "cc.Texture2D")) && (olua_is_enum(L, 2))) {
            // static cocos2d::BillBoard *createWithTexture(cocos2d::Texture2D *texture, @optional cocos2d::BillBoard::Mode mode)
            return _cocos2d_BillBoard_createWithTexture$1(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::BillBoard::createWithTexture' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_BillBoard_getMode(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::BillBoard *self = nullptr;

    olua_to_object(L, 1, &self, "cc.BillBoard");

    // cocos2d::BillBoard::Mode getMode()
    cocos2d::BillBoard::Mode ret = self->getMode();
    int num_ret = olua_push_enum(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_BillBoard_new(lua_State *L)
{
    olua_startinvoke(L);

    // BillBoard()
    cocos2d::BillBoard *ret = new cocos2d::BillBoard();
    int num_ret = olua_push_object(L, ret, "cc.BillBoard");
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_BillBoard_setMode(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::BillBoard *self = nullptr;
    cocos2d::BillBoard::Mode arg1 = (cocos2d::BillBoard::Mode)0;       /** mode */

    olua_to_object(L, 1, &self, "cc.BillBoard");
    olua_check_enum(L, 2, &arg1);

    // void setMode(cocos2d::BillBoard::Mode mode)
    self->setMode(arg1);

    olua_endinvoke(L);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_BillBoard(lua_State *L)
{
    oluacls_class<cocos2d::BillBoard, cocos2d::Sprite>(L, "cc.BillBoard");
    oluacls_func(L, "create", _cocos2d_BillBoard_create);
    oluacls_func(L, "createWithTexture", _cocos2d_BillBoard_createWithTexture);
    oluacls_func(L, "getMode", _cocos2d_BillBoard_getMode);
    oluacls_func(L, "new", _cocos2d_BillBoard_new);
    oluacls_func(L, "setMode", _cocos2d_BillBoard_setMode);
    oluacls_prop(L, "mode", _cocos2d_BillBoard_getMode, _cocos2d_BillBoard_setMode);

    return 1;
}
OLUA_END_DECLS

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_Sprite3DMaterial_MaterialType(lua_State *L)
{
    oluacls_class<cocos2d::Sprite3DMaterial::MaterialType>(L, "cc.Sprite3DMaterial.MaterialType");
    oluacls_func(L, "__index", olua_indexerror);
    oluacls_func(L, "__newindex", olua_newindexerror);
    oluacls_enum(L, "BUMPED_DIFFUSE", (lua_Integer)cocos2d::Sprite3DMaterial::MaterialType::BUMPED_DIFFUSE);
    oluacls_enum(L, "CUSTOM", (lua_Integer)cocos2d::Sprite3DMaterial::MaterialType::CUSTOM);
    oluacls_enum(L, "DIFFUSE", (lua_Integer)cocos2d::Sprite3DMaterial::MaterialType::DIFFUSE);
    oluacls_enum(L, "DIFFUSE_NOTEX", (lua_Integer)cocos2d::Sprite3DMaterial::MaterialType::DIFFUSE_NOTEX);
    oluacls_enum(L, "UNLIT", (lua_Integer)cocos2d::Sprite3DMaterial::MaterialType::UNLIT);
    oluacls_enum(L, "UNLIT_NOTEX", (lua_Integer)cocos2d::Sprite3DMaterial::MaterialType::UNLIT_NOTEX);
    oluacls_enum(L, "VERTEX_LIT", (lua_Integer)cocos2d::Sprite3DMaterial::MaterialType::VERTEX_LIT);

    return 1;
}
OLUA_END_DECLS

static int _cocos2d_Sprite3DMaterial_createBuiltInMaterial$1(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3DMaterial::MaterialType arg1 = (cocos2d::Sprite3DMaterial::MaterialType)0;       /** type */
    bool arg2 = false;       /** skinned */

    olua_check_enum(L, 1, &arg1);
    olua_check_bool(L, 2, &arg2);

    // static cocos2d::Sprite3DMaterial *createBuiltInMaterial(cocos2d::Sprite3DMaterial::MaterialType type, bool skinned)
    cocos2d::Sprite3DMaterial *ret = cocos2d::Sprite3DMaterial::createBuiltInMaterial(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "cc.Sprite3DMaterial");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3DMaterial_createBuiltInMaterial$2(lua_State *L)
{
    olua_startinvoke(L);

    // static void createBuiltInMaterial()
    cocos2d::Sprite3DMaterial::createBuiltInMaterial();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3DMaterial_createBuiltInMaterial(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // static void createBuiltInMaterial()
        return _cocos2d_Sprite3DMaterial_createBuiltInMaterial$2(L);
    }

    if (num_args == 2) {
        // if ((olua_is_enum(L, 1)) && (olua_is_bool(L, 2))) {
            // static cocos2d::Sprite3DMaterial *createBuiltInMaterial(cocos2d::Sprite3DMaterial::MaterialType type, bool skinned)
            return _cocos2d_Sprite3DMaterial_createBuiltInMaterial$1(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Sprite3DMaterial::createBuiltInMaterial' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_Sprite3DMaterial_createWithFilename(lua_State *L)
{
    olua_startinvoke(L);

    std::string arg1;       /** path */

    olua_check_string(L, 1, &arg1);

    // static cocos2d::Sprite3DMaterial *createWithFilename(const std::string &path)
    cocos2d::Sprite3DMaterial *ret = cocos2d::Sprite3DMaterial::createWithFilename(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Sprite3DMaterial");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3DMaterial_createWithProgramState(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::backend::ProgramState *arg1 = nullptr;       /** programState */

    olua_check_object(L, 1, &arg1, "ccb.ProgramState");

    // static cocos2d::Sprite3DMaterial *createWithProgramState(cocos2d::backend::ProgramState *programState)
    cocos2d::Sprite3DMaterial *ret = cocos2d::Sprite3DMaterial::createWithProgramState(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Sprite3DMaterial");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3DMaterial_getMaterialType(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3DMaterial *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3DMaterial");

    // cocos2d::Sprite3DMaterial::MaterialType getMaterialType()
    cocos2d::Sprite3DMaterial::MaterialType ret = self->getMaterialType();
    int num_ret = olua_push_enum(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3DMaterial_releaseBuiltInMaterial(lua_State *L)
{
    olua_startinvoke(L);

    // static void releaseBuiltInMaterial()
    cocos2d::Sprite3DMaterial::releaseBuiltInMaterial();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3DMaterial_releaseCachedMaterial(lua_State *L)
{
    olua_startinvoke(L);

    // static void releaseCachedMaterial()
    cocos2d::Sprite3DMaterial::releaseCachedMaterial();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3DMaterial_setTexture(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3DMaterial *self = nullptr;
    cocos2d::Texture2D *arg1 = nullptr;       /** tex */
    cocos2d::NTextureData::Usage arg2 = (cocos2d::NTextureData::Usage)0;       /** usage */

    olua_to_object(L, 1, &self, "cc.Sprite3DMaterial");
    olua_check_object(L, 2, &arg1, "cc.Texture2D");
    olua_check_enum(L, 3, &arg2);

    // void setTexture(cocos2d::Texture2D *tex, cocos2d::NTextureData::Usage usage)
    self->setTexture(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_Sprite3DMaterial(lua_State *L)
{
    oluacls_class<cocos2d::Sprite3DMaterial, cocos2d::Material>(L, "cc.Sprite3DMaterial");
    oluacls_func(L, "createBuiltInMaterial", _cocos2d_Sprite3DMaterial_createBuiltInMaterial);
    oluacls_func(L, "createWithFilename", _cocos2d_Sprite3DMaterial_createWithFilename);
    oluacls_func(L, "createWithProgramState", _cocos2d_Sprite3DMaterial_createWithProgramState);
    oluacls_func(L, "getMaterialType", _cocos2d_Sprite3DMaterial_getMaterialType);
    oluacls_func(L, "releaseBuiltInMaterial", _cocos2d_Sprite3DMaterial_releaseBuiltInMaterial);
    oluacls_func(L, "releaseCachedMaterial", _cocos2d_Sprite3DMaterial_releaseCachedMaterial);
    oluacls_func(L, "setTexture", _cocos2d_Sprite3DMaterial_setTexture);
    oluacls_prop(L, "materialType", _cocos2d_Sprite3DMaterial_getMaterialType, nullptr);

    return 1;
}
OLUA_END_DECLS

static int _cocos2d_Sprite3D_addMesh(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    cocos2d::Mesh *arg1 = nullptr;       /** mesh */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_object(L, 2, &arg1, "cc.Mesh");

    // void addMesh(cocos2d::Mesh *mesh)
    self->addMesh(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_afterAsyncLoad(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    void *arg1 = nullptr;       /** param */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_object(L, 2, &arg1, "void *");

    // void afterAsyncLoad(void *param)
    self->afterAsyncLoad(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_as(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    const char *arg1 = nullptr;       /** cls */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_string(L, 2, &arg1);

    do {
        if (olua_isa(L, 1, arg1)) {
            lua_pushvalue(L, 1);
            break;
        }
        if (olua_strequal(arg1, "cc.BlendProtocol")) {
            olua_pushobj_as<cocos2d::BlendProtocol>(L, 1, self, "as.cc.BlendProtocol");
            break;
        }

        luaL_error(L, "'cocos2d::Sprite3D' can't cast to '%s'", arg1);
    } while (0);

    olua_endinvoke(L);

    return 1;
}

static int _cocos2d_Sprite3D_create$1(lua_State *L)
{
    olua_startinvoke(L);

    // static cocos2d::Sprite3D *create()
    cocos2d::Sprite3D *ret = cocos2d::Sprite3D::create();
    int num_ret = olua_push_object(L, ret, "cc.Sprite3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_create$2(lua_State *L)
{
    olua_startinvoke(L);

    std::string arg1;       /** modelPath */

    olua_check_string(L, 1, &arg1);

    // static cocos2d::Sprite3D *create(const std::string &modelPath)
    cocos2d::Sprite3D *ret = cocos2d::Sprite3D::create(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Sprite3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_create$3(lua_State *L)
{
    olua_startinvoke(L);

    std::string arg1;       /** modelPath */
    std::string arg2;       /** texturePath */

    olua_check_string(L, 1, &arg1);
    olua_check_string(L, 2, &arg2);

    // static cocos2d::Sprite3D *create(const std::string &modelPath, const std::string &texturePath)
    cocos2d::Sprite3D *ret = cocos2d::Sprite3D::create(arg1, arg2);
    int num_ret = olua_push_object(L, ret, "cc.Sprite3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_create(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 0) {
        // static cocos2d::Sprite3D *create()
        return _cocos2d_Sprite3D_create$1(L);
    }

    if (num_args == 1) {
        // if ((olua_is_string(L, 1))) {
            // static cocos2d::Sprite3D *create(const std::string &modelPath)
            return _cocos2d_Sprite3D_create$2(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_string(L, 1)) && (olua_is_string(L, 2))) {
            // static cocos2d::Sprite3D *create(const std::string &modelPath, const std::string &texturePath)
            return _cocos2d_Sprite3D_create$3(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Sprite3D::create' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_Sprite3D_createAsync$1(lua_State *L)
{
    olua_startinvoke(L);

    std::string arg1;       /** modelPath */
    std::function<void (cocos2d::Sprite3D *, void *)> arg2;       /** callback */
    void *arg3 = nullptr;       /** callbackparam */

    olua_check_string(L, 1, &arg1);
    olua_check_callback(L, 2, &arg2, "std.function");
    olua_check_object(L, 3, &arg3, "void *");

    void *cb_store = (void *)olua_pushclassobj(L, "cc.Sprite3D");
    std::string cb_tag = "createAsync";
    std::string cb_name = olua_setcallback(L, cb_store,  2, cb_tag.c_str(), OLUA_TAG_REPLACE);
    olua_Context cb_ctx = olua_context(L);
    arg2 = [cb_store, cb_name, cb_ctx](cocos2d::Sprite3D *arg1, void *arg2) {
        lua_State *L = olua_mainthread(NULL);
        olua_checkhostthread();

        if (olua_contextequal(L, cb_ctx)) {
            int top = lua_gettop(L);
            size_t last = olua_push_objpool(L);
            olua_enable_objpool(L);
            olua_push_object(L, arg1, "cc.Sprite3D");
            olua_push_object(L, arg2, "void *");
            olua_disable_objpool(L);

            olua_callback(L, cb_store, cb_name.c_str(), 2);

            //pop stack value
            olua_pop_objpool(L, last);
            lua_settop(L, top);
        }
    };

    // static void createAsync(const std::string &modelPath, @localvar const std::function<void (cocos2d::Sprite3D *, void *)> &callback, void *callbackparam)
    cocos2d::Sprite3D::createAsync(arg1, arg2, arg3);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_createAsync$2(lua_State *L)
{
    olua_startinvoke(L);

    std::string arg1;       /** modelPath */
    std::string arg2;       /** texturePath */
    std::function<void (cocos2d::Sprite3D *, void *)> arg3;       /** callback */
    void *arg4 = nullptr;       /** callbackparam */

    olua_check_string(L, 1, &arg1);
    olua_check_string(L, 2, &arg2);
    olua_check_callback(L, 3, &arg3, "std.function");
    olua_check_object(L, 4, &arg4, "void *");

    void *cb_store = (void *)olua_pushclassobj(L, "cc.Sprite3D");
    std::string cb_tag = "createAsync";
    std::string cb_name = olua_setcallback(L, cb_store,  3, cb_tag.c_str(), OLUA_TAG_REPLACE);
    olua_Context cb_ctx = olua_context(L);
    arg3 = [cb_store, cb_name, cb_ctx](cocos2d::Sprite3D *arg1, void *arg2) {
        lua_State *L = olua_mainthread(NULL);
        olua_checkhostthread();

        if (olua_contextequal(L, cb_ctx)) {
            int top = lua_gettop(L);
            size_t last = olua_push_objpool(L);
            olua_enable_objpool(L);
            olua_push_object(L, arg1, "cc.Sprite3D");
            olua_push_object(L, arg2, "void *");
            olua_disable_objpool(L);

            olua_callback(L, cb_store, cb_name.c_str(), 2);

            //pop stack value
            olua_pop_objpool(L, last);
            lua_settop(L, top);
        }
    };

    // static void createAsync(const std::string &modelPath, const std::string &texturePath, @localvar const std::function<void (cocos2d::Sprite3D *, void *)> &callback, void *callbackparam)
    cocos2d::Sprite3D::createAsync(arg1, arg2, arg3, arg4);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_createAsync(lua_State *L)
{
    int num_args = lua_gettop(L);

    if (num_args == 3) {
        // if ((olua_is_string(L, 1)) && (olua_is_callback(L, 2, "std.function")) && (olua_is_object(L, 3, "void *"))) {
            // static void createAsync(const std::string &modelPath, @localvar const std::function<void (cocos2d::Sprite3D *, void *)> &callback, void *callbackparam)
            return _cocos2d_Sprite3D_createAsync$1(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_string(L, 1)) && (olua_is_string(L, 2)) && (olua_is_callback(L, 3, "std.function")) && (olua_is_object(L, 4, "void *"))) {
            // static void createAsync(const std::string &modelPath, const std::string &texturePath, @localvar const std::function<void (cocos2d::Sprite3D *, void *)> &callback, void *callbackparam)
            return _cocos2d_Sprite3D_createAsync$2(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Sprite3D::createAsync' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_Sprite3D_genMaterial$1(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    bool arg1 = false;       /** useLight */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_bool(L, 2, &arg1);

    // void genMaterial(@optional bool useLight)
    self->genMaterial(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_genMaterial$2(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3D");

    // void genMaterial(@optional bool useLight)
    self->genMaterial();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_genMaterial(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 0) {
        // void genMaterial(@optional bool useLight)
        return _cocos2d_Sprite3D_genMaterial$2(L);
    }

    if (num_args == 1) {
        // if ((olua_is_bool(L, 2))) {
            // void genMaterial(@optional bool useLight)
            return _cocos2d_Sprite3D_genMaterial$1(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Sprite3D::genMaterial' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_Sprite3D_getAttachNode(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    std::string arg1;       /** boneName */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_string(L, 2, &arg1);

    // cocos2d::AttachNode *getAttachNode(const std::string &boneName)
    cocos2d::AttachNode *ret = self->getAttachNode(arg1);
    int num_ret = olua_push_object(L, ret, "cc.AttachNode");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_getBlendFunc(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3D");

    // const cocos2d::BlendFunc &getBlendFunc()
    const cocos2d::BlendFunc &ret = self->getBlendFunc();
    int num_ret = olua_push_object(L, ret, "cc.BlendFunc");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_getLightMask(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3D");

    // unsigned int getLightMask()
    unsigned int ret = self->getLightMask();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_getMaterial(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    int arg1 = 0;       /** meshIndex */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_integer(L, 2, &arg1);

    // cocos2d::Material *getMaterial(int meshIndex)
    cocos2d::Material *ret = self->getMaterial(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Material");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_getMesh(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3D");

    // cocos2d::Mesh *getMesh()
    cocos2d::Mesh *ret = self->getMesh();
    int num_ret = olua_push_object(L, ret, "cc.Mesh");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_getMeshArrayByName(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    std::string arg1;       /** name */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_string(L, 2, &arg1);

    // std::vector<cocos2d::Mesh *> getMeshArrayByName(const std::string &name)
    std::vector<cocos2d::Mesh *> ret = self->getMeshArrayByName(arg1);
    int num_ret = olua_push_vector<cocos2d::Mesh *>(L, ret, [L](cocos2d::Mesh *arg1) {
        olua_push_object(L, arg1, "cc.Mesh");
    });

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_getMeshByIndex(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    int arg1 = 0;       /** index */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_integer(L, 2, &arg1);

    // cocos2d::Mesh *getMeshByIndex(int index)
    cocos2d::Mesh *ret = self->getMeshByIndex(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Mesh");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_getMeshByName(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    std::string arg1;       /** name */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_string(L, 2, &arg1);

    // cocos2d::Mesh *getMeshByName(const std::string &name)
    cocos2d::Mesh *ret = self->getMeshByName(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Mesh");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_getMeshCount(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3D");

    // ssize_t getMeshCount()
    ssize_t ret = self->getMeshCount();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_getMeshes(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3D");

    // const cocos2d::Vector<cocos2d::Mesh *> &getMeshes()
    const cocos2d::Vector<cocos2d::Mesh *> &ret = self->getMeshes();
    int num_ret = olua_push_vector<cocos2d::Mesh *>(L, ret, [L](cocos2d::Mesh *arg1) {
        olua_push_object(L, arg1, "cc.Mesh");
    });

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_getSkeleton(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3D");

    // cocos2d::Skeleton3D *getSkeleton()
    cocos2d::Skeleton3D *ret = self->getSkeleton();
    int num_ret = olua_push_object(L, ret, "cc.Skeleton3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_initWithFile(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    std::string arg1;       /** path */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_string(L, 2, &arg1);

    // bool initWithFile(const std::string &path)
    bool ret = self->initWithFile(arg1);
    int num_ret = olua_push_bool(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_isForceDepthWrite(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3D");

    // bool isForceDepthWrite()
    bool ret = self->isForceDepthWrite();
    int num_ret = olua_push_bool(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_loadFromCache(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    std::string arg1;       /** path */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_string(L, 2, &arg1);

    // bool loadFromCache(const std::string &path)
    bool ret = self->loadFromCache(arg1);
    int num_ret = olua_push_bool(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_new(lua_State *L)
{
    olua_startinvoke(L);

    // Sprite3D()
    cocos2d::Sprite3D *ret = new cocos2d::Sprite3D();
    int num_ret = olua_push_object(L, ret, "cc.Sprite3D");
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Sprite3D_onAABBDirty(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3D");

    // void onAABBDirty()
    self->onAABBDirty();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_removeAllAttachNode(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Sprite3D");

    // void removeAllAttachNode()
    self->removeAllAttachNode();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_removeAttachNode(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    std::string arg1;       /** boneName */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_string(L, 2, &arg1);

    // void removeAttachNode(const std::string &boneName)
    self->removeAttachNode(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setBlendFunc(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    cocos2d::BlendFunc arg1;       /** blendFunc */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_object(L, 2, &arg1, "cc.BlendFunc");

    // void setBlendFunc(const cocos2d::BlendFunc &blendFunc)
    self->setBlendFunc(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setCullFace(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    cocos2d::CullFaceSide arg1 = (cocos2d::CullFaceSide)0;       /** side */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_enum(L, 2, &arg1);

    // void setCullFace(cocos2d::CullFaceSide side)
    self->setCullFace(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setCullFaceEnabled(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    bool arg1 = false;       /** enable */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_bool(L, 2, &arg1);

    // void setCullFaceEnabled(bool enable)
    self->setCullFaceEnabled(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setForce2DQueue(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    bool arg1 = false;       /** force2D */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_bool(L, 2, &arg1);

    // void setForce2DQueue(bool force2D)
    self->setForce2DQueue(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setForceDepthWrite(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    bool arg1 = false;       /** value */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_bool(L, 2, &arg1);

    // void setForceDepthWrite(bool value)
    self->setForceDepthWrite(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setLightMask(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    unsigned int arg1 = 0;       /** mask */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_integer(L, 2, &arg1);

    // void setLightMask(unsigned int mask)
    self->setLightMask(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setMaterial$1(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    cocos2d::Material *arg1 = nullptr;       /** material */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_object(L, 2, &arg1, "cc.Material");

    // void setMaterial(cocos2d::Material *material)
    self->setMaterial(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setMaterial$2(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    cocos2d::Material *arg1 = nullptr;       /** material */
    int arg2 = 0;       /** meshIndex */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_object(L, 2, &arg1, "cc.Material");
    olua_check_integer(L, 3, &arg2);

    // void setMaterial(cocos2d::Material *material, int meshIndex)
    self->setMaterial(arg1, arg2);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setMaterial(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        // if ((olua_is_object(L, 2, "cc.Material"))) {
            // void setMaterial(cocos2d::Material *material)
            return _cocos2d_Sprite3D_setMaterial$1(L);
        // }
    }

    if (num_args == 2) {
        // if ((olua_is_object(L, 2, "cc.Material")) && (olua_is_integer(L, 3))) {
            // void setMaterial(cocos2d::Material *material, int meshIndex)
            return _cocos2d_Sprite3D_setMaterial$2(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Sprite3D::setMaterial' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_Sprite3D_setTexture$1(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    std::string arg1;       /** texFile */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_string(L, 2, &arg1);

    // void setTexture(const std::string &texFile)
    self->setTexture(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setTexture$2(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Sprite3D *self = nullptr;
    cocos2d::Texture2D *arg1 = nullptr;       /** texture */

    olua_to_object(L, 1, &self, "cc.Sprite3D");
    olua_check_object(L, 2, &arg1, "cc.Texture2D");

    // void setTexture(cocos2d::Texture2D *texture)
    self->setTexture(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Sprite3D_setTexture(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 1) {
        if ((olua_is_string(L, 2))) {
            // void setTexture(const std::string &texFile)
            return _cocos2d_Sprite3D_setTexture$1(L);
        }

        // if ((olua_is_object(L, 2, "cc.Texture2D"))) {
            // void setTexture(cocos2d::Texture2D *texture)
            return _cocos2d_Sprite3D_setTexture$2(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Sprite3D::setTexture' not support '%d' arguments", num_args);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_Sprite3D(lua_State *L)
{
    oluacls_class<cocos2d::Sprite3D, cocos2d::Node>(L, "cc.Sprite3D");
    oluacls_func(L, "addMesh", _cocos2d_Sprite3D_addMesh);
    oluacls_func(L, "afterAsyncLoad", _cocos2d_Sprite3D_afterAsyncLoad);
    oluacls_func(L, "as", _cocos2d_Sprite3D_as);
    oluacls_func(L, "create", _cocos2d_Sprite3D_create);
    oluacls_func(L, "createAsync", _cocos2d_Sprite3D_createAsync);
    oluacls_func(L, "genMaterial", _cocos2d_Sprite3D_genMaterial);
    oluacls_func(L, "getAttachNode", _cocos2d_Sprite3D_getAttachNode);
    oluacls_func(L, "getBlendFunc", _cocos2d_Sprite3D_getBlendFunc);
    oluacls_func(L, "getLightMask", _cocos2d_Sprite3D_getLightMask);
    oluacls_func(L, "getMaterial", _cocos2d_Sprite3D_getMaterial);
    oluacls_func(L, "getMesh", _cocos2d_Sprite3D_getMesh);
    oluacls_func(L, "getMeshArrayByName", _cocos2d_Sprite3D_getMeshArrayByName);
    oluacls_func(L, "getMeshByIndex", _cocos2d_Sprite3D_getMeshByIndex);
    oluacls_func(L, "getMeshByName", _cocos2d_Sprite3D_getMeshByName);
    oluacls_func(L, "getMeshCount", _cocos2d_Sprite3D_getMeshCount);
    oluacls_func(L, "getMeshes", _cocos2d_Sprite3D_getMeshes);
    oluacls_func(L, "getSkeleton", _cocos2d_Sprite3D_getSkeleton);
    oluacls_func(L, "initWithFile", _cocos2d_Sprite3D_initWithFile);
    oluacls_func(L, "isForceDepthWrite", _cocos2d_Sprite3D_isForceDepthWrite);
    oluacls_func(L, "loadFromCache", _cocos2d_Sprite3D_loadFromCache);
    oluacls_func(L, "new", _cocos2d_Sprite3D_new);
    oluacls_func(L, "onAABBDirty", _cocos2d_Sprite3D_onAABBDirty);
    oluacls_func(L, "removeAllAttachNode", _cocos2d_Sprite3D_removeAllAttachNode);
    oluacls_func(L, "removeAttachNode", _cocos2d_Sprite3D_removeAttachNode);
    oluacls_func(L, "setBlendFunc", _cocos2d_Sprite3D_setBlendFunc);
    oluacls_func(L, "setCullFace", _cocos2d_Sprite3D_setCullFace);
    oluacls_func(L, "setCullFaceEnabled", _cocos2d_Sprite3D_setCullFaceEnabled);
    oluacls_func(L, "setForce2DQueue", _cocos2d_Sprite3D_setForce2DQueue);
    oluacls_func(L, "setForceDepthWrite", _cocos2d_Sprite3D_setForceDepthWrite);
    oluacls_func(L, "setLightMask", _cocos2d_Sprite3D_setLightMask);
    oluacls_func(L, "setMaterial", _cocos2d_Sprite3D_setMaterial);
    oluacls_func(L, "setTexture", _cocos2d_Sprite3D_setTexture);
    oluacls_prop(L, "blendFunc", _cocos2d_Sprite3D_getBlendFunc, _cocos2d_Sprite3D_setBlendFunc);
    oluacls_prop(L, "forceDepthWrite", _cocos2d_Sprite3D_isForceDepthWrite, _cocos2d_Sprite3D_setForceDepthWrite);
    oluacls_prop(L, "lightMask", _cocos2d_Sprite3D_getLightMask, _cocos2d_Sprite3D_setLightMask);
    oluacls_prop(L, "mesh", _cocos2d_Sprite3D_getMesh, nullptr);
    oluacls_prop(L, "meshCount", _cocos2d_Sprite3D_getMeshCount, nullptr);
    oluacls_prop(L, "meshes", _cocos2d_Sprite3D_getMeshes, nullptr);
    oluacls_prop(L, "skeleton", _cocos2d_Sprite3D_getSkeleton, nullptr);

    return 1;
}
OLUA_END_DECLS

static int _cocos2d_AttachNode_create(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *arg1 = nullptr;       /** attachBone */

    olua_check_object(L, 1, &arg1, "cc.Bone3D");

    // static cocos2d::AttachNode *create(cocos2d::Bone3D *attachBone)
    cocos2d::AttachNode *ret = cocos2d::AttachNode::create(arg1);
    int num_ret = olua_push_object(L, ret, "cc.AttachNode");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_AttachNode_new(lua_State *L)
{
    olua_startinvoke(L);

    // AttachNode()
    cocos2d::AttachNode *ret = new cocos2d::AttachNode();
    int num_ret = olua_push_object(L, ret, "cc.AttachNode");
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_AttachNode(lua_State *L)
{
    oluacls_class<cocos2d::AttachNode, cocos2d::Node>(L, "cc.AttachNode");
    oluacls_func(L, "create", _cocos2d_AttachNode_create);
    oluacls_func(L, "new", _cocos2d_AttachNode_new);

    return 1;
}
OLUA_END_DECLS

static int _cocos2d_Bone3D_addChildBone(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;
    cocos2d::Bone3D *arg1 = nullptr;       /** bone */

    olua_to_object(L, 1, &self, "cc.Bone3D");
    olua_check_object(L, 2, &arg1, "cc.Bone3D");

    // void addChildBone(cocos2d::Bone3D *bone)
    self->addChildBone(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_clearBoneBlendState(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Bone3D");

    // void clearBoneBlendState()
    self->clearBoneBlendState();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_create(lua_State *L)
{
    olua_startinvoke(L);

    std::string arg1;       /** id */

    olua_check_string(L, 1, &arg1);

    // static cocos2d::Bone3D *create(const std::string &id)
    cocos2d::Bone3D *ret = cocos2d::Bone3D::create(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Bone3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Bone3D_getChildBoneByIndex(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;
    int arg1 = 0;       /** index */

    olua_to_object(L, 1, &self, "cc.Bone3D");
    olua_check_integer(L, 2, &arg1);

    // cocos2d::Bone3D *getChildBoneByIndex(int index)
    cocos2d::Bone3D *ret = self->getChildBoneByIndex(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Bone3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Bone3D_getChildBoneCount(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Bone3D");

    // ssize_t getChildBoneCount()
    ssize_t ret = self->getChildBoneCount();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Bone3D_getInverseBindPose(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Bone3D");

    // const cocos2d::Mat4 &getInverseBindPose()
    const cocos2d::Mat4 &ret = self->getInverseBindPose();
    int num_ret = olua_push_object(L, ret, "cc.Mat4");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Bone3D_getName(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Bone3D");

    // const std::string &getName()
    const std::string &ret = self->getName();
    int num_ret = olua_push_string(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Bone3D_getParentBone(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Bone3D");

    // cocos2d::Bone3D *getParentBone()
    cocos2d::Bone3D *ret = self->getParentBone();
    int num_ret = olua_push_object(L, ret, "cc.Bone3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Bone3D_getWorldMat(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Bone3D");

    // const cocos2d::Mat4 &getWorldMat()
    const cocos2d::Mat4 &ret = self->getWorldMat();
    int num_ret = olua_push_object(L, ret, "cc.Mat4");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Bone3D_removeAllChildBone(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Bone3D");

    // void removeAllChildBone()
    self->removeAllChildBone();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_removeChildBone(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;
    cocos2d::Bone3D *arg1 = nullptr;       /** bone */

    olua_to_object(L, 1, &self, "cc.Bone3D");
    olua_check_object(L, 2, &arg1, "cc.Bone3D");

    // void removeChildBone(cocos2d::Bone3D *bone)
    self->removeChildBone(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_removeChildBoneByIndex(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;
    int arg1 = 0;       /** index */

    olua_to_object(L, 1, &self, "cc.Bone3D");
    olua_check_integer(L, 2, &arg1);

    // void removeChildBoneByIndex(int index)
    self->removeChildBoneByIndex(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_resetPose(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Bone3D");

    // void resetPose()
    self->resetPose();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_setAnimationValue$1(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;
    float *arg1 = nullptr;       /** trans */
    float *arg2 = nullptr;       /** rot */
    float *arg3 = nullptr;       /** scale */
    void *arg4 = nullptr;       /** tag */
    float arg5 = 0;       /** weight */

    olua_to_object(L, 1, &self, "cc.Bone3D");
    olua_check_array(L, 2, &arg1, "olua.float");
    olua_check_array(L, 3, &arg2, "olua.float");
    olua_check_array(L, 4, &arg3, "olua.float");
    olua_check_object(L, 5, &arg4, "void *");
    olua_check_number(L, 6, &arg5);

    // void setAnimationValue(float *trans, float *rot, float *scale, @optional void *tag, @optional float weight)
    self->setAnimationValue(arg1, arg2, arg3, arg4, arg5);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_setAnimationValue$2(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;
    float *arg1 = nullptr;       /** trans */
    float *arg2 = nullptr;       /** rot */
    float *arg3 = nullptr;       /** scale */

    olua_to_object(L, 1, &self, "cc.Bone3D");
    olua_check_array(L, 2, &arg1, "olua.float");
    olua_check_array(L, 3, &arg2, "olua.float");
    olua_check_array(L, 4, &arg3, "olua.float");

    // void setAnimationValue(float *trans, float *rot, float *scale, @optional void *tag, @optional float weight)
    self->setAnimationValue(arg1, arg2, arg3);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_setAnimationValue$3(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;
    float *arg1 = nullptr;       /** trans */
    float *arg2 = nullptr;       /** rot */
    float *arg3 = nullptr;       /** scale */
    void *arg4 = nullptr;       /** tag */

    olua_to_object(L, 1, &self, "cc.Bone3D");
    olua_check_array(L, 2, &arg1, "olua.float");
    olua_check_array(L, 3, &arg2, "olua.float");
    olua_check_array(L, 4, &arg3, "olua.float");
    olua_check_object(L, 5, &arg4, "void *");

    // void setAnimationValue(float *trans, float *rot, float *scale, @optional void *tag, @optional float weight)
    self->setAnimationValue(arg1, arg2, arg3, arg4);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_setAnimationValue(lua_State *L)
{
    int num_args = lua_gettop(L) - 1;

    if (num_args == 3) {
        // if ((olua_is_array(L, 2, "olua.float")) && (olua_is_array(L, 3, "olua.float")) && (olua_is_array(L, 4, "olua.float"))) {
            // void setAnimationValue(float *trans, float *rot, float *scale, @optional void *tag, @optional float weight)
            return _cocos2d_Bone3D_setAnimationValue$2(L);
        // }
    }

    if (num_args == 4) {
        // if ((olua_is_array(L, 2, "olua.float")) && (olua_is_array(L, 3, "olua.float")) && (olua_is_array(L, 4, "olua.float")) && (olua_is_object(L, 5, "void *"))) {
            // void setAnimationValue(float *trans, float *rot, float *scale, @optional void *tag, @optional float weight)
            return _cocos2d_Bone3D_setAnimationValue$3(L);
        // }
    }

    if (num_args == 5) {
        // if ((olua_is_array(L, 2, "olua.float")) && (olua_is_array(L, 3, "olua.float")) && (olua_is_array(L, 4, "olua.float")) && (olua_is_object(L, 5, "void *")) && (olua_is_number(L, 6))) {
            // void setAnimationValue(float *trans, float *rot, float *scale, @optional void *tag, @optional float weight)
            return _cocos2d_Bone3D_setAnimationValue$1(L);
        // }
    }

    luaL_error(L, "method 'cocos2d::Bone3D::setAnimationValue' not support '%d' arguments", num_args);

    return 0;
}

static int _cocos2d_Bone3D_setInverseBindPose(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;
    cocos2d::Mat4 arg1;       /** m */

    olua_to_object(L, 1, &self, "cc.Bone3D");
    olua_check_object(L, 2, &arg1, "cc.Mat4");

    // void setInverseBindPose(const cocos2d::Mat4 &m)
    self->setInverseBindPose(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_setOriPose(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;
    cocos2d::Mat4 arg1;       /** m */

    olua_to_object(L, 1, &self, "cc.Bone3D");
    olua_check_object(L, 2, &arg1, "cc.Mat4");

    // void setOriPose(const cocos2d::Mat4 &m)
    self->setOriPose(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_updateJointMatrix(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;
    cocos2d::Vec4 *arg1 = nullptr;       /** matrixPalette */

    olua_to_object(L, 1, &self, "cc.Bone3D");
    olua_check_object(L, 2, &arg1, "cc.Vec4");

    // void updateJointMatrix(cocos2d::Vec4 *matrixPalette)
    self->updateJointMatrix(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Bone3D_updateWorldMat(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Bone3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Bone3D");

    // void updateWorldMat()
    self->updateWorldMat();

    olua_endinvoke(L);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_Bone3D(lua_State *L)
{
    oluacls_class<cocos2d::Bone3D, cocos2d::Ref>(L, "cc.Bone3D");
    oluacls_func(L, "addChildBone", _cocos2d_Bone3D_addChildBone);
    oluacls_func(L, "clearBoneBlendState", _cocos2d_Bone3D_clearBoneBlendState);
    oluacls_func(L, "create", _cocos2d_Bone3D_create);
    oluacls_func(L, "getChildBoneByIndex", _cocos2d_Bone3D_getChildBoneByIndex);
    oluacls_func(L, "getChildBoneCount", _cocos2d_Bone3D_getChildBoneCount);
    oluacls_func(L, "getInverseBindPose", _cocos2d_Bone3D_getInverseBindPose);
    oluacls_func(L, "getName", _cocos2d_Bone3D_getName);
    oluacls_func(L, "getParentBone", _cocos2d_Bone3D_getParentBone);
    oluacls_func(L, "getWorldMat", _cocos2d_Bone3D_getWorldMat);
    oluacls_func(L, "removeAllChildBone", _cocos2d_Bone3D_removeAllChildBone);
    oluacls_func(L, "removeChildBone", _cocos2d_Bone3D_removeChildBone);
    oluacls_func(L, "removeChildBoneByIndex", _cocos2d_Bone3D_removeChildBoneByIndex);
    oluacls_func(L, "resetPose", _cocos2d_Bone3D_resetPose);
    oluacls_func(L, "setAnimationValue", _cocos2d_Bone3D_setAnimationValue);
    oluacls_func(L, "setInverseBindPose", _cocos2d_Bone3D_setInverseBindPose);
    oluacls_func(L, "setOriPose", _cocos2d_Bone3D_setOriPose);
    oluacls_func(L, "updateJointMatrix", _cocos2d_Bone3D_updateJointMatrix);
    oluacls_func(L, "updateWorldMat", _cocos2d_Bone3D_updateWorldMat);
    oluacls_prop(L, "childBoneCount", _cocos2d_Bone3D_getChildBoneCount, nullptr);
    oluacls_prop(L, "inverseBindPose", _cocos2d_Bone3D_getInverseBindPose, _cocos2d_Bone3D_setInverseBindPose);
    oluacls_prop(L, "name", _cocos2d_Bone3D_getName, nullptr);
    oluacls_prop(L, "parentBone", _cocos2d_Bone3D_getParentBone, nullptr);
    oluacls_prop(L, "worldMat", _cocos2d_Bone3D_getWorldMat, nullptr);

    return 1;
}
OLUA_END_DECLS

static int _cocos2d_Skeleton3D_addBone(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Skeleton3D *self = nullptr;
    cocos2d::Bone3D *arg1 = nullptr;       /** bone */

    olua_to_object(L, 1, &self, "cc.Skeleton3D");
    olua_check_object(L, 2, &arg1, "cc.Bone3D");

    // void addBone(cocos2d::Bone3D *bone)
    self->addBone(arg1);

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Skeleton3D_getBoneByIndex(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Skeleton3D *self = nullptr;
    unsigned int arg1 = 0;       /** index */

    olua_to_object(L, 1, &self, "cc.Skeleton3D");
    olua_check_integer(L, 2, &arg1);

    // cocos2d::Bone3D *getBoneByIndex(unsigned int index)
    cocos2d::Bone3D *ret = self->getBoneByIndex(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Bone3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Skeleton3D_getBoneByName(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Skeleton3D *self = nullptr;
    std::string arg1;       /** id */

    olua_to_object(L, 1, &self, "cc.Skeleton3D");
    olua_check_string(L, 2, &arg1);

    // cocos2d::Bone3D *getBoneByName(const std::string &id)
    cocos2d::Bone3D *ret = self->getBoneByName(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Bone3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Skeleton3D_getBoneCount(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Skeleton3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Skeleton3D");

    // ssize_t getBoneCount()
    ssize_t ret = self->getBoneCount();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Skeleton3D_getBoneIndex(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Skeleton3D *self = nullptr;
    cocos2d::Bone3D *arg1 = nullptr;       /** bone */

    olua_to_object(L, 1, &self, "cc.Skeleton3D");
    olua_check_object(L, 2, &arg1, "cc.Bone3D");

    // int getBoneIndex(cocos2d::Bone3D *bone)
    int ret = self->getBoneIndex(arg1);
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Skeleton3D_getRootBone(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Skeleton3D *self = nullptr;
    int arg1 = 0;       /** index */

    olua_to_object(L, 1, &self, "cc.Skeleton3D");
    olua_check_integer(L, 2, &arg1);

    // cocos2d::Bone3D *getRootBone(int index)
    cocos2d::Bone3D *ret = self->getRootBone(arg1);
    int num_ret = olua_push_object(L, ret, "cc.Bone3D");

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Skeleton3D_getRootCount(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Skeleton3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Skeleton3D");

    // ssize_t getRootCount()
    ssize_t ret = self->getRootCount();
    int num_ret = olua_push_integer(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Skeleton3D_new(lua_State *L)
{
    olua_startinvoke(L);

    // Skeleton3D()
    cocos2d::Skeleton3D *ret = new cocos2d::Skeleton3D();
    int num_ret = olua_push_object(L, ret, "cc.Skeleton3D");
    olua_postnew(L, ret);

    olua_endinvoke(L);

    return num_ret;
}

static int _cocos2d_Skeleton3D_removeAllBones(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Skeleton3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Skeleton3D");

    // void removeAllBones()
    self->removeAllBones();

    olua_endinvoke(L);

    return 0;
}

static int _cocos2d_Skeleton3D_updateBoneMatrix(lua_State *L)
{
    olua_startinvoke(L);

    cocos2d::Skeleton3D *self = nullptr;

    olua_to_object(L, 1, &self, "cc.Skeleton3D");

    // void updateBoneMatrix()
    self->updateBoneMatrix();

    olua_endinvoke(L);

    return 0;
}

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_Skeleton3D(lua_State *L)
{
    oluacls_class<cocos2d::Skeleton3D, cocos2d::Ref>(L, "cc.Skeleton3D");
    oluacls_func(L, "addBone", _cocos2d_Skeleton3D_addBone);
    oluacls_func(L, "getBoneByIndex", _cocos2d_Skeleton3D_getBoneByIndex);
    oluacls_func(L, "getBoneByName", _cocos2d_Skeleton3D_getBoneByName);
    oluacls_func(L, "getBoneCount", _cocos2d_Skeleton3D_getBoneCount);
    oluacls_func(L, "getBoneIndex", _cocos2d_Skeleton3D_getBoneIndex);
    oluacls_func(L, "getRootBone", _cocos2d_Skeleton3D_getRootBone);
    oluacls_func(L, "getRootCount", _cocos2d_Skeleton3D_getRootCount);
    oluacls_func(L, "new", _cocos2d_Skeleton3D_new);
    oluacls_func(L, "removeAllBones", _cocos2d_Skeleton3D_removeAllBones);
    oluacls_func(L, "updateBoneMatrix", _cocos2d_Skeleton3D_updateBoneMatrix);
    oluacls_prop(L, "boneCount", _cocos2d_Skeleton3D_getBoneCount, nullptr);
    oluacls_prop(L, "rootCount", _cocos2d_Skeleton3D_getRootCount, nullptr);

    return 1;
}
OLUA_END_DECLS

OLUA_BEGIN_DECLS
OLUA_LIB int luaopen_cocos2d_3d(lua_State *L)
{
    olua_require(L, "cc.MeshVertexAttrib", luaopen_cocos2d_MeshVertexAttrib);
    olua_require(L, "cc.NTextureData.Usage", luaopen_cocos2d_NTextureData_Usage);
    olua_require(L, "cc.VertexKey", luaopen_cocos2d_shaderinfos_VertexKey);
    olua_require(L, "cc.Uniformkey", luaopen_cocos2d_shaderinfos_Uniformkey);
    olua_require(L, "cc.NTextureData", luaopen_cocos2d_NTextureData);
    olua_require(L, "cc.Mesh", luaopen_cocos2d_Mesh);
    olua_require(L, "cc.MeshSkin", luaopen_cocos2d_MeshSkin);
    olua_require(L, "cc.BillBoard.Mode", luaopen_cocos2d_BillBoard_Mode);
    olua_require(L, "cc.BillBoard", luaopen_cocos2d_BillBoard);
    olua_require(L, "cc.Sprite3DMaterial.MaterialType", luaopen_cocos2d_Sprite3DMaterial_MaterialType);
    olua_require(L, "cc.Sprite3DMaterial", luaopen_cocos2d_Sprite3DMaterial);
    olua_require(L, "cc.Sprite3D", luaopen_cocos2d_Sprite3D);
    olua_require(L, "cc.AttachNode", luaopen_cocos2d_AttachNode);
    olua_require(L, "cc.Bone3D", luaopen_cocos2d_Bone3D);
    olua_require(L, "cc.Skeleton3D", luaopen_cocos2d_Skeleton3D);

    return 0;
}
OLUA_END_DECLS
