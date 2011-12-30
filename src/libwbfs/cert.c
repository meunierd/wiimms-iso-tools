
/***************************************************************************
 *                    __            __ _ ___________                       *
 *                    \ \          / /| |____   ____|                      *
 *                     \ \        / / | |    | |                           *
 *                      \ \  /\  / /  | |    | |                           *
 *                       \ \/  \/ /   | |    | |                           *
 *                        \  /\  /    | |    | |                           *
 *                         \/  \/     |_|    |_|                           *
 *                                                                         *
 *                           Wiimms ISO Tools                              *
 *                         http://wit.wiimm.de/                            *
 *                                                                         *
 ***************************************************************************
 *                                                                         *
 *   This file is part of the WIT project.                                 *
 *   Visit http://wit.wiimm.de/ for project details and sources.           *
 *                                                                         *
 *   Copyright (c) 2009-2011 by Dirk Clemens <wiimm@wiimm.de>              *
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

#define _GNU_SOURCE 1
#include "cert.h"

//
///////////////////////////////////////////////////////////////////////////////
///////////////			    data			///////////////
///////////////////////////////////////////////////////////////////////////////

cert_data_t root_cert =
{
    "",		// issuer
    0,		// key_type
    "Root",	// key_id
    0,		// unknown1
 {
    //--- public_key

    0x24,0xf8,0xb0,0x84, 0x66,0x3b,0x8c,0xdf, 0xdd,0x27,0x6b,0x1e, 0x37,0x3c,0xdd,0xd9,
    0xad,0x06,0x4e,0xff, 0xa4,0x2c,0x8d,0x92, 0x1c,0xdf,0xc1,0x0c, 0x0e,0xc2,0x0f,0x0c,
    0xa2,0x20,0x59,0xfc, 0xb5,0x69,0x02,0x47, 0x65,0x8d,0x74,0x60, 0x4c,0x7e,0x98,0x4e,
    0xb1,0xeb,0x4e,0x49, 0x72,0x48,0xea,0x76, 0x7a,0x7f,0xde,0x8d, 0xd0,0xa7,0xc1,0x31,
    0x09,0x27,0xfc,0x5a, 0x41,0xa3,0xec,0xca, 0x2a,0x62,0xb9,0x0f, 0x5f,0x7d,0xb1,0x6f,
    0xee,0xc7,0x49,0xe9, 0xc4,0x4c,0x6d,0xac, 0xde,0x4f,0xa2,0x3d, 0x4f,0x29,0xa2,0x45,
    0x7e,0x9b,0x92,0x41, 0xe4,0xf8,0x1b,0x72, 0x3f,0x59,0x9d,0x29, 0xbb,0x3b,0x8d,0x50,
    0xa6,0xd2,0xe4,0x3b, 0x37,0x73,0x9d,0xc5, 0xc7,0x13,0x2d,0xa7, 0x9e,0x7a,0x68,0x31,

    0x3a,0x12,0x51,0x3b, 0xed,0x53,0xa3,0x8e, 0xd8,0x6f,0x45,0xd2, 0xfe,0xbb,0x99,0x73,
    0x08,0x59,0x6e,0x98, 0x4f,0xdc,0x57,0xd4, 0x1b,0x2a,0x6b,0x39, 0xb7,0xde,0x6f,0x34,
    0x22,0xd0,0x41,0x59, 0x40,0x64,0x6a,0x5e, 0xff,0x64,0x77,0xfb, 0x32,0x83,0xb9,0xe4,
    0xdb,0x57,0xf1,0x65, 0xc2,0xf6,0xc9,0xe2, 0x59,0x5d,0x5c,0xae, 0x7e,0xe7,0xb1,0x05,
    0xee,0x5d,0xd9,0x93, 0xb3,0x6c,0x2a,0x29, 0x71,0xf4,0xe2,0x16, 0xd7,0xa6,0x2f,0x88,
    0x89,0x3c,0xe1,0x7b, 0x6a,0x5f,0xfa,0x2f, 0x30,0x5f,0x96,0x2f, 0xc8,0xd8,0x56,0x1a,
    0x03,0xfc,0x0e,0x59, 0xd4,0xbb,0xe0,0x77, 0xbe,0x7e,0x1b,0x60, 0xcf,0xc6,0x8f,0xe2,
    0xd7,0xba,0x5c,0xb7, 0xc0,0xec,0xba,0x97, 0xeb,0xff,0xed,0x61, 0x18,0x6c,0x16,0x04,

    0x0d,0xc2,0x3b,0x67, 0x05,0xf4,0x89,0x94, 0x76,0x30,0xc3,0xba, 0x34,0xfd,0x6f,0x14,
    0x7c,0x9b,0xb5,0xdc, 0x19,0x3a,0x54,0x34, 0xd0,0x12,0xe0,0xbd, 0x0a,0x40,0x67,0x7d,
    0xeb,0x1a,0xbc,0x93, 0xa6,0xae,0x01,0x50, 0xa7,0xe2,0xe1,0x8d, 0xf5,0xd1,0x76,0xb6,
    0x85,0xa7,0xd4,0xc3, 0x41,0xea,0xef,0x7f, 0x9a,0xa6,0xe9,0xbd, 0xd5,0x70,0x7b,0x01,
    0xa1,0xf2,0xf3,0x6e, 0x1d,0x72,0x64,0x3e, 0xd3,0x94,0x4e,0x04, 0x65,0x24,0x68,0xb3,
    0x92,0xe0,0xcd,0x28, 0x28,0xa1,0x57,0xa9, 0xa1,0x22,0x22,0x7f, 0x55,0x40,0xef,0x85,
    0x80,0x82,0x21,0x37, 0x17,0x77,0x34,0x9d, 0xe2,0xe6,0x46,0x5c, 0xe0,0xb5,0xe9,0xb2,
    0x6e,0x6e,0x71,0x80, 0x18,0x14,0x84,0x99, 0x82,0x29,0x2b,0x6f, 0xda,0x98,0x68,0xa0,

    0xb8,0xda,0x50,0x03, 0x5c,0x43,0xaa,0xde, 0x86,0xf1,0x68,0x9a, 0x3c,0xe1,0xa0,0x2a,
    0xf3,0xe8,0x3b,0xde, 0x99,0xa7,0xde,0x78, 0x13,0x81,0x41,0x09, 0xe0,0x79,0xe6,0xa0,
    0x7a,0xf5,0xa4,0x50, 0xbb,0x16,0xd4,0x63, 0x30,0x16,0x9f,0x75, 0x8b,0x71,0xca,0x15,
    0x92,0xc0,0x04,0xa9, 0x16,0xcc,0xa1,0x12, 0xa2,0xdd,0xc4,0x2c, 0x03,0xb7,0x22,0x39,
    0xc1,0x07,0x05,0x4d, 0x1e,0xb2,0xbc,0x11, 0x94,0x84,0x76,0x85, 0xf0,0x5e,0xdc,0xa9,
    0x2e,0x43,0x8e,0xb0, 0x4d,0xa0,0xb3,0x39, 0x9c,0xe2,0x7b,0x08, 0x79,0xd0,0x30,0xe7,
    0xaf,0x58,0x02,0x54, 0xb2,0x5e,0x0e,0x37, 0x91,0x92,0x9e,0x69, 0x2e,0x6d,0x95,0x74,
    0xc2,0x7b,0x12,0xad, 0x98,0x00,0xf5,0x48, 0x13,0x18,0x92,0xc3, 0x4d,0x17,0x08,0x49,

    //---- post data
    0x00,0x01,0x00,0x01,
  }
};

///////////////////////////////////////////////////////////////////////////////

u8 std_cert_chain[0xa00] =
{
 /*     0 */  0xdc,0xdd,0xdc,0xdc, 0x6f,0x71,0x6f,0xfe, 0xb7,0xe0,0xe1,0x23, 0xc7,0x97,0x9c,0xab,
 /*    10 */  0xca,0x23,0x93,0xa6, 0x0b,0xb8,0x5a,0x14, 0x49,0x70,0x8a,0xf1, 0xfd,0x2d,0xda,0xdd,
 /*    20 */  0x08,0x2a,0xb8,0xf4, 0xc5,0xc0,0xdb,0xaa, 0x53,0x03,0xc6,0x3e, 0x12,0xa7,0xfb,0x15,
 /*    30 */  0xd3,0x60,0xd6,0x0c, 0xed,0xf9,0xa4,0x30, 0xdb,0xa5,0x6a,0x8b, 0x08,0xeb,0xf8,0xcf,
 /*    40 */  0x7b,0x24,0xb3,0xd0, 0xc8,0x1c,0x33,0xb2, 0xd5,0x9d,0x31,0xf7, 0xd9,0x30,0xe5,0x8b,
 /*    50 */  0xea,0xdb,0x55,0xdc, 0x96,0x5b,0x51,0xf2, 0x41,0x24,0x1b,0x79, 0x75,0x24,0x16,0x6f,
 /*    60 */  0xcd,0x6d,0xc4,0xa5, 0x8b,0x67,0x24,0x44, 0x3e,0x7e,0x88,0xde, 0x13,0x88,0xe5,0x13,
 /*    70 */  0xf7,0x63,0x7c,0x3d, 0x24,0x80,0xda,0xb2, 0x5f,0x46,0x3c,0x48, 0x16,0x9b,0x3c,0xc9,
 /*    80 */  0x84,0x29,0xb2,0xb3, 0xe8,0x35,0xf6,0x7e, 0x00,0xe4,0x4f,0xa2, 0xeb,0x11,0x50,0x80,
 /*    90 */  0x91,0x21,0xf3,0xcd, 0x93,0x34,0xb4,0x15, 0x74,0x05,0x22,0x04, 0xb2,0xd0,0xfd,0xa9,
 /*    a0 */  0x7e,0x61,0xa2,0x55, 0x65,0x1b,0x69,0xcf, 0x28,0xc6,0xa5,0xbd, 0x98,0xe5,0xcc,0x33,
 /*    b0 */  0x25,0x0b,0x22,0x8b, 0xfe,0xc4,0x09,0xb1, 0x27,0xa3,0x95,0xa6, 0x78,0x17,0x4c,0x08,
 /*    c0 */  0x2d,0x72,0x6d,0xaa, 0x38,0xb4,0x81,0x7b, 0x48,0x9c,0xbc,0x44, 0xf3,0xd8,0x94,0x9c,
 /*    d0 */  0xc3,0x13,0x1a,0x66, 0x37,0x06,0xca,0xec, 0x68,0xaf,0x68,0xc9, 0xff,0xe9,0xd4,0xdb,
 /*    e0 */  0xd6,0x43,0x93,0x55, 0xa4,0x3a,0xf0,0x30, 0x82,0x4e,0x9a,0x79, 0x74,0x61,0x7c,0x59,
 /*    f0 */  0xa4,0xb4,0xa9,0xd0, 0xe6,0xcd,0xf3,0x73, 0x49,0x34,0xe4,0x14, 0x45,0xd2,0x5b,0x6d,
 /*   100 */  0xbe,0x11,0xcc,0x06, 0x6f,0xed,0x4a,0xb9, 0x33,0x54,0x47,0x88, 0xc7,0x6f,0xea,0x67,
 /*   110 */  0xbb,0x8f,0x43,0x73, 0x1e,0x72,0xf1,0xd6, 0xf2,0xa9,0x1c,0xff, 0xa8,0x36,0x92,0x70,
 /*   120 */  0x51,0x45,0x8c,0xa3, 0x85,0x65,0x8f,0xab, 0xec,0x83,0xfa,0xe9, 0x1a,0xd4,0x75,0x4c,
 /*   130 */  0x4f,0x70,0x53,0x1a, 0x02,0xff,0x65,0xa6, 0x36,0xac,0x68,0x18, 0x13,0xba,0x6f,0xd2,
 /*   140 */  0x84,0xee,0xd2,0x19, 0x6a,0xae,0xd8,0x94, 0x12,0xe7,0x6d,0xc0, 0x8f,0xc3,0x17,0xac,
 /*   150 */  0xf4,0xa0,0x69,0x1e, 0xa0,0xbb,0x93,0x67, 0x21,0x50,0xa3,0x15, 0x9e,0xfc,0x78,0xaf,
 /*   160 */  0xff,0xc1,0x84,0xa2, 0x86,0xc6,0xc6,0x5e, 0x3f,0xa9,0xa5,0x7d, 0x67,0x5e,0xb2,0x12,
 /*   170 */  0xdd,0xad,0x15,0xa9, 0xbf,0x9b,0x97,0xc1, 0x9a,0x3a,0xa5,0x6e, 0x5e,0xeb,0xbe,0xcd,
 /*   180 */  0x11,0x1b,0xdc,0xf3, 0x9a,0x5b,0x1e,0xe0, 0xb1,0x1c,0x09,0x69, 0xa4,0xb2,0x3d,0x2e,
 /*   190 */  0xaf,0x23,0xdd,0x4e, 0x8c,0xd3,0x28,0x1b, 0x8c,0xb6,0x32,0xae, 0x6a,0x28,0xe1,0x2a,
 /*   1a0 */  0xd4,0x22,0x79,0x5f, 0x7d,0x25,0x5a,0xd3, 0x5b,0x73,0x8e,0x98, 0x88,0x67,0x9b,0x1f,
 /*   1b0 */  0xda,0xd0,0x48,0x35, 0x47,0x2b,0x0a,0xee, 0x7b,0x14,0x77,0x97, 0x93,0x29,0xe9,0xfd,
 /*   1c0 */  0xc3,0x1d,0x5c,0x9b, 0x67,0xa6,0x26,0x86, 0xf7,0x0b,0x64,0x58, 0x71,0x52,0x8a,0x93,
 /*   1d0 */  0x87,0x55,0x23,0xeb, 0x4b,0xeb,0x2d,0x29, 0xdd,0xe7,0xc3,0x42, 0x18,0xc4,0xb3,0x4e,
 /*   1e0 */  0xf6,0x09,0x18,0x6f, 0x1c,0x09,0x5b,0xd7, 0x40,0xd8,0x73,0xc6, 0x69,0x2f,0x60,0xb1,
 /*   1f0 */  0xd6,0x2d,0xa1,0x9b, 0xd4,0x38,0x9f,0x35, 0xaf,0x2b,0x6b,0xac, 0xab,0x88,0x66,0x2f,
 /*   200 */  0x30,0x0e,0x70,0x95, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   210 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   220 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   230 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   240 */  0x8e,0xb3,0xb3,0xa8, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   250 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   260 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   270 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   280 */  0xdc,0xdc,0xdc,0xdd, 0x9f,0x9d,0xec,0xec, 0xec,0xec,0xec,0xec, 0xec,0xed,0xdc,0xdc,
 /*   290 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   2a0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   2b0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   2c0 */  0xdc,0xdc,0xdc,0xdc, 0x87,0x26,0xa1,0x80, 0x6e,0xa5,0x15,0x3e, 0x32,0x3d,0xfd,0x1a,
 /*   2d0 */  0x36,0x28,0x93,0x2a, 0xe5,0x24,0x53,0xdb, 0x57,0x97,0xab,0x31, 0x43,0x49,0xbc,0x6c,
 /*   2e0 */  0xe9,0x5e,0x5d,0x69, 0xd2,0x89,0x77,0xae, 0xcd,0xc9,0x7d,0xab, 0xac,0xe0,0xa6,0xec,
 /*   2f0 */  0x22,0xe6,0x35,0x33, 0xc0,0xbc,0x60,0xc1, 0x4b,0x9a,0xaa,0x6e, 0xe6,0xb4,0x10,0xd8,
 /*   300 */  0x6d,0x44,0x8e,0x87, 0x15,0xb4,0x2d,0xc1, 0x3e,0x07,0x8c,0x38, 0x05,0x3b,0x2c,0xad,
 /*   310 */  0x39,0xbe,0x06,0x3e, 0xd5,0xfe,0xef,0x35, 0x0f,0xbf,0x2a,0xc1, 0x0b,0x1d,0x43,0x2f,
 /*   320 */  0x78,0x75,0xc2,0x53, 0xb9,0x8f,0x08,0xad, 0x01,0xa7,0x58,0x65, 0x2d,0x64,0x12,0xaf,
 /*   330 */  0xe9,0x2c,0x29,0x88, 0xd9,0xbf,0x7d,0x36, 0x64,0xe5,0xbf,0x3c, 0x47,0x35,0xdd,0xdd,
 /*   340 */  0xc3,0x45,0x88,0xbf, 0xbd,0xf4,0xac,0xfc, 0x35,0x10,0xd1,0x77, 0x94,0xa3,0xc8,0xd1,
 /*   350 */  0xba,0xfa,0x7d,0x5f, 0xb1,0xfb,0xcd,0xc3, 0xfc,0xb4,0x02,0x9b, 0xae,0xc8,0x4d,0x8d,
 /*   360 */  0x13,0xb5,0x1a,0xc7, 0x7a,0xd2,0x25,0x05, 0x95,0x7c,0x2b,0xc3, 0x88,0x45,0x2e,0x0f,
 /*   370 */  0x46,0x0e,0x50,0xac, 0xd9,0xe8,0x5e,0x4f, 0x18,0xed,0x23,0x61, 0xef,0x2a,0x60,0x7a,
 /*   380 */  0xd1,0x1b,0xc5,0x82, 0x7e,0x60,0x19,0xb1, 0xfc,0xd7,0x73,0xb1, 0xda,0x0c,0x40,0x9d,
 /*   390 */  0x07,0x51,0x35,0x1b, 0xfc,0xc9,0x90,0x78, 0x5f,0xf7,0xb5,0x1c, 0x50,0xb5,0x11,0xe7,
 /*   3a0 */  0xdb,0xe6,0xdc,0xbf, 0xbc,0xf3,0x9a,0xf1, 0xef,0x5c,0xbd,0x79, 0x36,0xb0,0x4d,0x80,
 /*   3b0 */  0x09,0xbe,0xe9,0xa5, 0x1f,0x37,0xb8,0x12, 0x98,0x33,0x84,0xb1, 0xc8,0x66,0x76,0x54,
 /*   3c0 */  0xe8,0xdd,0x47,0xe2, 0x37,0x32,0x0f,0xa5, 0xdc,0xdd,0xdc,0xdd, 0xdc,0xdc,0xdc,0xdc,
 /*   3d0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   3e0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   3f0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   400 */  0xdc,0xdd,0xdc,0xdd, 0x92,0xdc,0x83,0x2d, 0xe3,0x5a,0xa9,0x51, 0x6a,0x40,0x99,0xbf,
 /*   410 */  0xd3,0x08,0x47,0x28, 0x10,0x81,0x88,0x13, 0x10,0xfe,0xe8,0xae, 0x8b,0x77,0x78,0x66,
 /*   420 */  0x8f,0x0e,0x6f,0xe1, 0x3a,0x30,0x42,0x7d, 0x8b,0x88,0x8f,0x72, 0x83,0x4f,0xe1,0x4a,
 /*   430 */  0x63,0x2b,0x10,0xa6, 0xa5,0x8a,0xb2,0x58, 0xa7,0xc7,0xbc,0xab, 0x1e,0x75,0xe4,0xad,
 /*   440 */  0xec,0xc6,0x50,0x0f, 0x15,0xe1,0x91,0x6f, 0xfa,0x35,0x5b,0x4e, 0xba,0x35,0x0f,0x66,
 /*   450 */  0x43,0xa5,0x60,0x9a, 0xe4,0x26,0xf1,0xfc, 0x7c,0xe6,0xac,0xbb, 0x78,0xcd,0x7b,0x7c,
 /*   460 */  0x6b,0x05,0xce,0x71, 0xcd,0xb6,0xe6,0x18, 0xb2,0xee,0x9e,0x9b, 0x1e,0xd4,0x66,0x68,
 /*   470 */  0x48,0x40,0x19,0xf2, 0x0c,0xf3,0xc5,0x2a, 0x8d,0x3c,0x03,0xf2, 0xea,0x8f,0x76,0x73,
 /*   480 */  0x4b,0x7a,0x4e,0x67, 0x75,0xc1,0x04,0xb2, 0xf8,0xf2,0x6f,0xd4, 0xab,0x89,0xcd,0x12,
 /*   490 */  0x44,0x2a,0x7e,0x28, 0xfa,0x15,0xfb,0xd8, 0x0c,0x20,0x51,0x08, 0x5c,0x42,0x0b,0xbd,
 /*   4a0 */  0x61,0xcd,0x6b,0x59, 0x48,0x50,0x0a,0x0c, 0xa6,0x07,0x78,0xd4, 0x0c,0x2c,0x5a,0x2a,
 /*   4b0 */  0x86,0x72,0xc5,0xc8, 0x6e,0x54,0x46,0x74, 0x72,0x96,0x7e,0x76, 0x1b,0xbd,0x75,0xd1,
 /*   4c0 */  0x9d,0xf0,0x6d,0x8c, 0xd5,0x77,0xe2,0x4f, 0x20,0x75,0xf8,0x02, 0x12,0x93,0xa0,0xda,
 /*   4d0 */  0x77,0x00,0xf2,0xbc, 0x41,0xb4,0x62,0xdc, 0xaf,0x26,0x5c,0x8b, 0xb6,0xc8,0x82,0x31,
 /*   4e0 */  0x18,0x57,0xa8,0xee, 0x5b,0xdb,0x4f,0x14, 0x20,0x7a,0x04,0xe2, 0xd5,0xb2,0x19,0x2e,
 /*   4f0 */  0x75,0x18,0xfd,0x3b, 0x94,0x6f,0xaf,0x9c, 0x87,0x3e,0x26,0x56, 0x3d,0x84,0xa4,0x35,
 /*   500 */  0x09,0xff,0x54,0xa9, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   510 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   520 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   530 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   540 */  0x8e,0xb3,0xb3,0xa8, 0xf1,0x9f,0x9d,0xec, 0xec,0xec,0xec,0xec, 0xec,0xec,0xed,0xdc,
 /*   550 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   560 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   570 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   580 */  0xdc,0xdc,0xdc,0xdd, 0x9f,0x8c,0xec,0xec, 0xec,0xec,0xec,0xec, 0xec,0xe8,0xdc,0xdc,
 /*   590 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   5a0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   5b0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   5c0 */  0xdc,0xdc,0xdc,0xdc, 0x2d,0x64,0x7c,0xb8, 0x1d,0xb1,0x2f,0x5f, 0xf5,0x89,0x1f,0xf5,
 /*   5d0 */  0x87,0xae,0x2c,0xef, 0xf2,0x4b,0x33,0xc8, 0x58,0x56,0xb4,0xd8, 0x40,0x7a,0x52,0x70,
 /*   5e0 */  0x02,0xc8,0x8c,0xef, 0x64,0xb0,0xcc,0x51, 0x94,0xef,0x80,0x81, 0xd0,0x77,0xab,0xd8,
 /*   5f0 */  0xbe,0x88,0x9b,0x89, 0x99,0xf6,0x4c,0xdc, 0xac,0x6d,0x8a,0x4e, 0x80,0xcb,0x5a,0x3e,
 /*   600 */  0x11,0xfc,0xb1,0x10, 0x00,0xf0,0xf2,0xeb, 0xb2,0xfb,0x20,0x68, 0xfc,0xba,0x10,0xd6,
 /*   610 */  0x50,0x35,0x22,0x34, 0x8b,0xd8,0x3a,0x16, 0xbf,0xc6,0xf2,0xa2, 0x4d,0xa2,0x48,0xa0,
 /*   620 */  0xe5,0x4d,0xab,0xea, 0xf5,0x0d,0x89,0xbd, 0x59,0x67,0x0b,0x6b, 0xaf,0x16,0xeb,0x9b,
 /*   630 */  0x42,0x83,0x76,0x7f, 0x6a,0xd9,0x3c,0xdd, 0x3d,0x70,0x39,0x51, 0x04,0x24,0x9b,0x5e,
 /*   640 */  0x0a,0x99,0x20,0x3f, 0x7d,0x11,0xdf,0x77, 0xea,0x2c,0x2f,0x5a, 0x6d,0x7e,0x0d,0xeb,
 /*   650 */  0x9c,0x7d,0x48,0x56, 0x8f,0x66,0xc7,0xd1, 0x50,0x94,0xbf,0x11, 0xb7,0xf0,0xf2,0xfc,
 /*   660 */  0xb8,0x48,0x5c,0x90, 0xbe,0x26,0x75,0xe6, 0xa2,0xef,0x75,0x36, 0xa4,0xb7,0x85,0x16,
 /*   670 */  0x3f,0x77,0xea,0x99, 0x28,0x17,0x53,0x0b, 0x4c,0xb7,0x5e,0xb4, 0x11,0x70,0x2d,0xa7,
 /*   680 */  0xe6,0x30,0x9a,0x5f, 0xc7,0x4d,0x2a,0x02, 0xc4,0xbd,0x5f,0x60, 0x97,0xee,0xbb,0x4f,
 /*   690 */  0x1b,0xf2,0x8c,0x05, 0xc2,0xea,0x7c,0x00, 0x3e,0x65,0xa1,0x7c, 0xfd,0xe2,0x9a,0x4a,
 /*   6a0 */  0xde,0xc3,0xef,0xc0, 0x62,0x72,0x51,0x20, 0x4e,0x5b,0xee,0x76, 0x98,0x00,0xa4,0x3b,
 /*   6b0 */  0xc5,0x46,0xe1,0x01, 0x8b,0xfe,0xa2,0x42, 0xab,0x02,0xee,0xbf, 0x5a,0x4f,0xb0,0xcd,
 /*   6c0 */  0x70,0x7b,0xd3,0x5d, 0xc5,0x0f,0xe6,0x45, 0xdc,0xdd,0xdc,0xdd, 0xdc,0xdc,0xdc,0xdc,
 /*   6d0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   6e0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   6f0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   700 */  0xdc,0xdd,0xdc,0xdd, 0xa1,0x41,0x82,0x66, 0x8e,0x5d,0x00,0x7b, 0xda,0x81,0xf3,0xd4,
 /*   710 */  0xb4,0x07,0x56,0x1b, 0xe6,0x12,0xa2,0x75, 0x4d,0x2d,0x4a,0x43, 0x3d,0x0c,0x2e,0x1d,
 /*   720 */  0xc3,0x72,0x1c,0x1f, 0x2c,0xc6,0x00,0x68, 0x9a,0x71,0x39,0x16, 0xdf,0x6a,0xf9,0xfd,
 /*   730 */  0x48,0xbe,0x1a,0x3d, 0x9d,0xd1,0x65,0x3a, 0xe3,0x02,0x44,0x0d, 0x73,0xfa,0xe7,0x90,
 /*   740 */  0x6e,0x5b,0x58,0xfb, 0x5e,0xae,0x33,0xfb, 0xcf,0x97,0x5b,0x1e, 0x84,0x0a,0xa7,0xbe,
 /*   750 */  0x2e,0x69,0x63,0x40, 0x6a,0x66,0x50,0x55, 0xc5,0xf2,0x19,0xda, 0x55,0x70,0xa8,0xf8,
 /*   760 */  0x7c,0xfe,0xd5,0x9c, 0xdf,0x32,0x44,0x78, 0x61,0xf3,0xdd,0xe7, 0x85,0xe3,0x39,0xba,
 /*   770 */  0xb0,0x09,0x37,0x86, 0x0b,0x78,0x4f,0xcc, 0x2f,0x92,0x27,0x68, 0xe1,0x9a,0x17,0x2d,
 /*   780 */  0x69,0xff,0x13,0x5e, 0x2a,0x52,0x69,0xb1, 0x65,0xd8,0x7b,0x1e, 0x74,0xf7,0x3d,0xc1,
 /*   790 */  0xa4,0x0f,0x47,0x7e, 0xd1,0x4c,0x0f,0xdb, 0x9e,0x07,0x82,0xa6, 0x1d,0x33,0x2e,0xfd,
 /*   7a0 */  0x8d,0xd5,0xbe,0x13, 0x75,0xc8,0x74,0x5c, 0x00,0x28,0xcb,0x66, 0x45,0x4f,0xd6,0x32,
 /*   7b0 */  0xd4,0x6c,0x6c,0x39, 0xc6,0xe2,0x43,0x73, 0x11,0x1e,0x0b,0x3f, 0x17,0x7d,0xf3,0xe6,
 /*   7c0 */  0x1c,0xdb,0x4c,0x02, 0x98,0xa6,0x1f,0x19, 0xe4,0x74,0xbb,0x4e, 0xe4,0xdb,0x57,0x08,
 /*   7d0 */  0x18,0x6e,0x99,0x70, 0xf5,0xca,0x54,0xb1, 0xf6,0xd2,0x85,0x92, 0x31,0x80,0x14,0xe9,
 /*   7e0 */  0xb5,0x57,0x91,0xbe, 0xe4,0x03,0xd9,0xae, 0x91,0x10,0x2a,0x5d, 0x5c,0x56,0xac,0xa8,
 /*   7f0 */  0xda,0x85,0xec,0x63, 0x24,0x8d,0x9d,0xeb, 0x34,0xc9,0x26,0x66, 0x7d,0xae,0x64,0x3c,
 /*   800 */  0xb5,0xb0,0xbd,0x38, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   810 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   820 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   830 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   840 */  0x8e,0xb3,0xb3,0xa8, 0xf1,0x9f,0x9d,0xec, 0xec,0xec,0xec,0xec, 0xec,0xec,0xed,0xdc,
 /*   850 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   860 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   870 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   880 */  0xdc,0xdc,0xdc,0xdd, 0x84,0x8f,0xec,0xec, 0xec,0xec,0xec,0xec, 0xec,0xef,0xdc,0xdc,
 /*   890 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   8a0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   8b0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   8c0 */  0xdc,0xdc,0xdc,0xdc, 0x2d,0x64,0x43,0x0d, 0x71,0xdb,0x75,0xeb, 0x56,0xa7,0xcc,0xd0,
 /*   8d0 */  0xa1,0x1b,0xe5,0x62, 0x42,0x01,0x6b,0xee, 0xdc,0x55,0x77,0xf9, 0x6d,0x24,0xad,0x73,
 /*   8e0 */  0x86,0x75,0x28,0x84, 0x42,0x0d,0x5f,0xde, 0xee,0x52,0x5d,0xc6, 0xc3,0x33,0x0c,0xd5,
 /*   8f0 */  0x14,0xda,0xea,0x9f, 0x24,0x88,0x65,0x3d, 0xe7,0x67,0xbd,0xe6, 0xa6,0x13,0x5b,0xc8,
 /*   900 */  0x59,0xb7,0x78,0x87, 0x76,0x3b,0x67,0x1a, 0x92,0x6e,0x2b,0x81, 0x5b,0x37,0x2e,0xbb,
 /*   910 */  0x31,0xd3,0x78,0x9d, 0x75,0xef,0xba,0x82, 0x8b,0xa1,0x86,0x02, 0x77,0x27,0x9a,0xf2,
 /*   920 */  0xaa,0xdc,0x16,0x40, 0x35,0x91,0x18,0x17, 0x44,0xe5,0x4e,0x77, 0xa6,0xf3,0x6f,0x7f,
 /*   930 */  0x42,0x7e,0x63,0x40, 0x8f,0x30,0x0c,0x00, 0x26,0xb7,0x57,0x82, 0x6e,0x17,0x78,0xd3,
 /*   940 */  0x26,0x9c,0xa9,0x24, 0x2e,0x6e,0x02,0x4b, 0xe4,0xcd,0x5b,0xf1, 0x29,0x3e,0x7a,0x1f,
 /*   950 */  0x57,0xf3,0x00,0x52, 0x8b,0x01,0x61,0x83, 0x9a,0x37,0xfb,0x0a, 0xc5,0x8e,0x2a,0x72,
 /*   960 */  0x24,0xbe,0x6b,0x32, 0x46,0x1a,0x5e,0x7e, 0x6d,0x46,0x75,0x69, 0x84,0x27,0x37,0x6f,
 /*   970 */  0x55,0xf3,0x61,0x8c, 0x15,0x29,0x00,0x96, 0xb2,0x40,0x47,0x22, 0x99,0x5c,0xe8,0x75,
 /*   980 */  0x9e,0xc4,0xf1,0x02, 0x6b,0x83,0x3c,0x0d, 0x6f,0x03,0xd2,0x4b, 0x3f,0x45,0x5c,0x5b,
 /*   990 */  0xac,0xc4,0x1e,0x6e, 0x5f,0x2d,0xe9,0xa9, 0xa0,0x86,0xec,0x20, 0xe3,0xec,0x58,0x78,
 /*   9a0 */  0x46,0x76,0x1c,0xc2, 0x3b,0xda,0xb5,0x93, 0x52,0xc8,0x94,0x06, 0xce,0xe6,0x10,0x93,
 /*   9b0 */  0x26,0xfa,0x76,0xe4, 0x2b,0x33,0x63,0xfb, 0x53,0xea,0x4b,0xa5, 0xab,0x81,0x6b,0x19,
 /*   9c0 */  0x71,0x1b,0x55,0x4d, 0x00,0x24,0x9f,0x51, 0xdc,0xdd,0xdc,0xdd, 0xdc,0xdc,0xdc,0xdc,
 /*   9d0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   9e0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
 /*   9f0 */  0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc, 0xdc,0xdc,0xdc,0xdc,
};

///////////////////////////////////////////////////////////////////////////////

void setup_cert_data()
{
    static bool done = false;
    if (!done)
    {
	done = true;

	int i;
	for ( i = 0; i < sizeof(std_cert_chain); i++ )
	    std_cert_chain[i] ^= 0xdc;
	
	const int key_size = cert_get_pubkey_size(ntohl(root_cert.key_type));
	for ( i = 0; i < key_size; i++ )
	    root_cert.public_key[i] ^= 0xdc;
    }
}

//
///////////////////////////////////////////////////////////////////////////////
///////////////			bn helpers			///////////////
///////////////////////////////////////////////////////////////////////////////

#define bn_zero(a,b)      memset(a,0,b)
#define bn_copy(a,b,c)    memcpy(a,b,c)
#define bn_compare(a,b,c) memcmp(a,b,c)

///////////////////////////////////////////////////////////////////////////////
// calc a = a mod N, given n = size of a,N in bytes

static void bn_sub_modulus ( u8 *a, const u8 *N, const u32 n )
{
    u32 i;
    u32 dig;
    u8 c;

    c = 0;
    for (i = n - 1; i < n; i--) {
	dig = N[i] + c;
	c = (a[i] < dig);
	a[i] -= dig;
    }
}

///////////////////////////////////////////////////////////////////////////////
// calc d = (a + b) mod N, given n = size of d,a,b,N in bytes

static void bn_add ( u8 *d, const u8 *a, const u8 *b, const u8 *N, const u32 n )
{
    u32 i;
    u32 dig;
    u8 c;

    c = 0;
    for (i = n - 1; i < n; i--)
    {
	dig = a[i] + b[i] + c;
	c = (dig >= 0x100);
	d[i] = dig;
    }

    if (c)
	bn_sub_modulus(d, N, n);

    if (bn_compare(d, N, n) >= 0)
	bn_sub_modulus(d, N, n);
}

///////////////////////////////////////////////////////////////////////////////
// calc d = (a * b) mod N, given n = size of d,a,b,N in bytes

static void bn_mul ( u8 *d, const u8 *a, const u8 *b, const u8 *N, const u32 n )
{
    u32 i;
    u8 mask;

    bn_zero(d, n);

    for (i = 0; i < n; i++)
	for (mask = 0x80; mask != 0; mask >>= 1)
	{
	    bn_add(d, d, d, N, n);
	    if ((a[i] & mask) != 0)
		bn_add(d, d, b, N, n);
	}
}

///////////////////////////////////////////////////////////////////////////////
// calc d = (a ^ e) mod N, given n = size of d,a,N and en = size of e in bytes

static void bn_exp(u8 *d, const u8 *a, const u8 *N, const u32 n, const u8 *e, const u32 en)
{
    u8 t[512];
    u32 i;
    u8 mask;

    bn_zero(d, n);
    d[n-1] = 1;
    for (i = 0; i < en; i++)
	for ( mask = 0x80; mask != 0; mask >>= 1 )
	{
	    bn_mul(t, d, d, N, n);
	    if ((e[i] & mask) != 0)
		bn_mul(d, t, a, N, n);
	    else
		bn_copy(d, t, n);
	}
}

//
///////////////////////////////////////////////////////////////////////////////
///////////////			cert helpers			///////////////
///////////////////////////////////////////////////////////////////////////////

ccp cert_get_status_message
(
    cert_stat_t		stat,		// status
    ccp			ret_invalid	// return value if 'stat' unknown
)
{
    switch (stat)
    {
	case CERT_SIG_OK:		return "Signature ok";
	case CERT_SIG_FAKE_SIGNED:	return "Signature ok but fake signed";
	case CERT_HASH_FAILED:		return "Signature ok but hash failed";

	case CERT_HASH_OK:		return "Signature wrong but hash is ok";
	case CERT_FAKE_SIGNED:		return "Signature wrong but fake signed";
	case CERT_SIG_FAILED:		return "Signature wrong";

	case CERT_ERR_TYPE_MISSMATCH:	return "Different types of signature and key";
	case CERT_ERR_NOT_SUPPORTED:	return "This kind of signature is not supported";
	case CERT_ERR_NOT_FOUND:	return "Certificate not found";
	case CERT_ERR_INVALID_SIG:	return "Signature is invalid";
    }

    return ret_invalid;
};
 
///////////////////////////////////////////////////////////////////////////////

ccp cert_get_status_name
(
    cert_stat_t		stat,		// status
    ccp			ret_invalid	// return value if 'stat' unknown
)
{
    switch (stat)
    {
	case CERT_SIG_OK:		return "OK";
	case CERT_SIG_FAKE_SIGNED:	return "SIG FAKE SIGNED";
	case CERT_HASH_FAILED:		return "HASH FAILED";

	case CERT_HASH_OK:		return "HASH OK";
	case CERT_FAKE_SIGNED:		return "FAKE SIGNED";
	case CERT_SIG_FAILED:		return "SIG FAILED";

	case CERT_ERR_TYPE_MISSMATCH:	return "CERT TYPE MISMATCH";
	case CERT_ERR_NOT_SUPPORTED:	return "CERT TYPE NOT SUPPORTED";
	case CERT_ERR_NOT_FOUND:	return "CERT NOT FOUND";
	case CERT_ERR_INVALID_SIG:	return "SIG INVALID";
    }

    return ret_invalid;
};
 
///////////////////////////////////////////////////////////////////////////////

ccp cert_get_signature_name
(
    u32			sig_type,	// signature type
    ccp			ret_invalid	// return value if 'sig_type' unknown
)
{
    switch (sig_type)
    {
	case 0x10000:	return "RSA-4096";
	case 0x10001:	return "RSA-2048";
	case 0x10002:	return "Elliptic Curve";
    }
    return ret_invalid;
}

///////////////////////////////////////////////////////////////////////////////

int cert_get_signature_size // returns NULL for unknown 'sig_type'
(
    u32			sig_type	// signature type
)
{
    switch (sig_type)
    {
	case 0x10000:	return 0x200;
	case 0x10001:	return 0x100;
	case 0x10002:	return 0x040;
    }
    return 0;
}

///////////////////////////////////////////////////////////////////////////////

int cert_get_pubkey_size // returns NULL for unknown 'sig_type'
(
    u32			key_type	// signature type
)
{
    return cert_get_signature_size(key_type|0x10000);
}

///////////////////////////////////////////////////////////////////////////////

cert_data_t * cert_get_data // return NULL if invalid
(
    const void		* head		// NULL or pointer to cert header (cert_head_t)
)
{
    cert_data_t * data = 0;
    if (head)
    {
	const u32 sig_size = cert_get_signature_size(be32(head));
	if (sig_size)
	{
	    const u32 head_size = ALIGN32( sig_size + sizeof(cert_head_t), WII_CERT_ALIGN );
	    data = (cert_data_t*)( (u8*)head + head_size );
	}
    }
    return data;
}

///////////////////////////////////////////////////////////////////////////////

cert_head_t * cert_get_next_head // return NULL if invalid
(
    const void		* data		// NULL or pointer to cert data (cert_data_t)
)
{
    cert_head_t * head = 0;
    if (data)
    {
	const cert_data_t * cdata = data;
	const int key_size = cert_get_pubkey_size(ntohl(cdata->key_type));
	if (key_size)
	{
	    const u32 data_size = ALIGN32( key_size + sizeof(cert_data_t), WII_CERT_ALIGN );
	    head = (cert_head_t*)( (u8*)data + data_size );
	}
    }
    return head;
}

//
///////////////////////////////////////////////////////////////////////////////
///////////////			root cert			///////////////
///////////////////////////////////////////////////////////////////////////////

cert_item_t * cert_append_item
(
    cert_chain_t	* cc,		// valid pointer to cert chain
    ccp			issuer,		// NULL or pointer to issuer
    ccp			key_id,		// valid pointer to key id
    bool		uniq		// true: avoid duplicates
)
{
    DASSERT(cc);
    DASSERT( key_id && key_id );

    cert_item_t * item;
    char name[sizeof(item->name)];
    if ( issuer && *issuer )
	snprintf(name,sizeof(name),"%s-%s",issuer,key_id);
    else
	snprintf(name,sizeof(name),"%s",key_id);

    if (uniq)
    {
	// search for item with identical name

	int i;
	for ( i = 0; i < cc->used; i++ )
	{
	    item = cc->cert + i;
	    if (!strcmp(name,item->name))
	    {
		FREE((void*)item->head);
		goto found;
	    }
	}
    }

    if ( cc->used == cc->size )
    {
	cc->size = 2 * cc->size + 5;
	cc->cert = REALLOC(cc->cert,cc->size*sizeof(*cc->cert));
    }

    item = cc->cert + cc->used++;

 found:
    memset(item,0,sizeof(*item));
    memcpy(item->name,name,sizeof(item->name));
    return item;
}

///////////////////////////////////////////////////////////////////////////////

void cert_add_root()
{
    static bool done = false;
    if (!done)
    {
	done = true;
	setup_cert_data();

	cert_item_t * item = cert_append_item(&global_cert,0,"Root",true);
	DASSERT(item);

	item->data	= &root_cert;
	item->key_size	= cert_get_pubkey_size(ntohl(root_cert.key_type));
	item->data_size	= sizeof(root_cert);
	item->cert_size	= sizeof(root_cert);
    }
}

//
///////////////////////////////////////////////////////////////////////////////
///////////////			certificate chain		///////////////
///////////////////////////////////////////////////////////////////////////////

cert_chain_t global_cert = {0};

///////////////////////////////////////////////////////////////////////////////

cert_chain_t * cert_initialize
(
    cert_chain_t	* cc		// NULL or pointer to structure
					// if NULL: alloc data
)
{
    if (!cc)
	cc = MALLOC(sizeof(*cc));
    memset(cc,0,sizeof(*cc));
    return cc;
}

///////////////////////////////////////////////////////////////////////////////

void cert_reset
(
    cert_chain_t	* cc		// valid pointer to cert chain
)
{
    DASSERT(cc);
    int i;
    for ( i = 0; i < cc->used; i++ )
	FREE((void*)cc->cert[i].head);
    FREE(cc->cert);
    cert_initialize(cc);
}

///////////////////////////////////////////////////////////////////////////////

int cert_append_data
(
    cert_chain_t	* cc,		// valid pointer to cert chain
    const void		* data,		// NULL or pointer to cert data
    size_t		data_size,	// size of 'data'
    bool		uniq		// true: avoid duplicates
)
{
    DASSERT(cc);
    TRACE("cert_append_data(%p,%p,%zu,%d) n=%u/%u\n",
		cc, data, data_size, uniq, cc->used, cc->size );

    if ( cc == &global_cert )
	cert_add_root();

    const int start_count = cc->used;
    if ( data && data_size > 0 )
    {
	//--- analyze cert data

	const u8 * ptr = data;
	const u8 * end = ptr + data_size;
	while ( ptr < end )
	{
	    // [[2do]]
	    const u8 * start = ptr;
	    const cert_head_t * head = (cert_head_t*)ptr;
	    const cert_data_t * data = cert_get_data(head);
	    if (!data)
		break;
	    ptr = (u8*)cert_get_next_head(data);
	    if ( !ptr || ptr > end )
		break;

	    cert_item_t * item
		= cert_append_item( cc, data->issuer, data->key_id, uniq );
	    DASSERT(item);
	    item->sig_size	= cert_get_signature_size(ntohl(head->sig_type));
	    item->key_size	= cert_get_pubkey_size(ntohl(data->key_type));
	    item->data_size	= ptr - (u8*)data;
	    item->cert_size	= ptr - start;

	    const u8 * raw	= MEMDUP(start,item->cert_size);
	    item->head		= (cert_head_t*)raw;
	    item->data		= (cert_data_t*)( raw + ( (u8*)data - start ));

	    TRACE("s=%04x k=%04x : d=%04x c=%04x : t=%08x,%08x : %s . %s\n",
			item->sig_size, item->key_size,
			item->data_size, item->cert_size,
			ntohl(head->sig_type), ntohl(data->key_type),
			data->issuer, data->key_id );
	}
    }

    TRACE("N-CERT=%u->%u/%u\n",start_count,cc->used,cc->size);
    return cc->used - start_count;
}

///////////////////////////////////////////////////////////////////////////////

int cert_append_file
(
    cert_chain_t	* cc,		// valid pointer to cert chain
    ccp			filename,	// name of file
    bool		uniq		// true: avoid duplicates
)
{
    DASSERT(cc);
    char buf[0x10000];

    FILE * f = fopen(filename,"rb");
    if (!f)
	return -1;

    size_t stat = fread(buf,1,sizeof(buf),f);
    fclose(f);
    return stat ? cert_append_data(cc,buf,stat,uniq) : 0;
}

//
///////////////////////////////////////////////////////////////////////////////
///////////////			check certificate		///////////////
///////////////////////////////////////////////////////////////////////////////

cert_stat_t cert_check
(
    const cert_chain_t	* cc,		// NULL or pointer to cert chain
    const void		* sig_data,	// pointer to signature data
    u32			sig_data_size,	// size of 'sig_data'
    const cert_item_t	** cert_found	// not NULL: return value: found certificate
)
{
    TRACE("\n--- cert_check(%p,%p,%x=%u)\n", cc, sig_data, sig_data_size, sig_data_size );

    if (cert_found)
	*cert_found = 0;


    //--- is sig valid?

    if ( !sig_data || sig_data_size <= WII_CERT_ALIGN )
	return CERT_ERR_INVALID_SIG;

    if (!cert_get_signature_size(be32(sig_data)))
	return CERT_ERR_NOT_SUPPORTED;

    //HEXDUMP16(0,0,sig_data,16);
    const cert_head_t * head = sig_data;
    const cert_data_t * data = cert_get_data(sig_data);
    if (!data)
	return CERT_ERR_INVALID_SIG;

    const int test_data_size = sig_data_size - ( (u8*)data - (u8*)head );
    if ( test_data_size <= WII_CERT_ALIGN )
	return 0;

    TRACE("VALID: %s . %s\n", data->issuer, data->key_id );


    //--- find parent key in chain

    if (!cc)
	cc = &global_cert;

    for(;;)
    {    
	if ( cc == &global_cert )
	    cert_add_root();

	int c;
	for ( c = 0; c < cc->used; c++ )
	{
	    cert_item_t * item = cc->cert + c;
	    if (!strcmp(data->issuer,item->name))
	    {
		TRACE("FOUND: %s . %s [%s]\n",
			    item->data->issuer, item->data->key_id,
			    item->head
				? cert_get_signature_name(ntohl(item->head->sig_type),"?")
				: "?" );
		if (cert_found)
		    *cert_found = item;

		const u32 key_type = ntohl(item->data->key_type);
		const u32 sig_type = ntohl(head->sig_type);
		noPRINT("%x %x %x\n",key_type,key_type|0x10000,sig_type);
		if ( (key_type|0x10000) != sig_type )
		    return CERT_ERR_TYPE_MISSMATCH;

		u8 hash[WII_HASH_SIZE];
		SHA1((u8*)data,test_data_size,hash);
		//PRINT("HASH: "); HEXDUMP(0,0,0,-WII_HASH_SIZE,hash,WII_HASH_SIZE);

		u8 buf[0x200];
		const int sig_len = cert_get_signature_size(sig_type);
		if ( sig_len > sizeof(buf) )
		    return CERT_ERR_TYPE_MISSMATCH;
		const u8 * key = item->data->public_key;
		bn_exp(buf,head->sig_data,key,sig_len,key+sig_len,4);
		//HEXDUMP16(0,0,buf,sig_len);

		static const u8 ber[16] = { 0x00,0x30,0x21,0x30,0x09,0x06,0x05,0x2b,
					    0x0e,0x03,0x02,0x1a,0x05,0x00,0x04,0x14 };
		const int ber_index = sig_len - 36;
		const u8 * h = buf + sig_len - WII_HASH_SIZE;

		if (   buf[0] == 0x00
		    && buf[1] == 0x01
		    && buf[2] == 0xff
		    && !memcmp(buf+2,buf+3,sig_len-ber_index-3)
		    && !memcmp(buf+ber_index,ber,sizeof(ber))
		)
		{
		    return !memcmp(h,hash,WII_HASH_SIZE)
			    ? CERT_SIG_OK
			    : !strncmp((ccp)h,(ccp)hash,WII_HASH_SIZE)
				    ? CERT_SIG_FAKE_SIGNED
				    : CERT_HASH_FAILED;
		}

		return !memcmp(h,hash,WII_HASH_SIZE)
			? CERT_HASH_OK
			: !strncmp((ccp)h,(ccp)hash,WII_HASH_SIZE)
				? CERT_FAKE_SIGNED
				: CERT_SIG_FAILED;
	    }
	}
	if ( cc == &global_cert )
	    return CERT_ERR_NOT_FOUND;
	cc = &global_cert;
    }
}

///////////////////////////////////////////////////////////////////////////////

cert_stat_t cert_check_cert
(
    const cert_chain_t	* cc,		// valid pointer to cert chain
    const cert_item_t	* item,		// NULL or pointer to certificate data
    const cert_item_t	** cert_found	// not NULL: return value: found certificate
)
{
    if ( !item || !item->head )
    {
	if (cert_found)
	    *cert_found = 0;
	return CERT_ERR_INVALID_SIG;
    }

    return cert_check(cc,item->head,item->cert_size,cert_found);
};

///////////////////////////////////////////////////////////////////////////////

cert_stat_t cert_check_ticket
(
    const cert_chain_t	* cc,		// valid pointer to cert chain
    const wd_ticket_t	* ticket,	// NULL or pointer to ticket
    const cert_item_t	** cert_found	// not NULL: return value: found certificate
)
{
    if (!ticket)
    {
	if (cert_found)
	    *cert_found = 0;
	return CERT_ERR_INVALID_SIG;
    }

    return cert_check(cc,ticket,sizeof(*ticket),cert_found);
};

///////////////////////////////////////////////////////////////////////////////

cert_stat_t cert_check_tmd
(
    const cert_chain_t	* cc,		// valid pointer to cert chain
    const wd_tmd_t	* tmd,		// NULL or pointer to tmd
    const cert_item_t	** cert_found	// not NULL: return value: found certificate
)
{
    if (!tmd)
    {
	if (cert_found)
	    *cert_found = 0;
	return CERT_ERR_INVALID_SIG;
    }

    const int tmd_size	= sizeof(wd_tmd_t)
			+ ntohs(tmd->n_content) * sizeof(wd_tmd_content_t);
    return cert_check(cc,tmd,tmd_size,cert_found);
};

//
///////////////////////////////////////////////////////////////////////////////
///////////////			    etc				///////////////
///////////////////////////////////////////////////////////////////////////////

u32 cert_fake_sign 
(
    cert_item_t		* item		// pointer to certificate
)
{
    DASSERT(item);
    if (!item->head)
	return 0;

    memset((u8*)item->head->sig_data,0,item->sig_size);

    u8 * addr = (u8*)item->data->public_key + item->key_size + 4;
    if ( addr > (u8*)item->data + item->data_size - 4 )
    {
	addr = (u8*)item->data->key_id + sizeof(item->data->key_id) - 4;
	addr[-1] = 0;
    }

    u32 val = 0;
    u8 hash[WII_HASH_SIZE];
    do
    {
	memcpy(addr,&val,sizeof(val));
	SHA1((u8*)item->data,item->data_size,hash);
	if (!*hash)
	    break;
	val++;

    } while (val);
    return val; 
}

//
///////////////////////////////////////////////////////////////////////////////
///////////////			    END				///////////////
///////////////////////////////////////////////////////////////////////////////

