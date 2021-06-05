const uint32_t dooropen_width = 64;
const uint32_t dooropen_height = 64;
const uint8_t dooropen_data[(64*64)/2] = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x19, 0x53, 0x97, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x00, 0x00, 0x10, 0x53, 0x97, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x53, 0x97, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x53, 0x97, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xAF, 0x77, 0x77, 0x77, 0x77, 0x77, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x53, 0x97, 0xFC, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0xEF, 0xAC, 0x68, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xAC, 0x68, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x9B, 0x57, 0x13, 0x00, 0x00, 0x00, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x10, 0x33, 0x33, 0x33, 0x02, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x9B, 0x03, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xCF, 0xCC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0x0F, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0x0F, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0x0F, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0x0F, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0x0F, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0x0F, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0x0F, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0x0F, 0x00, 0xB0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xCF, 0xCC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0x5F, 0x00, 0x60, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x00, 0xF5, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xDF, 0x33, 0x13, 0x00, 0x10, 0x33, 0x33, 0x33, 0x02, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x9B, 0x03, 0x00, 0x31, 0x33, 0xFD, 0xFF, 
	0xFF, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0x9B, 0x57, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
	0xFF, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xAC, 0x68, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
	0xFF, 0xCF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0xEF, 0xAC, 0x68, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
	0xFF, 0xEF, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x53, 0x77, 0x77, 0x77, 0xFE, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x53, 0x97, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x53, 0x97, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x09, 0x00, 0x00, 0x00, 0x10, 0x53, 0x97, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x19, 0x53, 0x97, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	};
