#pragma once

#ifdef MB_PLATFORM_WINDOWS
    #ifdef MB_BUILD_DLL
        #define MALB_API __declspec(dllexport)
    #else
        #define MALB_API __declspec(dllimport)
    #endif
#else 
#error Malb only supports Windows!
#endif

