/* Configuration for the Xtensa architecture for GDB, the GNU debugger.

   Copyright (c) 2003-2010 Tensilica Inc.

   Permission is hereby granted, free of charge, to any person obtaining
   a copy of this software and associated documentation files (the
   "Software"), to deal in the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
   IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
   CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.  */

#define XTENSA_CONFIG_VERSION 0x60

#include "defs.h"
#include "xtensa-config.h"
#include "xtensa-tdep.h"



/* Masked registers.  */
xtensa_reg_mask_t xtensa_submask0[] = { { 42, 0, 4 } };
const xtensa_mask_t xtensa_mask0 = { 1, xtensa_submask0 };
xtensa_reg_mask_t xtensa_submask1[] = { { 42, 5, 1 } };
const xtensa_mask_t xtensa_mask1 = { 1, xtensa_submask1 };
xtensa_reg_mask_t xtensa_submask2[] = { { 42, 18, 1 } };
const xtensa_mask_t xtensa_mask2 = { 1, xtensa_submask2 };
xtensa_reg_mask_t xtensa_submask3[] = { { 42, 6, 2 } };
const xtensa_mask_t xtensa_mask3 = { 1, xtensa_submask3 };
xtensa_reg_mask_t xtensa_submask4[] = { { 42, 4, 1 } };
const xtensa_mask_t xtensa_mask4 = { 1, xtensa_submask4 };
xtensa_reg_mask_t xtensa_submask5[] = { { 42, 16, 2 } };
const xtensa_mask_t xtensa_mask5 = { 1, xtensa_submask5 };
xtensa_reg_mask_t xtensa_submask6[] = { { 42, 8, 4 } };
const xtensa_mask_t xtensa_mask6 = { 1, xtensa_submask6 };
xtensa_reg_mask_t xtensa_submask7[] = { { 37, 12, 20 } };
const xtensa_mask_t xtensa_mask7 = { 1, xtensa_submask7 };
xtensa_reg_mask_t xtensa_submask8[] = { { 37, 0, 1 } };
const xtensa_mask_t xtensa_mask8 = { 1, xtensa_submask8 };
xtensa_reg_mask_t xtensa_submask9[] = { { 45, 0, 32 }, { 46, 0, 8 } };
const xtensa_mask_t xtensa_mask9 = { 2, xtensa_submask9 };
xtensa_reg_mask_t xtensa_submask10[] = { { 94, 8, 4 } };
const xtensa_mask_t xtensa_mask10 = { 1, xtensa_submask10 };
xtensa_reg_mask_t xtensa_submask11[] = { { 54, 24, 8 } };
const xtensa_mask_t xtensa_mask11 = { 1, xtensa_submask11 };
xtensa_reg_mask_t xtensa_submask12[] = { { 54, 16, 8 } };
const xtensa_mask_t xtensa_mask12 = { 1, xtensa_submask12 };
xtensa_reg_mask_t xtensa_submask13[] = { { 54, 8, 8 } };
const xtensa_mask_t xtensa_mask13 = { 1, xtensa_submask13 };
xtensa_reg_mask_t xtensa_submask14[] = { { 55, 24, 1 } };
const xtensa_mask_t xtensa_mask14 = { 1, xtensa_submask14 };
xtensa_reg_mask_t xtensa_submask15[] = { { 55, 20, 1 } };
const xtensa_mask_t xtensa_mask15 = { 1, xtensa_submask15 };
xtensa_reg_mask_t xtensa_submask16[] = { { 55, 16, 2 } };
const xtensa_mask_t xtensa_mask16 = { 1, xtensa_submask16 };
xtensa_reg_mask_t xtensa_submask17[] = { { 56, 24, 1 } };
const xtensa_mask_t xtensa_mask17 = { 1, xtensa_submask17 };
xtensa_reg_mask_t xtensa_submask18[] = { { 56, 20, 1 } };
const xtensa_mask_t xtensa_mask18 = { 1, xtensa_submask18 };
xtensa_reg_mask_t xtensa_submask19[] = { { 56, 16, 2 } };
const xtensa_mask_t xtensa_mask19 = { 1, xtensa_submask19 };
xtensa_reg_mask_t xtensa_submask20[] = { { 52, 22, 10 } };
const xtensa_mask_t xtensa_mask20 = { 1, xtensa_submask20 };


/* Register map.  */
xtensa_register_t xtensa_rmap[] =
{
  /*    idx ofs bi sz al targno  flags cp typ group name  */
  XTREG(  0,  0,32, 4, 4,0x0020,0x0006,-2, 9,0x0100,pc,          0,0,0,0,0,0)
  XTREG(  1,  4,32, 4, 4,0x0100,0x0006,-2, 1,0x0002,ar0,         0,0,0,0,0,0)
  XTREG(  2,  8,32, 4, 4,0x0101,0x0006,-2, 1,0x0002,ar1,         0,0,0,0,0,0)
  XTREG(  3, 12,32, 4, 4,0x0102,0x0006,-2, 1,0x0002,ar2,         0,0,0,0,0,0)
  XTREG(  4, 16,32, 4, 4,0x0103,0x0006,-2, 1,0x0002,ar3,         0,0,0,0,0,0)
  XTREG(  5, 20,32, 4, 4,0x0104,0x0006,-2, 1,0x0002,ar4,         0,0,0,0,0,0)
  XTREG(  6, 24,32, 4, 4,0x0105,0x0006,-2, 1,0x0002,ar5,         0,0,0,0,0,0)
  XTREG(  7, 28,32, 4, 4,0x0106,0x0006,-2, 1,0x0002,ar6,         0,0,0,0,0,0)
  XTREG(  8, 32,32, 4, 4,0x0107,0x0006,-2, 1,0x0002,ar7,         0,0,0,0,0,0)
  XTREG(  9, 36,32, 4, 4,0x0108,0x0006,-2, 1,0x0002,ar8,         0,0,0,0,0,0)
  XTREG( 10, 40,32, 4, 4,0x0109,0x0006,-2, 1,0x0002,ar9,         0,0,0,0,0,0)
  XTREG( 11, 44,32, 4, 4,0x010a,0x0006,-2, 1,0x0002,ar10,        0,0,0,0,0,0)
  XTREG( 12, 48,32, 4, 4,0x010b,0x0006,-2, 1,0x0002,ar11,        0,0,0,0,0,0)
  XTREG( 13, 52,32, 4, 4,0x010c,0x0006,-2, 1,0x0002,ar12,        0,0,0,0,0,0)
  XTREG( 14, 56,32, 4, 4,0x010d,0x0006,-2, 1,0x0002,ar13,        0,0,0,0,0,0)
  XTREG( 15, 60,32, 4, 4,0x010e,0x0006,-2, 1,0x0002,ar14,        0,0,0,0,0,0)
  XTREG( 16, 64,32, 4, 4,0x010f,0x0006,-2, 1,0x0002,ar15,        0,0,0,0,0,0)
  XTREG( 17, 68,32, 4, 4,0x0110,0x0006,-2, 1,0x0002,ar16,        0,0,0,0,0,0)
  XTREG( 18, 72,32, 4, 4,0x0111,0x0006,-2, 1,0x0002,ar17,        0,0,0,0,0,0)
  XTREG( 19, 76,32, 4, 4,0x0112,0x0006,-2, 1,0x0002,ar18,        0,0,0,0,0,0)
  XTREG( 20, 80,32, 4, 4,0x0113,0x0006,-2, 1,0x0002,ar19,        0,0,0,0,0,0)
  XTREG( 21, 84,32, 4, 4,0x0114,0x0006,-2, 1,0x0002,ar20,        0,0,0,0,0,0)
  XTREG( 22, 88,32, 4, 4,0x0115,0x0006,-2, 1,0x0002,ar21,        0,0,0,0,0,0)
  XTREG( 23, 92,32, 4, 4,0x0116,0x0006,-2, 1,0x0002,ar22,        0,0,0,0,0,0)
  XTREG( 24, 96,32, 4, 4,0x0117,0x0006,-2, 1,0x0002,ar23,        0,0,0,0,0,0)
  XTREG( 25,100,32, 4, 4,0x0118,0x0006,-2, 1,0x0002,ar24,        0,0,0,0,0,0)
  XTREG( 26,104,32, 4, 4,0x0119,0x0006,-2, 1,0x0002,ar25,        0,0,0,0,0,0)
  XTREG( 27,108,32, 4, 4,0x011a,0x0006,-2, 1,0x0002,ar26,        0,0,0,0,0,0)
  XTREG( 28,112,32, 4, 4,0x011b,0x0006,-2, 1,0x0002,ar27,        0,0,0,0,0,0)
  XTREG( 29,116,32, 4, 4,0x011c,0x0006,-2, 1,0x0002,ar28,        0,0,0,0,0,0)
  XTREG( 30,120,32, 4, 4,0x011d,0x0006,-2, 1,0x0002,ar29,        0,0,0,0,0,0)
  XTREG( 31,124,32, 4, 4,0x011e,0x0006,-2, 1,0x0002,ar30,        0,0,0,0,0,0)
  XTREG( 32,128,32, 4, 4,0x011f,0x0006,-2, 1,0x0002,ar31,        0,0,0,0,0,0)
  XTREG( 33,132,32, 4, 4,0x0200,0x0006,-2, 2,0x1100,lbeg,        0,0,0,0,0,0)
  XTREG( 34,136,32, 4, 4,0x0201,0x0006,-2, 2,0x1100,lend,        0,0,0,0,0,0)
  XTREG( 35,140,32, 4, 4,0x0202,0x0006,-2, 2,0x1100,lcount,      0,0,0,0,0,0)
  XTREG( 36,144, 6, 4, 4,0x0203,0x0006,-2, 2,0x1100,sar,         0,0,0,0,0,0)
  XTREG( 37,148,32, 4, 4,0x0205,0x0006,-2, 2,0x1100,litbase,     0,0,0,0,0,0)
  XTREG( 38,152, 3, 4, 4,0x0248,0x0006,-2, 2,0x1002,windowbase,  0,0,0,0,0,0)
  XTREG( 39,156, 8, 4, 4,0x0249,0x0006,-2, 2,0x1002,windowstart, 0,0,0,0,0,0)
  XTREG( 40,160,32, 4, 4,0x02b0,0x0002,-2, 2,0x1000,sr176,       0,0,0,0,0,0)
  XTREG( 41,164,32, 4, 4,0x02d0,0x0002,-2, 2,0x1000,sr208,       0,0,0,0,0,0)
  XTREG( 42,168,19, 4, 4,0x02e6,0x0006,-2, 2,0x1100,ps,          0,0,0,0,0,0)
  XTREG( 43,172,32, 4, 4,0x03e7,0x0006,-2, 3,0x0110,threadptr,   0,0,0,0,0,0)
  XTREG( 44,176,32, 4, 4,0x020c,0x0006,-1, 2,0x1100,scompare1,   0,0,0,0,0,0)
  XTREG( 45,180,32, 4, 4,0x0210,0x0006,-1, 2,0x1100,acclo,       0,0,0,0,0,0)
  XTREG( 46,184, 8, 4, 4,0x0211,0x0006,-1, 2,0x1100,acchi,       0,0,0,0,0,0)
  XTREG( 47,188,32, 4, 4,0x0220,0x0006,-1, 2,0x1100,m0,          0,0,0,0,0,0)
  XTREG( 48,192,32, 4, 4,0x0221,0x0006,-1, 2,0x1100,m1,          0,0,0,0,0,0)
  XTREG( 49,196,32, 4, 4,0x0222,0x0006,-1, 2,0x1100,m2,          0,0,0,0,0,0)
  XTREG( 50,200,32, 4, 4,0x0223,0x0006,-1, 2,0x1100,m3,          0,0,0,0,0,0)
  XTREG( 51,204,32, 4, 4,0x03e6,0x000e,-1, 3,0x0110,expstate,    0,0,0,0,0,0)
  XTREG( 52,208,32, 4, 4,0x0253,0x0007,-2, 2,0x1000,ptevaddr,    0,0,0,0,0,0)
  XTREG( 53,212,32, 4, 4,0x0259,0x000d,-2, 2,0x1000,mmid,        0,0,0,0,0,0)
  XTREG( 54,216,32, 4, 4,0x025a,0x0007,-2, 2,0x1000,rasid,       0,0,0,0,0,0)
  XTREG( 55,220,25, 4, 4,0x025b,0x0007,-2, 2,0x1000,itlbcfg,     0,0,0,0,0,0)
  XTREG( 56,224,25, 4, 4,0x025c,0x0007,-2, 2,0x1000,dtlbcfg,     0,0,0,0,0,0)
  XTREG( 57,228, 2, 4, 4,0x0260,0x0007,-2, 2,0x1000,ibreakenable,0,0,0,0,0,0)
  XTREG( 58,232, 6, 4, 4,0x0263,0x0007,-2, 2,0x1000,atomctl,     0,0,0,0,0,0)
  XTREG( 59,236,32, 4, 4,0x0268,0x0007,-2, 2,0x1000,ddr,         0,0,0,0,0,0)
  XTREG( 60,240,32, 4, 4,0x0280,0x0007,-2, 2,0x1000,ibreaka0,    0,0,0,0,0,0)
  XTREG( 61,244,32, 4, 4,0x0281,0x0007,-2, 2,0x1000,ibreaka1,    0,0,0,0,0,0)
  XTREG( 62,248,32, 4, 4,0x0290,0x0007,-2, 2,0x1000,dbreaka0,    0,0,0,0,0,0)
  XTREG( 63,252,32, 4, 4,0x0291,0x0007,-2, 2,0x1000,dbreaka1,    0,0,0,0,0,0)
  XTREG( 64,256,32, 4, 4,0x02a0,0x0007,-2, 2,0x1000,dbreakc0,    0,0,0,0,0,0)
  XTREG( 65,260,32, 4, 4,0x02a1,0x0007,-2, 2,0x1000,dbreakc1,    0,0,0,0,0,0)
  XTREG( 66,264,32, 4, 4,0x02b1,0x0007,-2, 2,0x1000,epc1,        0,0,0,0,0,0)
  XTREG( 67,268,32, 4, 4,0x02b2,0x0007,-2, 2,0x1000,epc2,        0,0,0,0,0,0)
  XTREG( 68,272,32, 4, 4,0x02b3,0x0007,-2, 2,0x1000,epc3,        0,0,0,0,0,0)
  XTREG( 69,276,32, 4, 4,0x02b4,0x0007,-2, 2,0x1000,epc4,        0,0,0,0,0,0)
  XTREG( 70,280,32, 4, 4,0x02b5,0x0007,-2, 2,0x1000,epc5,        0,0,0,0,0,0)
  XTREG( 71,284,32, 4, 4,0x02b6,0x0007,-2, 2,0x1000,epc6,        0,0,0,0,0,0)
  XTREG( 72,288,32, 4, 4,0x02b7,0x0007,-2, 2,0x1000,epc7,        0,0,0,0,0,0)
  XTREG( 73,292,32, 4, 4,0x02c0,0x0007,-2, 2,0x1000,depc,        0,0,0,0,0,0)
  XTREG( 74,296,19, 4, 4,0x02c2,0x0007,-2, 2,0x1000,eps2,        0,0,0,0,0,0)
  XTREG( 75,300,19, 4, 4,0x02c3,0x0007,-2, 2,0x1000,eps3,        0,0,0,0,0,0)
  XTREG( 76,304,19, 4, 4,0x02c4,0x0007,-2, 2,0x1000,eps4,        0,0,0,0,0,0)
  XTREG( 77,308,19, 4, 4,0x02c5,0x0007,-2, 2,0x1000,eps5,        0,0,0,0,0,0)
  XTREG( 78,312,19, 4, 4,0x02c6,0x0007,-2, 2,0x1000,eps6,        0,0,0,0,0,0)
  XTREG( 79,316,19, 4, 4,0x02c7,0x0007,-2, 2,0x1000,eps7,        0,0,0,0,0,0)
  XTREG( 80,320,32, 4, 4,0x02d1,0x0007,-2, 2,0x1000,excsave1,    0,0,0,0,0,0)
  XTREG( 81,324,32, 4, 4,0x02d2,0x0007,-2, 2,0x1000,excsave2,    0,0,0,0,0,0)
  XTREG( 82,328,32, 4, 4,0x02d3,0x0007,-2, 2,0x1000,excsave3,    0,0,0,0,0,0)
  XTREG( 83,332,32, 4, 4,0x02d4,0x0007,-2, 2,0x1000,excsave4,    0,0,0,0,0,0)
  XTREG( 84,336,32, 4, 4,0x02d5,0x0007,-2, 2,0x1000,excsave5,    0,0,0,0,0,0)
  XTREG( 85,340,32, 4, 4,0x02d6,0x0007,-2, 2,0x1000,excsave6,    0,0,0,0,0,0)
  XTREG( 86,344,32, 4, 4,0x02d7,0x0007,-2, 2,0x1000,excsave7,    0,0,0,0,0,0)
  XTREG( 87,348, 8, 4, 4,0x02e0,0x0007,-2, 2,0x1000,cpenable,    0,0,0,0,0,0)
  XTREG( 88,352,22, 4, 4,0x02e2,0x000b,-2, 2,0x1000,interrupt,   0,0,0,0,0,0)
  XTREG( 89,356,22, 4, 4,0x02e2,0x000d,-2, 2,0x1000,intset,      0,0,0,0,0,0)
  XTREG( 90,360,22, 4, 4,0x02e3,0x000d,-2, 2,0x1000,intclear,    0,0,0,0,0,0)
  XTREG( 91,364,22, 4, 4,0x02e4,0x0007,-2, 2,0x1000,intenable,   0,0,0,0,0,0)
  XTREG( 92,368,32, 4, 4,0x02e7,0x0007,-2, 2,0x1000,vecbase,     0,0,0,0,0,0)
  XTREG( 93,372, 6, 4, 4,0x02e8,0x0007,-2, 2,0x1000,exccause,    0,0,0,0,0,0)
  XTREG( 94,376,12, 4, 4,0x02e9,0x0003,-2, 2,0x1000,debugcause,  0,0,0,0,0,0)
  XTREG( 95,380,32, 4, 4,0x02ea,0x000f,-2, 2,0x1000,ccount,      0,0,0,0,0,0)
  XTREG( 96,384,32, 4, 4,0x02eb,0x0003,-2, 2,0x1000,prid,        0,0,0,0,0,0)
  XTREG( 97,388,32, 4, 4,0x02ec,0x000f,-2, 2,0x1000,icount,      0,0,0,0,0,0)
  XTREG( 98,392, 4, 4, 4,0x02ed,0x0007,-2, 2,0x1000,icountlevel, 0,0,0,0,0,0)
  XTREG( 99,396,32, 4, 4,0x02ee,0x0007,-2, 2,0x1000,excvaddr,    0,0,0,0,0,0)
  XTREG(100,400,32, 4, 4,0x02f0,0x000f,-2, 2,0x1000,ccompare0,   0,0,0,0,0,0)
  XTREG(101,404,32, 4, 4,0x02f1,0x000f,-2, 2,0x1000,ccompare1,   0,0,0,0,0,0)
  XTREG(102,408,32, 4, 4,0x02f2,0x000f,-2, 2,0x1000,ccompare2,   0,0,0,0,0,0)
  XTREG(103,412,32, 4, 4,0x02f4,0x0007,-2, 2,0x1000,misc0,       0,0,0,0,0,0)
  XTREG(104,416,32, 4, 4,0x02f5,0x0007,-2, 2,0x1000,misc1,       0,0,0,0,0,0)
  XTREG(105,420,32, 4, 4,0x0000,0x0006,-2, 8,0x0100,a0,          0,0,0,0,0,0)
  XTREG(106,424,32, 4, 4,0x0001,0x0006,-2, 8,0x0100,a1,          0,0,0,0,0,0)
  XTREG(107,428,32, 4, 4,0x0002,0x0006,-2, 8,0x0100,a2,          0,0,0,0,0,0)
  XTREG(108,432,32, 4, 4,0x0003,0x0006,-2, 8,0x0100,a3,          0,0,0,0,0,0)
  XTREG(109,436,32, 4, 4,0x0004,0x0006,-2, 8,0x0100,a4,          0,0,0,0,0,0)
  XTREG(110,440,32, 4, 4,0x0005,0x0006,-2, 8,0x0100,a5,          0,0,0,0,0,0)
  XTREG(111,444,32, 4, 4,0x0006,0x0006,-2, 8,0x0100,a6,          0,0,0,0,0,0)
  XTREG(112,448,32, 4, 4,0x0007,0x0006,-2, 8,0x0100,a7,          0,0,0,0,0,0)
  XTREG(113,452,32, 4, 4,0x0008,0x0006,-2, 8,0x0100,a8,          0,0,0,0,0,0)
  XTREG(114,456,32, 4, 4,0x0009,0x0006,-2, 8,0x0100,a9,          0,0,0,0,0,0)
  XTREG(115,460,32, 4, 4,0x000a,0x0006,-2, 8,0x0100,a10,         0,0,0,0,0,0)
  XTREG(116,464,32, 4, 4,0x000b,0x0006,-2, 8,0x0100,a11,         0,0,0,0,0,0)
  XTREG(117,468,32, 4, 4,0x000c,0x0006,-2, 8,0x0100,a12,         0,0,0,0,0,0)
  XTREG(118,472,32, 4, 4,0x000d,0x0006,-2, 8,0x0100,a13,         0,0,0,0,0,0)
  XTREG(119,476,32, 4, 4,0x000e,0x0006,-2, 8,0x0100,a14,         0,0,0,0,0,0)
  XTREG(120,480,32, 4, 4,0x000f,0x0006,-2, 8,0x0100,a15,         0,0,0,0,0,0)
  XTREG(121,484, 4, 4, 4,0x2008,0x0006,-2, 6,0x1010,psintlevel,
            0,0,&xtensa_mask0,0,0,0)
  XTREG(122,488, 1, 4, 4,0x2009,0x0006,-2, 6,0x1010,psum,
            0,0,&xtensa_mask1,0,0,0)
  XTREG(123,492, 1, 4, 4,0x200a,0x0006,-2, 6,0x1010,pswoe,
            0,0,&xtensa_mask2,0,0,0)
  XTREG(124,496, 2, 4, 4,0x200b,0x0006,-2, 6,0x1010,psring,
            0,0,&xtensa_mask3,0,0,0)
  XTREG(125,500, 1, 4, 4,0x200c,0x0006,-2, 6,0x1010,psexcm,
            0,0,&xtensa_mask4,0,0,0)
  XTREG(126,504, 2, 4, 4,0x200d,0x0006,-2, 6,0x1010,pscallinc,
            0,0,&xtensa_mask5,0,0,0)
  XTREG(127,508, 4, 4, 4,0x200e,0x0006,-2, 6,0x1010,psowb,
            0,0,&xtensa_mask6,0,0,0)
  XTREG(128,512,20, 4, 4,0x200f,0x0006,-2, 6,0x1010,litbaddr,
            0,0,&xtensa_mask7,0,0,0)
  XTREG(129,516, 1, 4, 4,0x2010,0x0006,-2, 6,0x1010,litben,
            0,0,&xtensa_mask8,0,0,0)
  XTREG(130,520,40, 8, 4,0x2011,0x0006,-2, 6,0x1010,acc,
            0,0,&xtensa_mask9,0,0,0)
  XTREG(131,528, 4, 4, 4,0x2016,0x0006,-2, 6,0x1010,dbnum,
            0,0,&xtensa_mask10,0,0,0)
  XTREG(132,532, 8, 4, 4,0x2017,0x0006,-2, 6,0x1010,asid3,
            0,0,&xtensa_mask11,0,0,0)
  XTREG(133,536, 8, 4, 4,0x2018,0x0006,-2, 6,0x1010,asid2,
            0,0,&xtensa_mask12,0,0,0)
  XTREG(134,540, 8, 4, 4,0x2019,0x0006,-2, 6,0x1010,asid1,
            0,0,&xtensa_mask13,0,0,0)
  XTREG(135,544, 1, 4, 4,0x201a,0x0006,-2, 6,0x1010,instpgszid6,
            0,0,&xtensa_mask14,0,0,0)
  XTREG(136,548, 1, 4, 4,0x201b,0x0006,-2, 6,0x1010,instpgszid5,
            0,0,&xtensa_mask15,0,0,0)
  XTREG(137,552, 2, 4, 4,0x201c,0x0006,-2, 6,0x1010,instpgszid4,
            0,0,&xtensa_mask16,0,0,0)
  XTREG(138,556, 1, 4, 4,0x201d,0x0006,-2, 6,0x1010,datapgszid6,
            0,0,&xtensa_mask17,0,0,0)
  XTREG(139,560, 1, 4, 4,0x201e,0x0006,-2, 6,0x1010,datapgszid5,
            0,0,&xtensa_mask18,0,0,0)
  XTREG(140,564, 2, 4, 4,0x201f,0x0006,-2, 6,0x1010,datapgszid4,
            0,0,&xtensa_mask19,0,0,0)
  XTREG_END
};



#ifdef XTENSA_CONFIG_INSTANTIATE
XTENSA_CONFIG_INSTANTIATE(xtensa_rmap,0)
#endif

xtensa_gdbarch_tdep xtensa_tdep (xtensa_rmap);
