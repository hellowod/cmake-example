#ifndef LIB_TST_
#define LIB_TST_

#if defined _WIN32
    #if LIBTST_BUILD
        #define LIBTST_API __declspec(dllexport)
    #else
        #define LIBTST_API __declspec(dllimport)
    #endif
#else
    #define LIBTST_API
#endif

LIBTST_API void say(const char* name);

#endif //LIB_TST_