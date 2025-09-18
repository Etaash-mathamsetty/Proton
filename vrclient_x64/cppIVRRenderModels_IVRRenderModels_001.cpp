/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVRRenderModels_IVRRenderModels_001_LoadRenderModel( void *args )
{
    struct IVRRenderModels_IVRRenderModels_001_LoadRenderModel_params *params = (struct IVRRenderModels_IVRRenderModels_001_LoadRenderModel_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    u_RenderModel_t_090 u_pRenderModel;
    if (params->pRenderModel) u_pRenderModel = *params->pRenderModel;
    params->_ret = iface->LoadRenderModel( params->pchRenderModelName, params->pRenderModel ? &u_pRenderModel : nullptr );
    if (params->pRenderModel) *params->pRenderModel = u_pRenderModel;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRRenderModels_IVRRenderModels_001_LoadRenderModel( void *args )
{
    struct wow64_IVRRenderModels_IVRRenderModels_001_LoadRenderModel_params *params = (struct wow64_IVRRenderModels_IVRRenderModels_001_LoadRenderModel_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    u_RenderModel_t_090 u_pRenderModel;
    if (params->pRenderModel) u_pRenderModel = *params->pRenderModel;
    params->_ret = iface->LoadRenderModel( params->pchRenderModelName, params->pRenderModel ? &u_pRenderModel : nullptr );
    if (params->pRenderModel) *params->pRenderModel = u_pRenderModel;
    return 0;
}
#endif

NTSTATUS IVRRenderModels_IVRRenderModels_001_FreeRenderModel( void *args )
{
    struct IVRRenderModels_IVRRenderModels_001_FreeRenderModel_params *params = (struct IVRRenderModels_IVRRenderModels_001_FreeRenderModel_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    u_RenderModel_t_090 u_pRenderModel;
    if (params->pRenderModel) u_pRenderModel = *params->pRenderModel;
    iface->FreeRenderModel( params->pRenderModel ? &u_pRenderModel : nullptr );
    if (params->pRenderModel) *params->pRenderModel = u_pRenderModel;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRRenderModels_IVRRenderModels_001_FreeRenderModel( void *args )
{
    struct wow64_IVRRenderModels_IVRRenderModels_001_FreeRenderModel_params *params = (struct wow64_IVRRenderModels_IVRRenderModels_001_FreeRenderModel_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    u_RenderModel_t_090 u_pRenderModel;
    if (params->pRenderModel) u_pRenderModel = *params->pRenderModel;
    iface->FreeRenderModel( params->pRenderModel ? &u_pRenderModel : nullptr );
    if (params->pRenderModel) *params->pRenderModel = u_pRenderModel;
    return 0;
}
#endif

NTSTATUS IVRRenderModels_IVRRenderModels_001_GetRenderModelName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_001_GetRenderModelName_params *params = (struct IVRRenderModels_IVRRenderModels_001_GetRenderModelName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRRenderModels_IVRRenderModels_001_GetRenderModelName( void *args )
{
    struct wow64_IVRRenderModels_IVRRenderModels_001_GetRenderModelName_params *params = (struct wow64_IVRRenderModels_IVRRenderModels_001_GetRenderModelName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetRenderModelName( params->unRenderModelIndex, params->pchRenderModelName, params->unRenderModelNameLen );
    return 0;
}
#endif

NTSTATUS IVRRenderModels_IVRRenderModels_001_GetRenderModelCount( void *args )
{
    struct IVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params *params = (struct IVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetRenderModelCount(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRRenderModels_IVRRenderModels_001_GetRenderModelCount( void *args )
{
    struct wow64_IVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params *params = (struct wow64_IVRRenderModels_IVRRenderModels_001_GetRenderModelCount_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetRenderModelCount(  );
    return 0;
}
#endif

NTSTATUS IVRRenderModels_IVRRenderModels_001_GetComponentCount( void *args )
{
    struct IVRRenderModels_IVRRenderModels_001_GetComponentCount_params *params = (struct IVRRenderModels_IVRRenderModels_001_GetComponentCount_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetComponentCount( params->pchRenderModelName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRRenderModels_IVRRenderModels_001_GetComponentCount( void *args )
{
    struct wow64_IVRRenderModels_IVRRenderModels_001_GetComponentCount_params *params = (struct wow64_IVRRenderModels_IVRRenderModels_001_GetComponentCount_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetComponentCount( params->pchRenderModelName );
    return 0;
}
#endif

NTSTATUS IVRRenderModels_IVRRenderModels_001_GetComponentName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_001_GetComponentName_params *params = (struct IVRRenderModels_IVRRenderModels_001_GetComponentName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRRenderModels_IVRRenderModels_001_GetComponentName( void *args )
{
    struct wow64_IVRRenderModels_IVRRenderModels_001_GetComponentName_params *params = (struct wow64_IVRRenderModels_IVRRenderModels_001_GetComponentName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetComponentName( params->pchRenderModelName, params->unComponentIndex, params->pchComponentName, params->unComponentNameLen );
    return 0;
}
#endif

NTSTATUS IVRRenderModels_IVRRenderModels_001_GetComponentButtonMask( void *args )
{
    struct IVRRenderModels_IVRRenderModels_001_GetComponentButtonMask_params *params = (struct IVRRenderModels_IVRRenderModels_001_GetComponentButtonMask_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRRenderModels_IVRRenderModels_001_GetComponentButtonMask( void *args )
{
    struct wow64_IVRRenderModels_IVRRenderModels_001_GetComponentButtonMask_params *params = (struct wow64_IVRRenderModels_IVRRenderModels_001_GetComponentButtonMask_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetComponentButtonMask( params->pchRenderModelName, params->pchComponentName );
    return 0;
}
#endif

NTSTATUS IVRRenderModels_IVRRenderModels_001_GetComponentRenderModelName( void *args )
{
    struct IVRRenderModels_IVRRenderModels_001_GetComponentRenderModelName_params *params = (struct IVRRenderModels_IVRRenderModels_001_GetComponentRenderModelName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRRenderModels_IVRRenderModels_001_GetComponentRenderModelName( void *args )
{
    struct wow64_IVRRenderModels_IVRRenderModels_001_GetComponentRenderModelName_params *params = (struct wow64_IVRRenderModels_IVRRenderModels_001_GetComponentRenderModelName_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    params->_ret = iface->GetComponentRenderModelName( params->pchRenderModelName, params->pchComponentName, params->pchComponentRenderModelName, params->unComponentRenderModelNameLen );
    return 0;
}
#endif

NTSTATUS IVRRenderModels_IVRRenderModels_001_GetComponentState( void *args )
{
    struct IVRRenderModels_IVRRenderModels_001_GetComponentState_params *params = (struct IVRRenderModels_IVRRenderModels_001_GetComponentState_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    u_VRControllerState001_t u_controllerState = params->controllerState;
    params->_ret = iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, u_controllerState, params->pComponentState );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVRRenderModels_IVRRenderModels_001_GetComponentState( void *args )
{
    struct wow64_IVRRenderModels_IVRRenderModels_001_GetComponentState_params *params = (struct wow64_IVRRenderModels_IVRRenderModels_001_GetComponentState_params *)args;
    struct u_IVRRenderModels_IVRRenderModels_001 *iface = (struct u_IVRRenderModels_IVRRenderModels_001 *)params->u_iface;
    u_VRControllerState001_t u_controllerState = params->controllerState;
    params->_ret = iface->GetComponentState( params->pchRenderModelName, params->pchComponentName, u_controllerState, params->pComponentState );
    return 0;
}
#endif

