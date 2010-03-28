/*   -*- buffer-read-only: t -*- vi: set ro:
 *  
 *  DO NOT EDIT THIS FILE   (tcpprep_opts.h)
 *  
 *  It has been AutoGen-ed  March 24, 2010 at 05:49:12 PM by AutoGen 5.9.9
 *  From the definitions    tcpprep_opts.def
 *  and the template file   options
 *
 * Generated from AutoOpts 32:2:7 templates.
 */

/*
 *  This file was produced by an AutoOpts template.  AutoOpts is a
 *  copyrighted work.  This header file is not encumbered by AutoOpts
 *  licensing, but is provided under the licensing terms chosen by the
 *  tcpprep author or copyright holder.  AutoOpts is licensed under
 *  the terms of the LGPL.  The redistributable library (``libopts'') is
 *  licensed under the terms of either the LGPL or, at the users discretion,
 *  the BSD license.  See the AutoOpts and/or libopts sources for details.
 *
 * This source file is copyrighted and licensed under the following terms:
 *
 * tcpprep copyright (c) 2000-2008 Aaron Turner - all rights reserved
 *
 * tcpprep is free software copyrighted by Aaron Turner.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name ``Aaron Turner'' nor the name of any other
 *    contributor may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 * 
 * tcpprep IS PROVIDED BY Aaron Turner ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL Aaron Turner OR ANY OTHER CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 *  This file contains the programmatic interface to the Automated
 *  Options generated for the tcpprep program.
 *  These macros are documented in the AutoGen info file in the
 *  "AutoOpts" chapter.  Please refer to that doc for usage help.
 */
#ifndef AUTOOPTS_TCPPREP_OPTS_H_GUARD
#define AUTOOPTS_TCPPREP_OPTS_H_GUARD 1
#include "config.h"
#include <autoopts/options.h>

/*
 *  Ensure that the library used for compiling this generated header is at
 *  least as new as the version current when the header template was released
 *  (not counting patch version increments).  Also ensure that the oldest
 *  tolerable version is at least as old as what was current when the header
 *  template was released.
 */
#define AO_TEMPLATE_VERSION 131074
#if (AO_TEMPLATE_VERSION < OPTIONS_MINIMUM_VERSION) \
 || (AO_TEMPLATE_VERSION > OPTIONS_STRUCT_VERSION)
# error option template version mismatches autoopts/options.h header
  Choke Me.
#endif

/*
 *  Enumeration of each option:
 */
typedef enum {
    INDEX_OPT_DBUG            =  0,
    INDEX_OPT_AUTO            =  1,
    INDEX_OPT_CIDR            =  2,
    INDEX_OPT_REGEX           =  3,
    INDEX_OPT_PORT            =  4,
    INDEX_OPT_MAC             =  5,
    INDEX_OPT_REVERSE         =  6,
    INDEX_OPT_COMMENT         =  7,
    INDEX_OPT_NO_ARG_COMMENT  =  8,
    INDEX_OPT_INCLUDE         =  9,
    INDEX_OPT_EXCLUDE         = 10,
    INDEX_OPT_CACHEFILE       = 11,
    INDEX_OPT_PCAP            = 12,
    INDEX_OPT_PRINT_COMMENT   = 13,
    INDEX_OPT_PRINT_INFO      = 14,
    INDEX_OPT_PRINT_STATS     = 15,
    INDEX_OPT_SERVICES        = 16,
    INDEX_OPT_NONIP           = 17,
    INDEX_OPT_RATIO           = 18,
    INDEX_OPT_MINMASK         = 19,
    INDEX_OPT_MAXMASK         = 20,
    INDEX_OPT_VERBOSE         = 21,
    INDEX_OPT_DECODE          = 22,
    INDEX_OPT_VERSION         = 23,
    INDEX_OPT_LESS_HELP       = 24,
    INDEX_OPT_HELP            = 25,
    INDEX_OPT_MORE_HELP       = 26,
    INDEX_OPT_SAVE_OPTS       = 27,
    INDEX_OPT_LOAD_OPTS       = 28
} teOptIndex;

#define OPTION_CT    29

/*
 *  Interface defines for all options.  Replace "n" with the UPPER_CASED
 *  option name (as in the teOptIndex enumeration above).
 *  e.g. HAVE_OPT( DBUG )
 */
#define         DESC(n) (tcpprepOptions.pOptDesc[INDEX_OPT_## n])
#define     HAVE_OPT(n) (! UNUSED_OPT(& DESC(n)))
#define      OPT_ARG(n) (DESC(n).optArg.argString)
#define    STATE_OPT(n) (DESC(n).fOptState & OPTST_SET_MASK)
#define    COUNT_OPT(n) (DESC(n).optOccCt)
#define    ISSEL_OPT(n) (SELECTED_OPT(&DESC(n)))
#define ISUNUSED_OPT(n) (UNUSED_OPT(& DESC(n)))
#define  ENABLED_OPT(n) (! DISABLED_OPT(& DESC(n)))
#define  STACKCT_OPT(n) (((tArgList*)(DESC(n).optCookie))->useCt)
#define STACKLST_OPT(n) (((tArgList*)(DESC(n).optCookie))->apzArgs)
#define    CLEAR_OPT(n) STMTS( \
                DESC(n).fOptState &= OPTST_PERSISTENT_MASK;   \
                if ( (DESC(n).fOptState & OPTST_INITENABLED) == 0) \
                    DESC(n).fOptState |= OPTST_DISABLED; \
                DESC(n).optCookie = NULL )

/* * * * * *
 *
 *  Interface defines for specific options.
 */
#ifdef DEBUG
#define VALUE_OPT_DBUG           'd'
#define OPT_VALUE_DBUG           (DESC(DBUG).optArg.argInt)
#endif /* DEBUG */
#define VALUE_OPT_AUTO           'a'
#define VALUE_OPT_CIDR           'c'
#define VALUE_OPT_REGEX          'r'
#define VALUE_OPT_PORT           'p'
#define VALUE_OPT_MAC            'e'
#define VALUE_OPT_REVERSE        6
#define VALUE_OPT_COMMENT        'C'
#define VALUE_OPT_NO_ARG_COMMENT 8
#define VALUE_OPT_INCLUDE        'x'
#define VALUE_OPT_EXCLUDE        'X'
#define VALUE_OPT_CACHEFILE      'o'
#define VALUE_OPT_PCAP           'i'
#define VALUE_OPT_PRINT_COMMENT  'P'
#define VALUE_OPT_PRINT_INFO     'I'
#define VALUE_OPT_PRINT_STATS    'S'
#define VALUE_OPT_SERVICES       's'
#define VALUE_OPT_NONIP          'N'
#define VALUE_OPT_RATIO          'R'
#define VALUE_OPT_MINMASK        'm'
#define OPT_VALUE_MINMASK        (DESC(MINMASK).optArg.argInt)
#define VALUE_OPT_MAXMASK        'M'
#define OPT_VALUE_MAXMASK        (DESC(MAXMASK).optArg.argInt)
#ifdef ENABLE_VERBOSE
#define VALUE_OPT_VERBOSE        'v'
#define SET_OPT_VERBOSE   STMTS( \
        DESC(VERBOSE).optActualIndex = 21; \
        DESC(VERBOSE).optActualValue = VALUE_OPT_VERBOSE; \
        DESC(VERBOSE).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(VERBOSE).fOptState |= OPTST_SET )
#endif /* ENABLE_VERBOSE */
#ifdef ENABLE_VERBOSE
#define VALUE_OPT_DECODE         'A'
#endif /* ENABLE_VERBOSE */
#define VALUE_OPT_VERSION        'V'
#define VALUE_OPT_LESS_HELP      'h'
#define VALUE_OPT_HELP          'H'
#define VALUE_OPT_MORE_HELP     '!'
#define VALUE_OPT_SAVE_OPTS     INDEX_OPT_SAVE_OPTS
#define VALUE_OPT_LOAD_OPTS     INDEX_OPT_LOAD_OPTS
#define SET_OPT_SAVE_OPTS(a)   STMTS( \
        DESC(SAVE_OPTS).fOptState &= OPTST_PERSISTENT_MASK; \
        DESC(SAVE_OPTS).fOptState |= OPTST_SET; \
        DESC(SAVE_OPTS).optArg.argString = (char const*)(a) )
/*
 *  Interface defines not associated with particular options
 */
#define ERRSKIP_OPTERR  STMTS( tcpprepOptions.fOptSet &= ~OPTPROC_ERRSTOP )
#define ERRSTOP_OPTERR  STMTS( tcpprepOptions.fOptSet |= OPTPROC_ERRSTOP )
#define RESTART_OPT(n)  STMTS( \
                tcpprepOptions.curOptIdx = (n); \
                tcpprepOptions.pzCurOpt  = NULL )
#define START_OPT       RESTART_OPT(1)
#define USAGE(c)        (*tcpprepOptions.pUsageProc)( &tcpprepOptions, c )
/* extracted from /usr/local/share/autogen/opthead.tpl near line 409 */

/* * * * * *
 *
 *  Declare the tcpprep option descriptor.
 */
#ifdef  __cplusplus
extern "C" {
#endif

extern tOptions   tcpprepOptions;

#if defined(ENABLE_NLS)
# ifndef _
#   include <stdio.h>
    static inline char* aoGetsText( char const* pz ) {
        if (pz == NULL) return NULL;
        return (char*)gettext( pz );
    }
#   define _(s)  aoGetsText(s)
# endif /* _() */

# define OPT_NO_XLAT_CFG_NAMES  STMTS(tcpprepOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT_CFG;)
# define OPT_NO_XLAT_OPT_NAMES  STMTS(tcpprepOptions.fOptSet |= \
                                    OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG;)

# define OPT_XLAT_CFG_NAMES     STMTS(tcpprepOptions.fOptSet &= \
                                  ~(OPTPROC_NXLAT_OPT|OPTPROC_NXLAT_OPT_CFG);)
# define OPT_XLAT_OPT_NAMES     STMTS(tcpprepOptions.fOptSet &= \
                                  ~OPTPROC_NXLAT_OPT;)

#else   /* ENABLE_NLS */
# define OPT_NO_XLAT_CFG_NAMES
# define OPT_NO_XLAT_OPT_NAMES

# define OPT_XLAT_CFG_NAMES
# define OPT_XLAT_OPT_NAMES

# ifndef _
#   define _(_s)  _s
# endif
#endif  /* ENABLE_NLS */

#ifdef  __cplusplus
}
#endif
#endif /* AUTOOPTS_TCPPREP_OPTS_H_GUARD */
/* tcpprep_opts.h ends here */
