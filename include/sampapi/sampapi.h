#pragma once

#define SAMPAPI_EXPORT
#define SAMPAPI_NAMESPACE sampapi
#define SAMPAPI_PACK_PUSH __pragma(pack(push, 1))
#define SAMPAPI_PACK_POP  __pragma(pack(pop))

#define SAMPAPI_NAMESPACE_BEGIN(ns) \
    namespace SAMPAPI_NAMESPACE { namespace ns {
#define SAMPAPI_NAMESPACE_BEGIN_PACKED(ns) \
    SAMPAPI_PACK_PUSH \
    SAMPAPI_NAMESPACE_BEGIN(ns)
#define SAMPAPI_END } }
#define SAMPAPI_END_PACKED } } SAMPAPI_PACK_POP

#define SAMPAPI_BEGIN_COMMON namespace SAMPAPI_NAMESPACE {
#define SAMPAPI_END_COMMON   }

#define SAMPAPI_BEGIN_V037R3  SAMPAPI_NAMESPACE_BEGIN(v037r3)
#define SAMPAPI_BEGIN_PACKED_V037R3 SAMPAPI_NAMESPACE_BEGIN_PACKED(v037r3)

struct ID3DXFont;
struct ID3DXSprite;
struct ID3DXRenderToSurface;
struct ID3DXLine;

struct IDirect3DSurface9;
struct IDirect3DTexture9;
struct IDirect3DDevice9;
struct IDirect3DStateBlock9;

SAMPAPI_BEGIN_COMMON

typedef unsigned long D3DCOLOR;
typedef unsigned long TICK;
typedef int           BOOL;

typedef int            GTAREF;
typedef unsigned short ID;
typedef unsigned char  NUMBER;
typedef void(__cdecl* CMDPROC)(const char*);

unsigned long SAMPAPI_EXPORT GetBase();
unsigned int  SAMPAPI_EXPORT GetAPIVersion();

inline unsigned long GetAddress(signed long offset) {
    return GetBase() + offset;
}

SAMPAPI_END_COMMON
