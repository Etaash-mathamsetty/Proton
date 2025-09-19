/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS IVROverlay_IVROverlay_006_FindOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_FindOverlay_params *params = (struct IVROverlay_IVROverlay_006_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_FindOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_FindOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_CreateOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_CreateOverlay_params *params = (struct IVROverlay_IVROverlay_006_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_CreateOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_CreateOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_DestroyOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_DestroyOverlay_params *params = (struct IVROverlay_IVROverlay_006_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_DestroyOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_DestroyOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_SetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_006_SetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetHighQualityOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetHighQualityOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_GetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_006_GetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetHighQualityOverlay(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetHighQualityOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetHighQualityOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetHighQualityOverlay(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayKey( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayKey_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayKey( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayKey_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayKey_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayName( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayName_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayName( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayName_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayName_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayImageData( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayImageData_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayImageData( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayImageData_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayImageData_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayErrorNameFromEnum( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayErrorNameFromEnum_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayErrorNameFromEnum( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayErrorNameFromEnum_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayFlag( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayFlag_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayFlag( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayFlag_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayColor_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayColor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayColor_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayColor( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayColor_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayColor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayColor_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayColor_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayAlpha( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayAlpha_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayAlpha( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayAlpha_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayGamma( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayGamma_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayGamma_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayGamma( params->ulOverlayHandle, params->fGamma );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayGamma( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayGamma_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayGamma_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayGamma( params->ulOverlayHandle, params->fGamma );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayGamma( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayGamma_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayGamma_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayGamma( params->ulOverlayHandle, params->pfGamma );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayGamma( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayGamma_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayGamma_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayGamma( params->ulOverlayHandle, params->pfGamma );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayWidthInMeters( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayWidthInMeters_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayWidthInMeters( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayWidthInMeters_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayAutoCurveDistanceRangeInMeters( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayAutoCurveDistanceRangeInMeters_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayAutoCurveDistanceRangeInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayTextureBounds( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayTextureBounds_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayTextureBounds( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayTextureBounds_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayTransformType( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayTransformType_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayTransformType( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayTransformType_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayTransformAbsolute( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayTransformAbsolute_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayTransformAbsolute( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayTransformAbsolute_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayTransformTrackedDeviceRelative_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayTransformTrackedDeviceRelative_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_ShowOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_ShowOverlay_params *params = (struct IVROverlay_IVROverlay_006_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_ShowOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_ShowOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_HideOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_HideOverlay_params *params = (struct IVROverlay_IVROverlay_006_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_HideOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_HideOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_IsOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_006_IsOverlayVisible_params *params = (struct IVROverlay_IVROverlay_006_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_IsOverlayVisible( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_IsOverlayVisible_params *params = (struct wow64_IVROverlay_IVROverlay_006_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_PollNextOverlayEvent( void *args )
{
    struct IVROverlay_IVROverlay_006_PollNextOverlayEvent_params *params = (struct IVROverlay_IVROverlay_006_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    u_VREvent_t_0911 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_PollNextOverlayEvent( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_PollNextOverlayEvent_params *params = (struct wow64_IVROverlay_IVROverlay_006_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    u_VREvent_t_0911 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayInputMethod( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayInputMethod_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayInputMethod( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayInputMethod_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_006_GetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_006_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetOverlayMouseScale( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetOverlayMouseScale_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayMouseScale( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayMouseScale_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_ComputeOverlayIntersection( void *args )
{
    struct IVROverlay_IVROverlay_006_ComputeOverlayIntersection_params *params = (struct IVROverlay_IVROverlay_006_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_ComputeOverlayIntersection( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_ComputeOverlayIntersection_params *params = (struct wow64_IVROverlay_IVROverlay_006_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_HandleControllerOverlayInteractionAsMouse( void *args )
{
    struct IVROverlay_IVROverlay_006_HandleControllerOverlayInteractionAsMouse_params *params = (struct IVROverlay_IVROverlay_006_HandleControllerOverlayInteractionAsMouse_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_HandleControllerOverlayInteractionAsMouse( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_HandleControllerOverlayInteractionAsMouse_params *params = (struct wow64_IVROverlay_IVROverlay_006_HandleControllerOverlayInteractionAsMouse_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_IsHoverTargetOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_IsHoverTargetOverlay_params *params = (struct IVROverlay_IVROverlay_006_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_IsHoverTargetOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_IsHoverTargetOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_IsHoverTargetOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetGamepadFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_GetGamepadFocusOverlay_params *params = (struct IVROverlay_IVROverlay_006_GetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetGamepadFocusOverlay(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetGamepadFocusOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetGamepadFocusOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetGamepadFocusOverlay(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetGamepadFocusOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_SetGamepadFocusOverlay_params *params = (struct IVROverlay_IVROverlay_006_SetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetGamepadFocusOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetGamepadFocusOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetGamepadFocusOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayNeighbor( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayNeighbor_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayNeighbor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayNeighbor_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_MoveGamepadFocusToNeighbor( void *args )
{
    struct IVROverlay_IVROverlay_006_MoveGamepadFocusToNeighbor_params *params = (struct IVROverlay_IVROverlay_006_MoveGamepadFocusToNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_MoveGamepadFocusToNeighbor( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_MoveGamepadFocusToNeighbor_params *params = (struct wow64_IVROverlay_IVROverlay_006_MoveGamepadFocusToNeighbor_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_ClearOverlayTexture( void *args )
{
    struct IVROverlay_IVROverlay_006_ClearOverlayTexture_params *params = (struct IVROverlay_IVROverlay_006_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_ClearOverlayTexture( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_ClearOverlayTexture_params *params = (struct wow64_IVROverlay_IVROverlay_006_ClearOverlayTexture_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayRaw( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayRaw_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayRaw( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayRaw_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetOverlayFromFile( void *args )
{
    struct IVROverlay_IVROverlay_006_SetOverlayFromFile_params *params = (struct IVROverlay_IVROverlay_006_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetOverlayFromFile( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetOverlayFromFile_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_CreateDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_CreateDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_006_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_CreateDashboardOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_CreateDashboardOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_CreateDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_IsDashboardVisible( void *args )
{
    struct IVROverlay_IVROverlay_006_IsDashboardVisible_params *params = (struct IVROverlay_IVROverlay_006_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->IsDashboardVisible(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_IsDashboardVisible( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_IsDashboardVisible_params *params = (struct wow64_IVROverlay_IVROverlay_006_IsDashboardVisible_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->IsDashboardVisible(  );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_IsActiveDashboardOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_IsActiveDashboardOverlay_params *params = (struct IVROverlay_IVROverlay_006_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_IsActiveDashboardOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_IsActiveDashboardOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_IsActiveDashboardOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_SetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_006_SetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_006_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_SetDashboardOverlaySceneProcess( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_SetDashboardOverlaySceneProcess_params *params = (struct wow64_IVROverlay_IVROverlay_006_SetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetDashboardOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_006_GetDashboardOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_006_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetDashboardOverlaySceneProcess( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetDashboardOverlaySceneProcess_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetDashboardOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_ShowDashboard( void *args )
{
    struct IVROverlay_IVROverlay_006_ShowDashboard_params *params = (struct IVROverlay_IVROverlay_006_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_ShowDashboard( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_ShowDashboard_params *params = (struct wow64_IVROverlay_IVROverlay_006_ShowDashboard_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    iface->ShowDashboard( params->pchOverlayToShow );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_ShowKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_006_ShowKeyboard_params *params = (struct IVROverlay_IVROverlay_006_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_ShowKeyboard( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_ShowKeyboard_params *params = (struct wow64_IVROverlay_IVROverlay_006_ShowKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_ShowKeyboardForOverlay( void *args )
{
    struct IVROverlay_IVROverlay_006_ShowKeyboardForOverlay_params *params = (struct IVROverlay_IVROverlay_006_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_ShowKeyboardForOverlay( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_ShowKeyboardForOverlay_params *params = (struct wow64_IVROverlay_IVROverlay_006_ShowKeyboardForOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_GetKeyboardText( void *args )
{
    struct IVROverlay_IVROverlay_006_GetKeyboardText_params *params = (struct IVROverlay_IVROverlay_006_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_GetKeyboardText( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_GetKeyboardText_params *params = (struct wow64_IVROverlay_IVROverlay_006_GetKeyboardText_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
    return 0;
}
#endif

NTSTATUS IVROverlay_IVROverlay_006_HideKeyboard( void *args )
{
    struct IVROverlay_IVROverlay_006_HideKeyboard_params *params = (struct IVROverlay_IVROverlay_006_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    iface->HideKeyboard(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_IVROverlay_IVROverlay_006_HideKeyboard( void *args )
{
    struct wow64_IVROverlay_IVROverlay_006_HideKeyboard_params *params = (struct wow64_IVROverlay_IVROverlay_006_HideKeyboard_params *)args;
    struct u_IVROverlay_IVROverlay_006 *iface = (struct u_IVROverlay_IVROverlay_006 *)params->u_iface;
    iface->HideKeyboard(  );
    return 0;
}
#endif

