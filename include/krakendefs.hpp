/////////////////////////////////////////////////////////////////////////////////////
//
// Created by Ricardo Romero on 10/09/26.
// Copyright (c) 2026 Ricardo Romero.  All rights reserved.
//

#pragma once

#ifndef __cplusplus
#error "C++ compiler needed"
#endif /*__cplusplus*/

#ifndef KRAKENAPIWRAPPER_KRAKENLIB_HPP
#define KRAKENAPIWRAPPER_KRAKENLIB_HPP

#ifdef USE_EXPORT_LIBRARY
#if defined(_WIN32)
#define KRAKEN_LIBRARY_HIDDEN
#if defined(M_MSVC)
#define KRAKEN_LIBRARY __declspec(dllexport)
#else
#define KRAKEN_LIBRARY __attribute__((dllexport))
#endif
#else
#define KRAKEN_LIBRARY        __attribute__((visibility("default")))
#define KRAKEN_LIBRARY_HIDDEN __attribute__((visibility("hidden")))
#endif
#else
#if defined(_WIN32)
#if defined(M_MSVC)
#define KRAKEN_LIBRARY __declspec(dllimport)
#else
#define KRAKEN_LIBRARY __attribute__((dllimport))
#endif
#else
#define KRAKEN_LIBRARY
#endif
#define KRAKEN_LIBRARY_HIDDEN
#endif /*USE_EXPORT_LIBRARY*/

namespace kraken
{

}


#endif // KRAKENAPIWRAPPER_KRAKENLIB_HPP
