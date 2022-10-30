
#include <stdio.h>

#define DEBUG_ENABLE

#define DEBUG_LOWEST 1u
#define DEBUG_LOW 2u
#define DEBUG_MEDIUM 3u
#define DEBUG_HIGH 4u
#define DEBUG_HIGHEST 5u
#define DEBUG_KERNEL 6u
#define DEBUG_NONE 7u

#if defined(DEBUG_ENABLE)
#define DBG printf
#else
#define DBG
#endif
