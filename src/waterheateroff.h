const uint32_t waterheateroff_width = 100;
const uint32_t waterheateroff_height = 100;
const uint8_t waterheateroff_data[(100*100)/2] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBE, 0x47, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x21, 0x63, 0xEA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x84, 0xCA, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xBC, 0x69, 0x01, 0x00, 0x30, 0xFD, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0x00, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x02, 0x00, 0xD2, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0xD2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0x30, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0x30, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0xF7, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xC0, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0A, 0x00, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0x60, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x50, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0A, 0x00, 0xFE, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x02, 0xA0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFA, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0xD2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xF6, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0xF3, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0xF2, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF2, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCD, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6E, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0x10, 0x12, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xD0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xCF, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x6F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0xF7, 0xED, 0xEE, 0xDE, 0xCE, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCD, 0xBB, 0xCB, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xEF, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x47, 0x01, 0x00, 0x10, 0x63, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xDF, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xEF, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x1A, 0x00, 0x00, 0x21, 0x22, 0x12, 0x00, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xEF, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0x00, 0x73, 0xEB, 0xFF, 0xDF, 0x59, 0x00, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xEF, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x80, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0x00, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xEF, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xCF, 0x00, 0x20, 0xFC, 0xFF, 0xFF, 0xEE, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xDF, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0x3F, 0x00, 0xD1, 0xFF, 0xDF, 0x27, 0x00, 0x51, 0xFB, 0xFF, 0x5F, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0x09, 0x00, 0xFB, 0xFF, 0x08, 0x00, 0x00, 0x00, 0x50, 0xFE, 0xFF, 0x03, 0x40, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0x84, 0x77, 0x87, 0x77, 0x78, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0x03, 0x50, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xFF, 0x0B, 0x00, 0xFB, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xCF, 0x00, 0xD0, 0xFF, 0x0A, 0x00, 0x92, 0xED, 0x4B, 0x00, 0x50, 0xFF, 0x4F, 0x00, 0xF7, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0x8F, 0x00, 0xF3, 0xFF, 0x02, 0x30, 0xFE, 0xFF, 0xFF, 0x07, 0x00, 0xFB, 0x9F, 0x00, 0xF4, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xEF, 0x57, 0x55, 0x55, 0x55, 0x55, 0x55, 0x65, 0xFC, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0x5F, 0x00, 0xF8, 0xAF, 0x00, 0xD1, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0xF6, 0xCF, 0x01, 0xD1, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0x3F, 0x00, 0xFA, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF2, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0x2F, 0x00, 0xFB, 0x6F, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xDF, 0x00, 0xF0, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0x2F, 0x00, 0xFB, 0x6F, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0x4F, 0x00, 0xF9, 0x8F, 0x00, 0xE3, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF3, 0xEF, 0x01, 0xD0, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0x6F, 0x00, 0xF6, 0xDF, 0x01, 0x80, 0xFF, 0xFF, 0xFF, 0x1D, 0x00, 0xF8, 0xBF, 0x00, 0xE2, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xEF, 0xEE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xAF, 0x00, 0xF1, 0xFF, 0x05, 0x00, 0xE8, 0xFF, 0xBF, 0x02, 0x10, 0xFE, 0x6F, 0x00, 0xF5, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xEF, 0x28, 0x00, 0x61, 0xFC, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xEF, 0x01, 0xA0, 0xFF, 0x2E, 0x00, 0x20, 0x65, 0x04, 0x00, 0xA0, 0xFF, 0x2E, 0x00, 0xF9, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0x3D, 0x00, 0x00, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0x06, 0x20, 0xFF, 0xDF, 0x02, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x07, 0x20, 0xFE, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xEF, 0x03, 0x00, 0x00, 0x00, 0x00, 0xFB, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0x0D, 0x00, 0xF6, 0xFF, 0x6E, 0x01, 0x00, 0x00, 0xB3, 0xFF, 0xBF, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0x8F, 0x00, 0x70, 0xFE, 0x1A, 0x00, 0xF3, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0x7F, 0x00, 0x70, 0xFF, 0xFF, 0x9D, 0x77, 0xB8, 0xFF, 0xFF, 0x1C, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0x3F, 0x00, 0xF6, 0xFF, 0xBF, 0x00, 0xB0, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x04, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0x0E, 0x00, 0xFD, 0xFF, 0xFF, 0x04, 0x90, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x3E, 0x00, 0x20, 0xE9, 0xFF, 0xFF, 0xFF, 0xCF, 0x04, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0x0E, 0x00, 0xFE, 0xFF, 0xFF, 0x04, 0x90, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xEF, 0x04, 0x00, 0x10, 0x85, 0xAA, 0x79, 0x03, 0x00, 0x10, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0x2F, 0x00, 0xF8, 0xFF, 0xDF, 0x01, 0xA0, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0x7F, 0x00, 0xA1, 0xFF, 0x3D, 0x00, 0xE2, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xDF, 0x01, 0x00, 0x33, 0x01, 0x00, 0xF8, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x00, 0x45, 0x33, 0x54, 0x01, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0xFB, 0xFF, 0xFF, 0x03, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xCF, 0x14, 0x00, 0x30, 0xF9, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0xF9, 0xFF, 0xDF, 0x02, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xCF, 0xAA, 0xEB, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xF8, 0xFF, 0xDF, 0x01, 0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6F, 0x00, 0xF8, 0xFF, 0xCF, 0x01, 0xD2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF7, 0xFF, 0xBF, 0x00, 0xE2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xDF, 0xD8, 0xFF, 0xFF, 0xFF, 0x9F, 0xFA, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF6, 0xFF, 0xBF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0x2F, 0x20, 0xFF, 0xFF, 0xFF, 0x07, 0xB0, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0xF5, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0x1F, 0x10, 0xFF, 0xFF, 0xFF, 0x06, 0xA0, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF4, 0xFF, 0x9F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xCF, 0xC5, 0xFF, 0xFF, 0xFF, 0x7E, 0xF8, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0xF2, 0xFF, 0x9F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0xF2, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF2, 0xFF, 0x7F, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0xA2, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x5C, 0x00, 0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xE1, 0xFF, 0x6F, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0xD1, 0xFF, 0x5F, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x01, 0xC1, 0xFF, 0x5F, 0x00, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x25, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x32, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x02, 0xC0, 0xFF, 0x4F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0xF1, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0xB0, 0xFF, 0x3E, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x00, 0xF2, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0xA0, 0xFF, 0x2E, 0x00, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF2, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, 0x90, 0xFF, 0x2D, 0x10, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x00, 0xF4, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x05, 0x80, 0xFF, 0x1D, 0x10, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x01, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0x00, 0xF7, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x70, 0xFF, 0x0D, 0x10, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x02, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x00, 0xFB, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x22, 0x01, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x20, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x20, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1D, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x00, 0x90, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0B, 0x00, 0x00, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0xA0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2E, 0x00, 0xE2, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x7D, 0x00, 0xD2, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x03, 0x00, 0xFB, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x00, 0x80, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2B, 0x00, 0x70, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x01, 0x00, 0x92, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x5A, 0x00, 0x00, 0xF7, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2C, 0x00, 0x00, 0x31, 0x54, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x24, 0x00, 0x00, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x26, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9C, 0x00, 0x70, 0x88, 0x01, 0x50, 0x78, 0x87, 0x77, 0x87, 0x77, 0x78, 0x87, 0x07, 0x00, 0x87, 0x18, 0x00, 0xC6, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0x04, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xFF, 0x4F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xE0, 0xFF, 0x03, 0x90, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xFD, 0x3F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x80, 0xAA, 0x02, 0xA0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xFE, 0x3F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xFD, 0x3F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xFE, 0x3F, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3B, 0x03, 0x00, 0x32, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0xCA, 0x2D, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x00, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x00, 0xF4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x2F, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0x25, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0x62, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x12, 0x12, 0x21, 0x61, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	};
