#if 0
#pragma makedep unix
#endif

#include "unix_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

template< typename Wmsg >
static void steam_networking_message_utow( Wmsg &dst, const u_SteamNetworkingMessage_t_144 &src )
{
    dst.m_cbSize = src.m_cbSize;
    dst.m_conn = src.m_conn;
    dst.m_sender = src.m_sender;
    dst.m_nConnUserData = src.m_nConnUserData;
    dst.m_usecTimeReceived = src.m_usecTimeReceived;
    dst.m_nMessageNumber = src.m_nMessageNumber;
    dst.m_nChannel = src.m_nChannel;
}

template< typename Wmsg >
static void steam_networking_message_utow( Wmsg &dst, const u_SteamNetworkingMessage_t_147 &src )
{
    dst.m_cbSize = src.m_cbSize;
    dst.m_conn = src.m_conn;
    dst.m_identityPeer = src.m_identityPeer;
    dst.m_nConnUserData = src.m_nConnUserData;
    dst.m_usecTimeReceived = src.m_usecTimeReceived;
    dst.m_nMessageNumber = src.m_nMessageNumber;
    dst.m_nChannel = src.m_nChannel;
    dst.m_nFlags = src.m_nFlags;
    dst.m_nUserData = src.m_nUserData;
}

template< typename Wmsg >
static void steam_networking_message_utow( Wmsg &dst, const u_SteamNetworkingMessage_t_153a &src )
{
    dst.m_cbSize = src.m_cbSize;
    dst.m_conn = src.m_conn;
    dst.m_identityPeer = src.m_identityPeer;
    dst.m_nConnUserData = src.m_nConnUserData;
    dst.m_usecTimeReceived = src.m_usecTimeReceived;
    dst.m_nMessageNumber = src.m_nMessageNumber;
    dst.m_nChannel = src.m_nChannel;
    dst.m_nFlags = src.m_nFlags;
    dst.m_nUserData = src.m_nUserData;
    dst.m_idxLane = src.m_idxLane;
}

static void U_CDECL u_SteamNetworkingMessage_t_147_FreeData( u_SteamNetworkingMessage_t_147 *msg )
{
    free( msg->m_pData );
    msg->m_pData = NULL;
}

template< typename Wmsg >
static void steam_networking_message_wtou( u_SteamNetworkingMessage_t_147& dst, const Wmsg& src )
{
    if (!dst.m_pData)
    {
        dst.m_pData = malloc( src.m_cbSize );
        dst.m_pfnFreeData = u_SteamNetworkingMessage_t_147_FreeData;
    }

    memcpy( dst.m_pData, src.m_pData, src.m_cbSize );
    dst.m_cbSize = src.m_cbSize;
    dst.m_conn = src.m_conn;
    dst.m_identityPeer = src.m_identityPeer;
    dst.m_nConnUserData = src.m_nConnUserData;
    dst.m_usecTimeReceived = src.m_usecTimeReceived;
    dst.m_nMessageNumber = src.m_nMessageNumber;
    dst.m_nChannel = src.m_nChannel;
    dst.m_nFlags = src.m_nFlags;
    dst.m_nUserData = src.m_nUserData;
}

static void U_CDECL u_SteamNetworkingMessage_t_153a_FreeData( u_SteamNetworkingMessage_t_153a *msg )
{
    free( msg->m_pData );
    msg->m_pData = NULL;
}

template< typename Wmsg >
static void steam_networking_message_wtou( u_SteamNetworkingMessage_t_153a& dst, const Wmsg& src )
{
    if (!dst.m_pData)
    {
        dst.m_pData = malloc( src.m_cbSize );
        dst.m_pfnFreeData = u_SteamNetworkingMessage_t_153a_FreeData;
    }

    memcpy( dst.m_pData, src.m_pData, src.m_cbSize );
    dst.m_cbSize = src.m_cbSize;
    dst.m_conn = src.m_conn;
    dst.m_identityPeer = src.m_identityPeer;
    dst.m_nConnUserData = src.m_nConnUserData;
    dst.m_usecTimeReceived = src.m_usecTimeReceived;
    dst.m_nMessageNumber = src.m_nMessageNumber;
    dst.m_nChannel = src.m_nChannel;
    dst.m_nFlags = src.m_nFlags;
    dst.m_nUserData = src.m_nUserData;
    dst.m_idxLane = src.m_idxLane;
}

template< typename Umsg, typename Wmsg >
static void receive_messages_utow( uint32_t count, Umsg **u_msgs, Wmsg **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = networking_message::from_w( w_msgs[i] );
        auto *w_msg = &message->w_msg( **w_msgs );
        message->u_msg( **w_msgs ) = u_msgs[i];
        steam_networking_message_utow( *w_msg, *u_msgs[i] );
    }
}

template< typename Umsg, typename Wmsg >
static void receive_messages_utow( uint32_t count, Umsg **u_msgs, ptr32< Wmsg** > w_msgs )
{
    Wmsg **msgs = new Wmsg *[count];
    while (count--) msgs[count] = w_msgs[count];
    receive_messages_utow( count, u_msgs, msgs );
    delete[] msgs;
}

template< typename Umsg, typename Wmsg >
static void receive_messages_utow( uint32_t count, Umsg **u_msgs, ptr32< Wmsg* > *w_msg )
{
    receive_messages_utow( count, u_msgs, w_msg );
}

template< typename Wmsg, typename Umsg >
static void send_messages_wtou( uint32_t count, Wmsg *const *w_msgs, Umsg **u_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = networking_message::from_w( w_msgs[i] );
        auto *w_msg = &message->w_msg( **w_msgs );
        auto *u_msg = message->u_msg( **w_msgs );
        steam_networking_message_wtou( *u_msg, *w_msg );
        /* steamclient library takes ownership */
        message->u_msg( **w_msgs ) = NULL;
        u_msgs[i] = u_msg;
    }
}

template< typename Wmsg, typename Umsg >
static void send_messages_wtou( uint32_t count, ptr32< Wmsg *const* > w_msgs, Umsg **u_msgs )
{
    Wmsg **msgs = new Wmsg *[count];
    while (count--) msgs[count] = w_msgs[count];
    send_messages_wtou( count, msgs, u_msgs );
    delete[] msgs;
}

template< typename Wmsg, typename Umsg >
static void send_messages_wtou( uint32_t count, ptr32< Wmsg** > w_msgs, Umsg **u_msgs )
{
    Wmsg **msgs = new Wmsg *[count];
    while (count--) msgs[count] = w_msgs[count];
    send_messages_wtou( count, msgs, u_msgs );
    delete[] msgs;
}

template< typename Params >
static NTSTATUS steamclient_networking_messages_receive( Params *params, bool wow64 )
{
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        struct networking_message *message = networking_message::from_w( params->w_msgs[i] );
        auto *w_msg = &message->w_msg( **params->w_msgs );
        auto *u_msg = message->u_msg( **params->w_msgs );
        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg( **params->w_msgs ) = NULL;
    }

    return 0;
}

template< typename Params >
static NTSTATUS steamclient_networking_message_release( Params *params, bool wow64 )
{
    struct networking_message *message = networking_message::from_w( params->w_msg );
    auto *u_msg = message->u_msg( *params->w_msg );

    if (!message->u_msg( *params->w_msg )) return 0;
    u_msg->m_pfnRelease( u_msg );
    message->u_msg( *params->w_msg ) = NULL;
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets002 */

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_ReceiveMessagesOnConnection( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow( params->_ret, u_msgs, params->ppOutMessages );
    delete[] u_msgs;
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_ReceiveMessagesOnListenSocket( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow( params->_ret, u_msgs, params->ppOutMessages );
    delete[] u_msgs;
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_SendMessages( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMessages];
    send_messages_wtou( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
    delete[] u_msgs;
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_ReceiveMessagesOnPollGroup( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow( params->_ret, u_msgs, params->ppOutMessages );
    delete[] u_msgs;
    return 0;
}

struct u_ISteamNetworkingConnectionCustomSignaling *create_LinuxISteamNetworkingConnectionCustomSignaling( void *win )
{
    FIXME( "not implemented!\n" );
    return NULL;
}

struct u_ISteamNetworkingCustomSignalingRecvContext *create_LinuxISteamNetworkingCustomSignalingRecvContext( void *win )
{
    FIXME( "not implemented!\n" );
    return NULL;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_ConnectP2PCustomSignaling( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    u_ISteamNetworkingConnectionCustomSignaling *u_pSignaling = create_LinuxISteamNetworkingConnectionCustomSignaling( params->pSignaling );
    params->_ret = iface->ConnectP2PCustomSignaling( u_pSignaling, params->pPeerIdentity, params->nOptions, params->pOptions );
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_ReceivedP2PCustomSignal( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    u_ISteamNetworkingCustomSignalingRecvContext *u_pContext = create_LinuxISteamNetworkingCustomSignalingRecvContext( params->pContext );
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, u_pContext );
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingUtils_AllocateMessage( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg *u_msg = iface->AllocateMessage( params->cbAllocateBuffer );
    if (u_msg) receive_messages_utow( 1, &u_msg, &params->_ret );
    return 0;
}

static void (*W_CDECL w_SteamNetConnectionStatusChanged)( w_SteamNetConnectionStatusChangedCallback_t_151 * );
static void U_CDECL u_SteamNetConnectionStatusChanged( u_SteamNetConnectionStatusChangedCallback_t_151 *u_dat )
{
    w_SteamNetConnectionStatusChangedCallback_t_151 w_dat = *u_dat;
    if (w_SteamNetConnectionStatusChanged) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetConnectionStatusChanged, &w_dat, sizeof(w_dat) );
}

static void (*W_CDECL w_SteamNetAuthenticationStatusChanged)( SteamNetAuthenticationStatus_t * );
static void U_CDECL u_SteamNetAuthenticationStatusChanged( SteamNetAuthenticationStatus_t *dat )
{
    if (w_SteamNetAuthenticationStatusChanged) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetAuthenticationStatusChanged, dat, sizeof(*dat) );
}

static void (*W_CDECL w_SteamRelayNetworkStatusChanged)( SteamRelayNetworkStatus_t * );
static void U_CDECL u_SteamRelayNetworkStatusChanged( SteamRelayNetworkStatus_t *dat )
{
    if (w_SteamRelayNetworkStatusChanged) queue_cdecl_func_callback( (w_cdecl_func)w_SteamRelayNetworkStatusChanged, dat, sizeof(*dat) );
}

static void (*W_CDECL w_SteamNetworkingMessagesSessionRequest)( SteamNetworkingMessagesSessionRequest_t_151 * );
static void U_CDECL u_SteamNetworkingMessagesSessionRequest( SteamNetworkingMessagesSessionRequest_t_151 *dat )
{
    if (w_SteamNetworkingMessagesSessionRequest) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetworkingMessagesSessionRequest, dat, sizeof(*dat) );
}

static void (*W_CDECL w_SteamNetworkingMessagesSessionFailed)( SteamNetworkingMessagesSessionFailed_t_151 * );
static void U_CDECL u_SteamNetworkingMessagesSessionFailed( SteamNetworkingMessagesSessionFailed_t_151 *dat )
{
    if (w_SteamNetworkingMessagesSessionFailed) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetworkingMessagesSessionFailed, dat, sizeof(*dat) );
}

static void (*W_CDECL w_SteamNetworkingFakeIPResult)( SteamNetworkingFakeIPResult_t * );
static void U_CDECL u_SteamNetworkingFakeIPResult( SteamNetworkingFakeIPResult_t *dat )
{
    if (w_SteamNetworkingFakeIPResult) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetworkingFakeIPResult, dat, sizeof(*dat) );
}

template< typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingUtils_SetConfigValue( u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface, Params *params, bool wow64, Umsg const& )
{
    void *u_fn; /* api requires passing pointer-to-pointer */

    TRACE("eValue %d, pArg %p.\n", params->eValue, params->pArg);

    switch (params->eValue)
    {
#define CASE( y )                                                                                  \
    if (!params->pArg)                                                                             \
    {                                                                                              \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, NULL );         \
    }                                                                                              \
    else                                                                                           \
    {                                                                                              \
        if (*(void **)(const void *)params->pArg == NULL) u_fn = NULL;                             \
        else u_fn = (void *)&u_##y;                                                                \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, &u_fn );        \
        if (params->_ret) w_##y = *(decltype(w_##y) *)(const void *)params->pArg;                  \
    }                                                                                              \
    break;

    case 201 /*ConnectionStatusChanged*/: CASE( SteamNetConnectionStatusChanged )
    case 202 /*AuthStatusChanged*/: CASE( SteamNetAuthenticationStatusChanged )
    case 203 /*RelayNetworkStatusChanged*/: CASE( SteamRelayNetworkStatusChanged )
    case 204 /*MessagesSessionRequest*/: CASE( SteamNetworkingMessagesSessionRequest )
    case 205 /*MessagesSessionFailed*/: CASE( SteamNetworkingMessagesSessionFailed )
    case 207 /*FakeIPResult*/: CASE( SteamNetworkingFakeIPResult )

    case 206 /*CreateConnectionSignaling*/:
        FIXME( "CreateConnectionSignaling not handled.\n");
        /* fallthrough */

#undef CASE

    default:
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, params->pArg );
    }

    return 0;
}

static void (*W_CDECL w_SteamNetConnectionStatusChanged_153a)( w_SteamNetConnectionStatusChangedCallback_t_153a * );
static void U_CDECL u_SteamNetConnectionStatusChanged_153a( u_SteamNetConnectionStatusChangedCallback_t_153a *u_dat )
{
    w_SteamNetConnectionStatusChangedCallback_t_153a w_dat = *u_dat;
    if (w_SteamNetConnectionStatusChanged_153a) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetConnectionStatusChanged_153a, &w_dat, sizeof(w_dat) );
}

static void (*W_CDECL w_SteamNetworkingMessagesSessionFailed_153a)( SteamNetworkingMessagesSessionFailed_t_153a * );
static void U_CDECL u_SteamNetworkingMessagesSessionFailed_153a( SteamNetworkingMessagesSessionFailed_t_153a *dat )
{
    if (w_SteamNetworkingMessagesSessionFailed_153a) queue_cdecl_func_callback( (w_cdecl_func)w_SteamNetworkingMessagesSessionFailed_153a, dat, sizeof(*dat) );
}

template< typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingUtils_SetConfigValue( u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface, Params *params, bool wow64, Umsg const& )
{
    bool ret;
    void *u_fn; /* api requires passing pointer-to-pointer */

    TRACE("eValue %d, pArg %p.\n", params->eValue, params->pArg);

    switch (params->eValue)
    {

#define CASE( y )                                                                                  \
    if (!params->pArg)                                                                             \
    {                                                                                              \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, NULL );         \
    }                                                                                              \
    else                                                                                           \
    {                                                                                              \
        if (*(void **)(const void *)params->pArg == NULL) u_fn = NULL;                             \
        else u_fn = (void *)&u_##y;                                                                \
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,                  \
                                              params->scopeObj, params->eDataType, &u_fn );        \
        if (params->_ret) w_##y = *(decltype(w_##y) *)(const void *)params->pArg;                  \
    }                                                                                              \
    break;

    case 201 /*ConnectionStatusChanged*/: CASE( SteamNetConnectionStatusChanged_153a )
    case 202 /*AuthStatusChanged*/: CASE( SteamNetAuthenticationStatusChanged )
    case 203 /*RelayNetworkStatusChanged*/: CASE( SteamRelayNetworkStatusChanged )
    case 204 /*MessagesSessionRequest*/: CASE( SteamNetworkingMessagesSessionRequest )
    case 205 /*MessagesSessionFailed*/: CASE( SteamNetworkingMessagesSessionFailed_153a )
    case 207 /*FakeIPResult*/: CASE( SteamNetworkingFakeIPResult )

    case 206 /*CreateConnectionSignaling*/:
        FIXME( "CreateConnectionSignaling not handled.\n");
        /* fallthrough */

#undef CASE

    default:
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, params->pArg );
    }

    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingFakeUDPPort_ReceiveMessages( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMaxMessages];
    params->_ret = iface->ReceiveMessages( u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow( params->_ret, u_msgs, params->ppOutMessages );
    delete[] u_msgs;
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingMessages_ReceiveMessagesOnChannel( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnChannel( params->nLocalChannel, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow( params->_ret, u_msgs, params->ppOutMessages );
    delete[] u_msgs;
    return 0;
}

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets002, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_144() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets002, ReceiveMessagesOnListenSocket, u_SteamNetworkingMessage_t_144() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets004, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_144() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets004, ReceiveMessagesOnListenSocket, u_SteamNetworkingMessage_t_144() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets006, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets006, ReceiveMessagesOnListenSocket, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets006, SendMessages, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets006, ConnectP2PCustomSignaling, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets006, ReceivedP2PCustomSignal, u_SteamNetworkingMessage_t_147() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets008, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets008, ReceiveMessagesOnPollGroup, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets008, SendMessages, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets008, ConnectP2PCustomSignaling, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets008, ReceivedP2PCustomSignal, u_SteamNetworkingMessage_t_147() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets009, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets009, ReceiveMessagesOnPollGroup, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets009, SendMessages, u_SteamNetworkingMessage_t_147() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_153a() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, ReceiveMessagesOnPollGroup, u_SteamNetworkingMessage_t_153a() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, SendMessages, u_SteamNetworkingMessage_t_153a() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingUtils, SteamNetworkingUtils003, AllocateMessage, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingUtils, SteamNetworkingUtils003, SetConfigValue, u_SteamNetworkingMessage_t_147() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingUtils, SteamNetworkingUtils004, AllocateMessage, u_SteamNetworkingMessage_t_153a() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingUtils, SteamNetworkingUtils004, SetConfigValue, u_SteamNetworkingMessage_t_153a() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingFakeUDPPort, SteamNetworkingFakeUDPPort001, ReceiveMessages, u_SteamNetworkingMessage_t_153a() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingMessages, SteamNetworkingMessages002, ReceiveMessagesOnChannel, u_SteamNetworkingMessage_t_153a() );

#if defined(__x86_64__) || defined(__aarch64__)
#define STEAMCLIENT_UNIX_WOW64_FUNC( name, version, ... ) \
    NTSTATUS wow64_ ## name ## _ ## version( void *args ) { return name( (struct wow64_ ## name ## _ ## version ## _params *)args, true, ## __VA_ARGS__ ); }
#else
#define STEAMCLIENT_UNIX_WOW64_FUNC( name, version, ... )
#endif

#define STEAMCLIENT_UNIX_FUNC( name, version, ... ) \
    NTSTATUS name ## _ ## version( void *args ) { return name( (struct name ## _ ## version ## _params *)args, false, ## __VA_ARGS__ ); } \
    STEAMCLIENT_UNIX_WOW64_FUNC( name, version, ## __VA_ARGS__ )

STEAMCLIENT_UNIX_FUNC( steamclient_networking_messages_receive, 144 );
STEAMCLIENT_UNIX_FUNC( steamclient_networking_messages_receive, 147 );
STEAMCLIENT_UNIX_FUNC( steamclient_networking_messages_receive, 153a );
STEAMCLIENT_UNIX_FUNC( steamclient_networking_message_release, 147 );
STEAMCLIENT_UNIX_FUNC( steamclient_networking_message_release, 153a );
