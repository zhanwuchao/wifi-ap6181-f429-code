/* config.h.  Generated by hand for WICED. */
#ifndef CONFIG_H
#define CONFIG_H

/* ===================================================================
 * config.h
 *
 * config.h is derived from config.h.in -- do not edit config.h
 *
 * This contains variables that the configure script checks and
 * then defines or undefines. The source code checks for these
 * variables to know if certain features are present.
 * =================================================================== */

/* Define if threads exist (using pthreads or Win32 threads) */
/* #undef HAVE_THREAD */
/* #undef HAVE_POSIX_THREAD */
/* #undef HAVE_WIN32_THREAD */
/* #undef _REENTRANT */

/* Define if on OSF1 and need special extern "C" around some header files */
/* #undef SPECIAL_OSF1_EXTERN */

/* Define if the strings.h header file exists */
#define HAVE_STRINGS_H

/* Define the intXX_t, u_intXX_t, size_t, ssize_t, and socklen_t types */
/* On the Cray J90 there is no 4 byte integer, so we define int32_t
 * but it is 8 bytes, and we leave HAVE_INT32_T undefined. */
#define SIZEOF_INT 4
#define HAVE_U_INT16_T 1
#define HAVE_INT32_T   1
#define HAVE_INT64_T   1
#define HAVE_U_INT32_T 1

#define int32_t     int32_t
#define u_int16_t   uint16_t
#define u_int32_t   uint32_t
/* #undef size_t */
/* #undef ssize_t */

#define Socklen_t socklen_t

/* Define if you have these functions. */
#define HAVE_SNPRINTF 1
/* #undef HAVE_INET_PTON */
/* #undef HAVE_INET_NTOP */
/* #undef HAVE_GETTIMEOFDAY */
/* #undef HAVE_PTHREAD_CANCEL */
/* #undef HAVE_USLEEP */
/* #undef HAVE_QUAD_SUPPORT */
/* #undef HAVE_PRINTF_QD */

/* standard C++, which isn't always... */
/* #undef bool */
#if !defined(RTOS_NuttX)
#define true   1
#define false  0
#endif

/* Define if the host is Big Endian (network byte order) */
/* #undef WORDS_BIGENDIAN */

/* Define if multicast support exists */
/* #undef HAVE_MULTICAST */
#if !defined(NETWORK_NuttX_NS)
#define HAVE_MULTICAST
#endif

/* Define if all IPv6 headers/structures are present */
/* #undef HAVE_IPV6 */

/* Define if IPv6 multicast support exists */
/* #undef HAVE_IPV6_MULTICAST */

/* Define if Debugging of sockets is desired */
/* #undef DBG_MJZ */

#ifdef RTOS_EMBOS
#include "bcmtypes.h"
#endif

#ifdef NETWORK_NuttX_NS
#define HAVE_INET_NTOP 1
#define Socklen_t socklen_t
#endif

#ifdef NETWORK_LwIP
#define HAVE_INET_NTOP 1
#define HAVE_INET_PTON 1
#endif

#if defined(RTOS_NuttX)
typedef unsigned char u_char;
#endif

#endif /* CONFIG_H */