#include "Arduino.h"
#include <M5Core2.h>

const uint16_t epd_bitmap_info [] PROGMEM = {
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf861, 0xf8c3, 0xf8a2, 0xf841, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xfa49, 0xfcf3, 0xff1c, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfe59, 
	0xfc10, 0xf924, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf945, 0xfdd7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xff1c, 0xfe38, 0xfdd7, 0xfdf7, 0xfe9a, 0xff9e, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfc51, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf965, 0xfefb, 0xffff, 0xffff, 0xffff, 0xfd55, 0xfa69, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf8e3, 0xfb6d, 0xfe9a, 0xffff, 0xffff, 0xffff, 0xfcf3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xfdb6, 0xffff, 0xffff, 0xff9e, 0xfa8a, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfc71, 0xffff, 0xffff, 0xffff, 0xfb0c, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf945, 0xffff, 0xffff, 0xffff, 0xfa49, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfcb2, 0xffff, 0xffff, 
	0xfe9a, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfb4d, 0xffff, 0xffff, 0xfd55, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf8a2, 0xffdf, 0xffff, 0xffff, 0xf841, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfc30, 0xffff, 0xffff, 0xfa69, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xfdb6, 0xffff, 0xffff, 0xf8c3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfbcf, 0xffff, 0xffff, 0xf904, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfc92, 0xffff, 0xffff, 0xf841, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfa49, 0xffff, 0xffff, 0xf8a2, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfc71, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf820, 0xffff, 0xffff, 0xf9a6, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfdb6, 0xffff, 0xfeba, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xff7d, 0xffff, 0xfc10, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xffbe, 0xffff, 0xfb6d, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfb2c, 0xffff, 0xff1c, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf841, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 
	0xf882, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfc92, 0xffff, 0xfd75, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfbcf, 
	0xffff, 0xfd34, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf945, 0xf8e3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xffff, 0xffff, 0xf820, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xfb6d, 0xffff, 0xffff, 0xffff, 0xffdf, 0xf861, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfc10, 0xffff, 0xfcd3, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xfa49, 0xffff, 0xfdf7, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf9e7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xfdd7, 0xffff, 0xfa08, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfcf3, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf8c3, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfdd7, 
	0xffff, 0xfa08, 0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfc51, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xf841, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xfa8a, 0xffff, 0xfd14, 0xf800, 0xf800, 0xf800, 0xf924, 0xffff, 0xfe38, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xfeba, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xff9e, 0xf800, 0xf800, 0xf800, 0xfb2c, 0xffff, 0xfbef, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfc92, 
	0xfe38, 0xfe18, 0xfbcf, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffdf, 0xffff, 0xf800, 0xf800, 0xf800, 0xfcd3, 0xffff, 0xfa49, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfe18, 0xffff, 0xf904, 0xf800, 0xf800, 0xfe18, 0xffff, 0xf904, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xfd14, 0xffff, 0xffff, 0xff7d, 0xffdf, 0xffff, 0xffff, 0xf8c3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfcb2, 0xffff, 0xfa49, 0xf800, 0xf800, 0xfeba, 
	0xffff, 0xf841, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xfb8e, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfbef, 0xffff, 0xfb0c, 0xf800, 
	0xf800, 0xff1c, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfaeb, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfb8e, 0xffff, 
	0xfb6d, 0xf800, 0xf800, 0xff1c, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf9e7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xfb8e, 0xffff, 0xfb4d, 0xf800, 0xf800, 0xfeba, 0xffff, 0xf841, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf9c7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffdf, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xfc10, 0xffff, 0xfaeb, 0xf800, 0xf800, 0xfdd7, 0xffff, 0xf924, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf965, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xff9e, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xfcf3, 0xffff, 0xfa08, 0xf800, 0xf800, 0xfc92, 0xffff, 0xfa8a, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf904, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xff3c, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfe79, 0xffff, 0xf8c3, 0xf800, 0xf800, 0xfacb, 0xffff, 0xfc71, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf8a2, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfeba, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf8a2, 0xffff, 0xfedb, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf8c3, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfeba, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf861, 0xffff, 0xff1c, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf8c3, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfeba, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfb2c, 0xffff, 0xfc71, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xfd34, 0xffff, 0xfacb, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf986, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xff9e, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfeba, 0xffff, 0xf945, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf965, 0xffff, 0xfefb, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf9a6, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xff9e, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf841, 0xffff, 
	0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffbe, 0xffff, 0xf924, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf9c7, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffdf, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xfd34, 0xffff, 0xfbcf, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfaaa, 0xffff, 0xfe79, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf9e7, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xf9e7, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfa08, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xfdf7, 0xffff, 0xfc30, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf9a6, 0xffff, 
	0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfa49, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf9a6, 0xffff, 0xffff, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xfdf7, 0xffff, 0xfdf7, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xfaaa, 0xfacb, 0xfaeb, 0xfaeb, 0xfaeb, 0xf9c7, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xf9c7, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xffff, 0xffff, 0xfbae, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xff5d, 0xffff, 0xfcf3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf8a2, 0xffff, 0xffff, 0xfa8a, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfe79, 0xffff, 0xff1c, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf9a6, 0xffff, 0xffff, 0xfb2c, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfeba, 0xffff, 0xffdf, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf9c7, 0xffff, 0xffff, 0xfcf3, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf820, 0xffbe, 0xffff, 0xff9e, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf904, 
	0xffff, 0xffff, 0xff7d, 0xf882, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfaeb, 0xffff, 0xffff, 0xfeba, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xff1c, 0xffff, 0xffff, 0xfcd3, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf924, 0xff1c, 0xffff, 0xffff, 0xfc10, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfb2c, 0xffff, 0xffff, 0xffff, 0xfcf3, 0xf8c3, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfa49, 0xfeba, 0xffff, 0xffff, 0xff5d, 0xf8a2, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfc71, 0xffff, 0xffff, 0xffff, 0xffbe, 0xfcb2, 
	0xfa69, 0xf882, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf924, 0xfb2c, 0xfdd7, 0xffff, 0xffff, 0xffff, 0xffbe, 0xfa69, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xfb6d, 0xff3c, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfdd7, 0xf9c7, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xfaaa, 0xfcd3, 0xfe9a, 0xffdf, 0xffff, 0xffff, 0xffff, 0xffff, 0xff5d, 0xfdf7, 0xfc10, 0xf9a6, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 0xf800, 
	0xf800, 0xf800, 0xf800, 0xf800
};