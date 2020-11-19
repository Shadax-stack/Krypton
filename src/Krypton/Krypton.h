#ifndef KRYPTON_H
#define KRYPTON_H

#ifdef KRYPTON_SHARED
#ifdef _WIN32
#define KRYPTON_WIN32
#ifdef _MSC_VER 
#define KRYPTON_EXPORT _declspec(dllexport)
#define KRYPTON_IMPORT _declspec(dllimport)
#endif
#ifdef __GNUC__
#define KRYPTON_EXPORT _declspec(dllexport)
#define KRYPTON_IMPORT _declspec(dllimport)
#endif
#else
#define KRYPTON_EXPORT __attribute__((visibility(default))
#define KRYPTON_IMPORT
#endif
#else
#define KRYPTON_EXPORT
#define KRYPTON_IMPORT
#endif

#ifdef KRYPTON_BUILD
#define KRYPTON_API KRYPTON_EXPORT
#else
#define KRYPTON_API KRYPTON_IMPORT
#endif

namespace Krypton {



}

#endif