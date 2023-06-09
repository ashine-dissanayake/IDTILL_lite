#include "Arduino.h"
#include <M5Core2.h>

const uint16_t epd_bitmap_quiz [] PROGMEM = {
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3229, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 
	0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x2a29, 0x3209, 0x3228, 
	0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 0x2a28, 
	0x2a28, 0x2a28, 0x2a28, 0x3208, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3229, 0x41e8, 0xa8c3, 0xa8e3, 0xa8e3, 
	0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8e3, 0xa8c3, 
	0x3228, 0x4209, 0xa8cf, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 
	0xa8ee, 0xa8ee, 0xa8ee, 0xa8ee, 0xa8ce, 0x3a08, 0x3208, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8c3, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0x8144, 0xa0ef, 0xf814, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 
	0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf814, 0x910d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 
	0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 
	0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 
	0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf812, 
	0xf812, 0xf812, 0xf813, 0xf813, 0xf813, 0xf812, 0xf812, 0xf812, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf861, 0xfc71, 0xfd96, 
	0xfdb6, 0xfd96, 0xfc71, 0xf841, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 
	0xf812, 0xfbf9, 0xfd7b, 0xfa77, 0xf812, 0xf813, 0xf812, 0xfc39, 0xfd7b, 0xfa16, 0xf812, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 
	0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf965, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf882, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 
	0xf813, 0xf813, 0xf812, 0xfe9d, 0xffff, 0xfc19, 0xf812, 0xf813, 0xf812, 0xff3e, 0xffff, 0xfb98, 0xf812, 0xf813, 0xf813, 0xf813, 
	0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xfe9a, 0xffff, 0xfefb, 0xf945, 0xf924, 0xf965, 0xff9e, 0xffff, 0xfd75, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 
	0xf813, 0xf813, 0xf813, 0xf813, 0xf812, 0xfe5d, 0xffff, 0xfbd9, 0xf812, 0xf813, 0xf812, 0xfede, 0xffff, 0xfb58, 0xf812, 0xf813, 
	0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xffff, 0xffff, 0xfa8a, 0xf800, 0xf800, 0xf800, 0xfbcf, 0xffff, 0xfedb, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 0xf812, 0xfe5d, 0xffff, 0xfbd9, 0xf812, 0xf813, 0xf812, 0xfede, 0xffff, 0xfb58, 
	0xf812, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xfa49, 0xf800, 0xf800, 0xf800, 0xfb8e, 0xffff, 0xff1c, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 0xf812, 0xfe5d, 0xffff, 0xfbd9, 0xf812, 0xf813, 0xf812, 0xfede, 
	0xffff, 0xfb58, 0xf812, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 
	0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xfa28, 0xf800, 0xfa08, 0xf924, 0xfaeb, 0xffff, 0xff1c, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 0xf812, 0xfe5d, 0xffff, 0xfbd9, 0xf812, 0xf813, 
	0xf812, 0xfede, 0xffff, 0xfb58, 0xf812, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xfa49, 0xf800, 0xffff, 0xffff, 0xfeba, 0xffff, 
	0xfefb, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 0xf812, 0xfe5d, 0xffff, 0xfbb9, 
	0xf812, 0xf813, 0xf811, 0xfebd, 0xffff, 0xfb58, 0xf812, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xff9e, 0xffff, 0xfc51, 0xf800, 0xf800, 0xfcf3, 
	0xffff, 0xffff, 0xfdb6, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 0xf812, 0xfe3d, 
	0xffff, 0xfcba, 0xf810, 0xf811, 0xf810, 0xffdf, 0xffff, 0xfb18, 0xf812, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfc51, 0xffff, 0xffff, 0xff9e, 
	0xff1c, 0xff9e, 0xffff, 0xffff, 0xffff, 0xfacb, 0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 
	0xf812, 0xfc9a, 0xffff, 0xffff, 0xffbf, 0xff1e, 0xffff, 0xffff, 0xffff, 0xf8f4, 0xf812, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 
	0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfd14, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfb4d, 0xfe9a, 0xf841, 0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 
	0xf813, 0xf813, 0xf813, 0xf812, 0xfdbc, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfb18, 0xf812, 0xf813, 0xf813, 0xf813, 0xf813, 
	0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 
	0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf812, 0xf811, 0xf812, 0xf812, 0xf812, 0xf811, 0xf812, 0xf813, 0xf813, 0xf813, 
	0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 
	0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 0xa8e3, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0x8144, 0x990f, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 
	0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0x892d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x2a29, 
	0xa8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0x8144, 0x990f, 0xf814, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 
	0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xf814, 0x912d, 0x2a28, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x2a29, 0x98e3, 0xf000, 0xe800, 0xe800, 0xe800, 0xe800, 0xe800, 0xe800, 0xe800, 0xe800, 0xe800, 0xe800, 0xe800, 0xe800, 
	0xe800, 0xe800, 0xe800, 0xe800, 0xe800, 0xf800, 0x7144, 0x90ed, 0xf010, 0xe810, 0xe810, 0xe810, 0xe810, 0xe810, 0xe810, 0xe810, 
	0xe810, 0xe810, 0xe810, 0xe810, 0xe810, 0xe810, 0xe810, 0xe810, 0xe810, 0xe810, 0xf810, 0x812c, 0x3228, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3209, 0x3a08, 0x80c3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 
	0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x80e3, 0x3229, 0x3209, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 
	0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x70ec, 0x3228, 0x3a08, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a08, 0x324a, 0x0cb7, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 
	0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x0c96, 0x3209, 0x4228, 0xa443, 0x9c23, 0x9c23, 0x9c23, 
	0x9c23, 0x9c23, 0x9c23, 0x9c23, 0x9c23, 0x9c23, 0x9c23, 0x9c23, 0x9c23, 0x9c23, 0x9c23, 0x9c23, 0x9c23, 0x9c23, 0xa423, 0x3a08, 
	0x3209, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1496, 0x06bf, 0x067f, 0x067f, 0x067f, 0x067f, 0x067f, 0x067f, 
	0x067f, 0x067f, 0x067f, 0x067f, 0x067f, 0x067f, 0x067f, 0x067f, 0x067f, 0x067f, 0x067f, 0x06df, 0x13d4, 0xb3e2, 0xfde0, 0xfdc0, 
	0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 0xfdc0, 
	0xfe00, 0x93a4, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 
	0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 
	0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 
	0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 
	0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 
	0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 
	0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 
	0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x061f, 0x061f, 0x061f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 
	0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd60, 0xfd40, 0xfd40, 0xfd40, 0xfd40, 0xfd40, 0xfd40, 
	0xfd40, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 
	0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x061f, 0x9f5f, 0xffff, 0xaf5f, 0x061f, 0x063f, 0x063f, 0x063f, 
	0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd60, 0xfe27, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xfdc3, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x061f, 0x9f5f, 0xffff, 0xaf7f, 0x061f, 0x063f, 
	0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd60, 0xfe28, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfdc4, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x061f, 0x9f5f, 0xffff, 0xaf5f, 
	0x061f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd60, 
	0xfd40, 0xfd40, 0xfd20, 0xfd20, 0xffff, 0xffff, 0xff99, 0xfd40, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x061f, 0x9f5f, 
	0xffff, 0xaf5f, 0x061f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 
	0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd40, 0xffff, 0xffff, 0xfffe, 0xfd40, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 
	0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 
	0x061f, 0x9f5f, 0xffff, 0xaf5f, 0x061f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 
	0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd20, 0xff9a, 0xffff, 0xffff, 0xfd60, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 
	0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 
	0x063f, 0x063f, 0x061f, 0x9f5f, 0xffff, 0xaf5f, 0x061f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 
	0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd40, 0xff13, 0xffff, 0xffff, 0xfdc2, 0xfd60, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 
	0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 
	0x063f, 0x063f, 0x063f, 0x063f, 0x061f, 0x9f5f, 0xffff, 0xaf5f, 0x061f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 
	0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd40, 0xfe8c, 0xffff, 0xffff, 0xfe07, 0xfd40, 0xfd80, 0xfd80, 0xfd80, 
	0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 
	0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x061f, 0x9f5f, 0xffff, 0xaf5f, 0x061f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 
	0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd60, 0xfe06, 0xffff, 0xffff, 0xfed1, 0xfd80, 0xfdc2, 0xfdc2, 
	0xfdc3, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 
	0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x061f, 0xa75f, 0xffff, 0xaf7f, 0x061f, 0x063f, 0x063f, 0x063f, 
	0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd60, 0xff13, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xfe05, 0xfd60, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x771f, 0xd7bf, 0x7f1f, 0x061f, 0x063f, 
	0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd60, 0xfe8d, 0xff79, 0xff57, 
	0xff57, 0xff57, 0xff57, 0xff57, 0xff9a, 0xfdc3, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x061f, 0x061f, 
	0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd60, 
	0xfd40, 0xfd40, 0xfd40, 0xfd40, 0xfd40, 0xfd40, 0xfd40, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 0x29e9, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 
	0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 0xfd80, 0xfd80, 
	0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfdc0, 0x8b85, 
	0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c75, 0x067f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 
	0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x063f, 0x069f, 0x13b3, 0xabc2, 0xfdc0, 0xfd80, 
	0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 0xfd80, 
	0xfdc0, 0x8b85, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39c7, 0x1c96, 0x069f, 0x065f, 0x065f, 0x065f, 0x065f, 
	0x065f, 0x065f, 0x065f, 0x065f, 0x065f, 0x065f, 0x065f, 0x065f, 0x065f, 0x065f, 0x065f, 0x065f, 0x065f, 0x06bf, 0x13b3, 0xabe2, 
	0xfdc0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 0xfda0, 
	0xfda0, 0xfda0, 0xfde0, 0x93a5, 0x29e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x39e7, 0x1bd3, 0x057d, 0x055b, 0x055b, 
	0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x055b, 0x059d, 
	0x1351, 0x9b42, 0xecc0, 0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 
	0xe4a0, 0xe4a0, 0xe4a0, 0xe4a0, 0xf4e0, 0x7b24, 0x31e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a08, 0x3a08, 0x1b50, 
	0x1b50, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 0x2350, 
	0x1b50, 0x1b50, 0x39e8, 0x3208, 0x7b24, 0x7b05, 0x7b05, 0x7b05, 0x7b05, 0x7b05, 0x7b05, 0x7b05, 0x7b05, 0x7b05, 0x7b05, 0x7b05, 
	0x7b05, 0x7b05, 0x7b05, 0x7b05, 0x7b05, 0x7b05, 0x7b04, 0x31e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a08, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x39e8, 
	0x39e8, 0x39e8, 0x39e8, 0x39e8, 0x3a08, 0x3209, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 
	0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x31e9, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 0x3a09, 
	0x3a09, 0x3a09, 0x3a09, 0x3a09
};