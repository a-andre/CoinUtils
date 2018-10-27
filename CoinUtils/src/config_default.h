
/* include the COIN-OR-wide system specific configure header */
#include "configall_system.h"

/* this needs to come before the include of config_coinutils_default.h */
#ifndef COINUTILS_EXPORT
#ifdef _WIN32
/* assuming we build a CoinUtils DLL */
#define COINUTILS_EXPORT __declspec(dllexport)
#else
#define COINUTILS_EXPORT
#endif
#endif

/* include the public project specific macros */
#include "config_coinutils_default.h"

/***************************************************************************/
/*             HERE DEFINE THE PROJECT SPECIFIC MACROS                     */
/*    These are only in effect in a setting that doesn't use configure     */
/***************************************************************************/

/* Define to the debug sanity check level (0 is no test) */
#define COIN_COINUTILS_CHECKLEVEL 0

/* Define to the debug verbosity level (0 is no output) */
#define COIN_COINUTILS_VERBOSITY 0

/* Define to 1 if bzlib is available */
/* #define COIN_HAS_BZLIB */

/* Define to 1 if zlib is available */
/* #define COIN_HAS_ZLIB */

#ifdef _MSC_VER
/* Define to be the name of C-function for Inf check */
#define COIN_C_FINITE _finite

/* Define to be the name of C-function for NaN check */
#define COIN_C_ISNAN _isnan
#endif
