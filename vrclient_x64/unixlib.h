#ifndef __VRCLIENT_UNIXLIB_H
#define __VRCLIENT_UNIXLIB_H

#include <stdarg.h>
#include <stddef.h>
#include <assert.h>

#include <windef.h>
#include <winbase.h>
#include <winternl.h>

#include "vrclient_structs.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#include "wine/unixlib.h"

#include <pshpack1.h>

struct render_model
{
    union
    {
        w_RenderModel_t_0912 w_0912;
#if defined(__x86_64__) || defined(__aarch64__)
        w32_RenderModel_t_0912 w32_0912;
#endif /* defined(__x86_64__) || defined(__aarch64__) */
    };
    union
    {
        u_RenderModel_t_0912 *u_0912;
    };

#ifdef __cplusplus
    static struct render_model *from_w( w_RenderModel_t_0912 const* w_map ) { return CONTAINING_RECORD( w_map, struct render_model, w_0912 ); }
    u_RenderModel_t_0912*& u_model( w_RenderModel_t_0912 const& ) { return this->u_0912; }
    w_RenderModel_t_0912& w_model( w_RenderModel_t_0912 const& ) { return this->w_0912; }
#if defined(__x86_64__) || defined(__aarch64__)
    static struct render_model *from_w( w32_RenderModel_t_0912 const* w_map ) { return CONTAINING_RECORD( w_map, struct render_model, w32_0912 ); }
    u_RenderModel_t_0912*& u_model( w32_RenderModel_t_0912 const& ) { return this->u_0912; }
    w32_RenderModel_t_0912& w_model( w32_RenderModel_t_0912 const& ) { return this->w32_0912; }
#endif /* defined(__x86_64__) || defined(__aarch64__) */
#endif /* __cplusplus */
};

struct render_model_texture_map
{
    union
    {
        w_RenderModel_TextureMap_t_090 w_090;
        w_RenderModel_TextureMap_t_1237 w_1237;
#if defined(__x86_64__) || defined(__aarch64__)
        w32_RenderModel_TextureMap_t_090 w32_090;
        w32_RenderModel_TextureMap_t_1237 w32_1237;
#endif /* defined(__x86_64__) || defined(__aarch64__) */
    };
    union
    {
        u_RenderModel_TextureMap_t_090 *u_090;
        u_RenderModel_TextureMap_t_1237 *u_1237;
    };

#ifdef __cplusplus
    static struct render_model_texture_map *from_w( const w_RenderModel_TextureMap_t_090* w_map ) { return CONTAINING_RECORD( w_map, struct render_model_texture_map, w_090 ); }
    static struct render_model_texture_map *from_w( const w_RenderModel_TextureMap_t_1237* w_map ) { return CONTAINING_RECORD( w_map, struct render_model_texture_map, w_1237 ); }
    u_RenderModel_TextureMap_t_090*& u_map( w_RenderModel_TextureMap_t_090 const& ) { return this->u_090; }
    u_RenderModel_TextureMap_t_1237*& u_map( w_RenderModel_TextureMap_t_1237 const& ) { return this->u_1237; }
    w_RenderModel_TextureMap_t_090& w_map( w_RenderModel_TextureMap_t_090 const& ) { return this->w_090; }
    w_RenderModel_TextureMap_t_1237& w_map( w_RenderModel_TextureMap_t_1237 const& ) { return this->w_1237; }
#if defined(__x86_64__) || defined(__aarch64__)
    static struct render_model_texture_map *from_w( const w32_RenderModel_TextureMap_t_090* w_map ) { return CONTAINING_RECORD( w_map, struct render_model_texture_map, w32_090 ); }
    static struct render_model_texture_map *from_w( const w32_RenderModel_TextureMap_t_1237* w_map ) { return CONTAINING_RECORD( w_map, struct render_model_texture_map, w32_1237 ); }
    u_RenderModel_TextureMap_t_090*& u_map( w32_RenderModel_TextureMap_t_090 const& ) { return this->u_090; }
    u_RenderModel_TextureMap_t_1237*& u_map( w32_RenderModel_TextureMap_t_1237 const& ) { return this->u_1237; }
    w32_RenderModel_TextureMap_t_090& w_map( w32_RenderModel_TextureMap_t_090 const& ) { return this->w32_090; }
    w32_RenderModel_TextureMap_t_1237& w_map( w32_RenderModel_TextureMap_t_1237 const& ) { return this->w32_1237; }
#endif /* defined(__x86_64__) || defined(__aarch64__) */
#endif /* __cplusplus */
};

struct vrclient_init_params
{
    int8_t _ret;
    HMODULE winevulkan;
    char *runtime_unix_path;
};

struct wow64_vrclient_init_params
{
    int8_t _ret;
    W32_PTR(HMODULE winevulkan, winevulkan, HMODULE);
    W32_PTR(char *runtime_unix_path, runtime_unix_path, char *);
};

struct vrclient_init_registry_params
{
    int8_t _ret;
    HKEY vr_key;
};

struct wow64_vrclient_init_registry_params
{
    int8_t _ret;
    W32_PTR(HKEY vr_key, vr_key, HKEY);
};

struct vrclient_HmdSystemFactory_params
{
    struct u_iface _ret;
    const char *name;
    int *return_code;
};

struct wow64_vrclient_HmdSystemFactory_params
{
    struct u_iface _ret;
    W32_PTR(const char *name, name, const char *);
    W32_PTR(int *return_code, return_code, int *);
};

struct vrclient_VRClientCoreFactory_params
{
    struct u_iface _ret;
    const char *name;
    int *return_code;
};

struct wow64_vrclient_VRClientCoreFactory_params
{
    struct u_iface _ret;
    W32_PTR(const char *name, name, const char *);
    W32_PTR(int *return_code, return_code, int *);
};

struct vrclient_get_unix_buffer_params
{
    struct u_buffer buf;
    void *ptr; /* client-side ptr */
};

struct wow64_vrclient_get_unix_buffer_params
{
    struct u_buffer buf;
    W32_PTR(void *ptr, ptr, void *); /* client-side ptr */
};

#include <poppack.h>

#define VRCLIENT_CALL( code, args )                                        \
    ({                                                                     \
        NTSTATUS status = WINE_UNIX_CALL( unix_ ## code, args );           \
        if (status) WARN( #code " failed, status %#x\n", (UINT)status );   \
        assert( !status );                                                 \
        status;                                                            \
    })

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#include "unixlib_generated.h"

#endif /* __VRCLIENT_UNIXLIB_H */
