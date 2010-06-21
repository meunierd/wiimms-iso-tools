
/***************************************************************************
 *                                                                         *
 *   This file is part of the WIT project. It is automatically generated   *
 *   by the project helper 'gen-ui'.                                       *
 *                                                                         *
 *                      ==> DO NOT EDIT THIS FILE <==                      *
 *                                                                         *
 *   Visit http://wit.wiimm.de/ for project details and sources.           *
 *   Copyright (c) 2009-2010 by Dirk Clemens <wiimm@wiimm.de>              *
 *                                                                         *
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   See file gpl-2.0.txt or http://www.gnu.org/licenses/gpl-2.0.txt       *
 *                                                                         *
 ***************************************************************************/

#include <getopt.h>
#include "ui-wdf.h"

//
///////////////////////////////////////////////////////////////////////////////
///////////////                  OptionInfo[]                   ///////////////
///////////////////////////////////////////////////////////////////////////////

const InfoOption_t OptionInfo[OPT__N_TOTAL+1] =
{
    {0,0,0,0,0}, // OPT_NONE,

    //----- command specific options -----

    {	OPT_CHUNK, 0, "chunk",
	0,
	"Print table with chunk header too."
    },

    {	OPT_LONG, 'l', "long",
	0,
	"Print (un)pack statistics, 1 line for each source. In dump mode:"
	" Print table with chunk header too (same as --chunk)."
    },

    {	OPT_MINUS1, '1', "minus-1",
	0,
	"If set the end address is the last address of a range. The standard"
	" is to print the first address that is not part of the address of a"
	" range."
    },

    {	OPT_WDF, 'W', "wdf",
	0,
	"Force WDF output mode if packing and set the default suffix to"
	" '.wdf'. This is the general default."
    },

    {	OPT_CISO, 'C', "ciso",
	0,
	"Force CISO output mode if packing and set the default suffix to"
	" '.ciso'.\n"
	" This is the default, when the program name contains the sub string"
	" 'ciso' in any case."
    },

    {	OPT_WBI, 0, "wbi",
	0,
	"Force CISO output mode if packing and set the default suffix to"
	" '.wbi'.\n"
	" This is the default, when the program name contains the sub string"
	" 'wbi' but not 'ciso' in any case."
    },

    {	OPT_SUFFIX, 's', "suffix",
	".suf",
	"Use suffix '.suf' instead of '.wdf' or '.ciso' for packed files."
    },

    {	OPT_DEST, 'd', "dest",
	"path",
	"Define a destination path (directory/file)."
    },

    {	OPT_KEEP, 'k', "keep",
	0,
	"Keep (don't delete) input files during (un-)packing."
    },

    {	OPT_OVERWRITE, 'o', "overwrite",
	0,
	"Overwrite already existing files."
    },

    {	OPT_PRESERVE, 'p', "preserve",
	0,
	"Preserve file times (atime+mtime)."
    },

    {	OPT_SPLIT, 'z', "split",
	0,
	"Enable output file splitting, default split size = 4 GB."
    },

    {	OPT_SPLIT_SIZE, 'Z', "split-size",
	"sz",
	"Enable output file splitting and define split size. The parameter"
	" 'sz' is a floating point number followed by an optional unit factor"
	" (one of 'cb' [=1] or  'kmgtpe' [base=1000] or 'KMGTPE' [base=1024])."
	" The default unit is 'G' (GiB)."
    },

    {	OPT_CHUNK_MODE, 0, "chunk-mode",
	"mode",
	"Defines an operation mode for --chunk-size and --max-chunks. Allowed"
	" keywords are 'ANY' to allow any values,, '32K' to force chunk sizes"
	" with a multiple of 32 KiB, 'POW2' to force chunk sizes >=32K and"
	" with a power of 2 or 'ISO' for ISO images (more restrictive as"
	" 'POW2', best for USB loaders). The case of the keyword is ignored."
	" The default key is '32K'.\n"
	" --chm is a short cut for --chunk-mode."
    },

    {	OPT_CHUNK_SIZE, 0, "chunk-size",
	"sz",
	"Define the minimal chunk size if creating a CISO file. The default is"
	" to calculate the chunk size from the input file size and find a good"
	" value by using a minimal value of 1 MiB for '--chunk-mode ISO' and"
	" 32 KiB for modes 32K and POW2. For the modes ISO and POW2 the value"
	" is rounded up to the next power of 2. This calculation also depends"
	" from option --max-chunks.\n"
	"The parameter 'sz' is a floating point number followed by an optional"
	" unit factor (one of 'cb' [=1] or  'kmgtpe' [base=1000] or 'KMGTPE'"
	" [base=1024]). The default unit is 'M' (MiB). If the number is"
	" prefixed with a '=' then options --chunk-mode and --max-chunks are"
	" ignored and the given value is used without any rounding or"
	" changing.\n"
	"If the input file size is not known (e.g. reading from pipe), its"
	" size is assumed as 12 GiB.\n"
	" --chz is a short cut for --chunk-size."
    },

    {	OPT_MAX_CHUNKS, 0, "max-chunks",
	"n",
	"Define the maximal number of chunks if creating a CISO file. The"
	" default value is 8192 for '--chunk-mode ISO' and 32760 (maximal"
	" value) for all other modes. If this value is set than the automatic"
	" calculation  of --chunk-size will be modified too.\n"
	" --mch is a short cut for --max-chunks."
    },

    {0,0,0,0,0}, // OPT__N_SPECIFIC == 17

    //----- global options -----

    {	OPT_VERSION, 'V', "version",
	0,
	"Stop parsing the command line, print a version info and exit."
    },

    {	OPT_HELP, 'h', "help",
	0,
	"Stop parsing the command line, print a help message and exit."
    },

    {	OPT_XHELP, 0, "xhelp",
	0,
	"Stop parsing the command line and print a help message with all"
	" commands included. Exit after printing."
    },

    {	OPT_QUIET, 'q', "quiet",
	0,
	"Be quiet and print only error messages."
    },

    {	OPT_VERBOSE, 'v', "verbose",
	0,
	"Be verbose -> print program name."
    },

    {	OPT_DEST2, 'D', "DEST",
	"path",
	"Like --dest, but create the directory path automatically."
    },

    {	OPT_STDOUT, 'c', "stdout",
	0,
	"Write to standard output (stdout) and keep (don't delete) input"
	" files.\n"
	"This is the default, when the program is reading from standard input"
	" (stdin)."
    },

    {	OPT_TEST, 't', "test",
	0,
	"Run in test mode, modify nothing.\n"
	">>> USE THIS OPTION IF UNSURE! <<<"
    },

    {0,0,0,0,0} // OPT__N_TOTAL == 25

};

//
///////////////////////////////////////////////////////////////////////////////
///////////////             alternate option infos              ///////////////
///////////////////////////////////////////////////////////////////////////////

const InfoOption_t option_cmd_VERSION_LONG =
    {	OPT_LONG, 'l', "long",
	0,
	"Print in long format."
    };

const InfoOption_t option_cmd_DUMP_LONG =
    {	OPT_LONG, 'l', "long",
	0,
	"Same as --chunk"
    };


//
///////////////////////////////////////////////////////////////////////////////
///////////////                  CommandTab[]                   ///////////////
///////////////////////////////////////////////////////////////////////////////

const CommandTab_t CommandTab[] =
{
    { CMD_VERSION,	"+VERSION",	"+V",		OB_CMD_VERSION },
    { CMD_HELP,		"+HELP",	"+H",		OB_CMD_HELP },
    { CMD_PACK,		"+PACK",	"+P",		OB_CMD_PACK },
    { CMD_UNPACK,	"+UNPACK",	"+U",		OB_CMD_UNPACK },
    { CMD_CAT,		"+CAT",		"+A",		OB_CMD_CAT },
    { CMD_CMP,		"+CMP",		"+C",		OB_CMD_CMP },
    { CMD_CMP,		"+DIFF",	0,		OB_CMD_CMP },
    { CMD_DUMP,		"+DUMP",	"+D",		OB_CMD_DUMP },

    { CMD__N,0,0,0 }
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////            OptionShort & OptionLong             ///////////////
///////////////////////////////////////////////////////////////////////////////

const char OptionShort[] = "Vhqvl1WCs:d:D:ckopzZ:t";

const struct option OptionLong[] =
{
	{ "version",		0, 0, 'V' },
	{ "help",		0, 0, 'h' },
	{ "xhelp",		0, 0, GO_XHELP },
	{ "quiet",		0, 0, 'q' },
	{ "verbose",		0, 0, 'v' },
	{ "chunk",		0, 0, GO_CHUNK },
	{ "long",		0, 0, 'l' },
	{ "minus-1",		0, 0, '1' },
	 { "minus1",		0, 0, '1' },
	{ "wdf",		0, 0, 'W' },
	{ "ciso",		0, 0, 'C' },
	{ "wbi",		0, 0, GO_WBI },
	{ "suffix",		1, 0, 's' },
	{ "dest",		1, 0, 'd' },
	{ "DEST",		1, 0, 'D' },
	{ "stdout",		0, 0, 'c' },
	{ "keep",		0, 0, 'k' },
	{ "overwrite",		0, 0, 'o' },
	{ "preserve",		0, 0, 'p' },
	{ "split",		0, 0, 'z' },
	{ "split-size",		1, 0, 'Z' },
	 { "splitsize",		1, 0, 'Z' },
	{ "chunk-mode",		1, 0, GO_CHUNK_MODE },
	 { "chunkmode",		1, 0, GO_CHUNK_MODE },
	 { "chm",		1, 0, GO_CHUNK_MODE },
	{ "chunk-size",		1, 0, GO_CHUNK_SIZE },
	 { "chunksize",		1, 0, GO_CHUNK_SIZE },
	 { "chz",		1, 0, GO_CHUNK_SIZE },
	{ "max-chunks",		1, 0, GO_MAX_CHUNKS },
	 { "maxchunks",		1, 0, GO_MAX_CHUNKS },
	 { "mch",		1, 0, GO_MAX_CHUNKS },
	{ "test",		0, 0, 't' },

	{0,0,0,0}
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////            OptionUsed & OptionIndex             ///////////////
///////////////////////////////////////////////////////////////////////////////

u8 OptionUsed[OPT__N_TOTAL+1] = {0};

const u8 OptionIndex[OPT_INDEX_SIZE] = 
{
	/*00*/	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/*10*/	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/*20*/	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/*30*/	 0,
	/*31*/	OPT_MINUS1,
	/*32*/	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,
	/*40*/	 0,0,0,
	/*43*/	OPT_CISO,
	/*44*/	OPT_DEST2,
	/*45*/	 0,0,0,0, 0,0,0,0, 0,0,0,
	/*50*/	 0,0,0,0, 0,0,
	/*56*/	OPT_VERSION,
	/*57*/	OPT_WDF,
	/*58*/	 0,0,
	/*5a*/	OPT_SPLIT_SIZE,
	/*5b*/	 0,0,0,0, 0,0,0,0, 
	/*63*/	OPT_STDOUT,
	/*64*/	OPT_DEST,
	/*65*/	 0,0,0,
	/*68*/	OPT_HELP,
	/*69*/	 0,0,
	/*6b*/	OPT_KEEP,
	/*6c*/	OPT_LONG,
	/*6d*/	 0,0,
	/*6f*/	OPT_OVERWRITE,
	/*70*/	OPT_PRESERVE,
	/*71*/	OPT_QUIET,
	/*72*/	 0,
	/*73*/	OPT_SUFFIX,
	/*74*/	OPT_TEST,
	/*75*/	 0,
	/*76*/	OPT_VERBOSE,
	/*77*/	 0,0,0,
	/*7a*/	OPT_SPLIT,
	/*7b*/	 0,0,0,0, 0,
	/*80*/	OPT_XHELP,
	/*81*/	OPT_CHUNK,
	/*82*/	OPT_WBI,
	/*83*/	OPT_CHUNK_MODE,
	/*84*/	OPT_CHUNK_SIZE,
	/*85*/	OPT_MAX_CHUNKS,
	/*86*/	 0,0,0,0, 0,0,0,0, 0,0,
	/*90*/	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
	/*a0*/	 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0,
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////                 InfoOption tabs                 ///////////////
///////////////////////////////////////////////////////////////////////////////

const InfoOption_t * option_tab_tool[] =
{
	OptionInfo + OPT_VERSION,
	OptionInfo + OPT_HELP,
	OptionInfo + OPT_XHELP,

	OptionInfo + OPT_NONE, // separator

	OptionInfo + OPT_QUIET,
	OptionInfo + OPT_VERBOSE,

	OptionInfo + OPT_NONE, // separator

	OptionInfo + OPT_DEST2,
	OptionInfo + OPT_STDOUT,

	OptionInfo + OPT_NONE, // separator

	OptionInfo + OPT_TEST,

	0
};

static const InfoOption_t * option_tab_cmd_VERSION[] =
{
	&option_cmd_VERSION_LONG,

	0
};

static const InfoOption_t * option_tab_cmd_HELP[] =
{

	0
};

static const InfoOption_t * option_tab_cmd_PACK[] =
{
	OptionInfo + OPT_DEST,
	OptionInfo + OPT_DEST2,
	OptionInfo + OPT_OVERWRITE,
	OptionInfo + OPT_SPLIT,
	OptionInfo + OPT_SPLIT_SIZE,
	OptionInfo + OPT_STDOUT,
	OptionInfo + OPT_KEEP,
	OptionInfo + OPT_PRESERVE,

	OptionInfo + OPT_NONE, // separator

	OptionInfo + OPT_WDF,
	OptionInfo + OPT_CISO,
	OptionInfo + OPT_WBI,
	OptionInfo + OPT_SUFFIX,

	0
};

static const InfoOption_t * option_tab_cmd_UNPACK[] =
{
	OptionInfo + OPT_DEST,
	OptionInfo + OPT_DEST2,
	OptionInfo + OPT_OVERWRITE,
	OptionInfo + OPT_SPLIT,
	OptionInfo + OPT_SPLIT_SIZE,
	OptionInfo + OPT_STDOUT,
	OptionInfo + OPT_KEEP,
	OptionInfo + OPT_PRESERVE,

	0
};

static const InfoOption_t * option_tab_cmd_CAT[] =
{
	OptionInfo + OPT_DEST,
	OptionInfo + OPT_DEST2,
	OptionInfo + OPT_OVERWRITE,
	OptionInfo + OPT_SPLIT,
	OptionInfo + OPT_SPLIT_SIZE,

	0
};

static const InfoOption_t * option_tab_cmd_CMP[] =
{

	0
};

static const InfoOption_t * option_tab_cmd_DUMP[] =
{
	OptionInfo + OPT_DEST,
	OptionInfo + OPT_DEST2,
	OptionInfo + OPT_OVERWRITE,
	OptionInfo + OPT_CHUNK,
	&option_cmd_DUMP_LONG,
	OptionInfo + OPT_MINUS1,

	0
};


//
///////////////////////////////////////////////////////////////////////////////
///////////////                   InfoCommand                   ///////////////
///////////////////////////////////////////////////////////////////////////////

const InfoCommand_t CommandInfo[CMD__N+1] =
{
    {	0,
	false,
	false,
	"wdf",
	0,
	"wdf [options]... [+command] [options]... files...",
	"wdf is a support tool for WDF and CISO archives. It convert (pack and"
	" unpack), compare and dump WDF and CISO archives. The default command"
	" depends on the program file name (see command descriptions). Usual"
	" names are wdf, unwdf, wdf-cat, wdf-cmp and wdf-dump (with or without"
	" minus signs).",
	8,
	option_tab_tool
    },

    {	CMD_VERSION,
	false,
	false,
	"+VERSION",
	"+V",
	"wdf +VERSION [ignored]...",
	"Print program name, version and the defaults and exit.",
	1,
	option_tab_cmd_VERSION
    },

    {	CMD_HELP,
	false,
	false,
	"+HELP",
	"+H",
	"wdf +HELP [+command] [ignored]...",
	"Print help and exit. If the first non option is a valid command name,"
	" then a help for the given command is printed.",
	0,
	option_tab_cmd_HELP
    },

    {	CMD_PACK,
	false,
	true,
	"+PACK",
	"+P",
	"wdf +PACK [option]... files...",
	"Pack sources into WDF or CISO archives. This is the general default.",
	12,
	option_tab_cmd_PACK
    },

    {	CMD_UNPACK,
	false,
	false,
	"+UNPACK",
	"+U",
	"wdf +UNPACK [option]... files...",
	"Unpack WDF and CISO archives.\n"
	"This is the default command, when the program name starts with the"
	" two letters 'un' in any case.",
	8,
	option_tab_cmd_UNPACK
    },

    {	CMD_CAT,
	false,
	false,
	"+CAT",
	"+A",
	"wdf +CAT [option]... files...",
	"Concatenate files and print on the standard output. WDF and CISO"
	" files are extracted before printing, all other files are copied byte"
	" by byte.\n"
	"This is the default command, when the program namecontains the three"
	" letter 'cat' in any case.",
	5,
	option_tab_cmd_CAT
    },

    {	CMD_CMP,
	false,
	false,
	"+CMP",
	"+C",
	"wdf +CAT [option]... files...",
	"Compare files and unpack WDF and CISO while comparing.\n"
	"The standard is to compare two source files. If --dest or --DEST is"
	" set, than all source files are compared against files in the"
	" destination path with equal names. If the second source file is"
	" mising then standard input (stdin) is used instead.\n"
	"This is the default command, when the program namecontains the"
	" letters 'cmp' or 'diff' in any case.",
	0,
	option_tab_cmd_CMP
    },

    {	CMD_DUMP,
	false,
	false,
	"+DUMP",
	"+D",
	"wdf +DUMP [option]... files...",
	"Dump the data structure of all archives and ignore non WDF and non"
	" CISO files.\n"
	"This is the default command, when the program contains the sub string"
	" 'dump' in any case.",
	6,
	option_tab_cmd_DUMP
    },

    {0,0,0,0,0,0,0,0}
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////                     InfoUI                      ///////////////
///////////////////////////////////////////////////////////////////////////////

const InfoUI_t InfoUI =
{
	"wdf",
	CMD__N,
	CommandTab,
	CommandInfo,
	OPT__N_SPECIFIC,
	OPT__N_TOTAL,
	OptionInfo,
	OptionUsed,
	OptionIndex,
	OptionShort,
	OptionLong
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////                       END                       ///////////////
///////////////////////////////////////////////////////////////////////////////
