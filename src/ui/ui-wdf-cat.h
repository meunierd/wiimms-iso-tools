
#ifndef WIT_UI_WDF_CAT_H
#define WIT_UI_WDF_CAT_H

// *************************************************************************
// *****   This file is automatically generated by the tool 'gen-ui'   *****
// *************************************************************************
// *****                 ==> DO NOT EDIT THIS FILE <==                 *****
// *************************************************************************

#include "lib-std.h"
#include "ui.h"

//
///////////////////////////////////////////////////////////////////////////////
///////////////                enum enumOptions                 ///////////////
///////////////////////////////////////////////////////////////////////////////

typedef enum enumOptions
{
	OPT_NONE,

	OPT_VERSION,
	OPT_HELP,
	OPT_XHELP,
	OPT_IO,

	OPT__N_TOTAL // == 5

} enumOptions;

//
///////////////////////////////////////////////////////////////////////////////
///////////////                enum enumCommands                ///////////////
///////////////////////////////////////////////////////////////////////////////

typedef enum enumCommands
{
	CMD__NONE,
	CMD__N

} enumCommands;

//
///////////////////////////////////////////////////////////////////////////////
///////////////                   enumGetOpt                    ///////////////
///////////////////////////////////////////////////////////////////////////////

typedef enum enumGetOpt
{
	GO__ERR			= '?',

	GO_VERSION		= 'V',

	GO_HELP			= 'h',

	GO_XHELP		= 0x80,
	GO_IO,

} enumGetOpt;

//
///////////////////////////////////////////////////////////////////////////////
///////////////                  external vars                  ///////////////
///////////////////////////////////////////////////////////////////////////////

extern const InfoOption_t OptionInfo[OPT__N_TOTAL+1];
extern const char OptionShort[];
extern const struct option OptionLong[];
extern u8 OptionUsed[OPT__N_TOTAL+1];
extern const u8 OptionIndex[OPT_INDEX_SIZE];
extern const InfoCommand_t CommandInfo[CMD__N+1];
extern const InfoUI_t InfoUI;

//
///////////////////////////////////////////////////////////////////////////////
///////////////                       END                       ///////////////
///////////////////////////////////////////////////////////////////////////////

#endif // WIT_UI_WDF_CAT_H

