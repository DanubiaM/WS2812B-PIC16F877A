//*****************************************************************************

unsigned int8 NeoGreen [NUMPIXELS];
unsigned int8 NeoBlue [NUMPIXELS];
unsigned int8 NeoRed [NUMPIXELS];

const unsigned  int8  rainbow[3][8] = {
  { 255,  255, 255,   0,    0,    0, 159, 255 },
  { 0,     69, 233, 255,  176,    0,   0, 255 },
  { 0,      0,   0,   0,  255,  255, 255, 255 }
};
unsigned int8 temp;

int8 i = 0;
int8 mode = 0;

unsigned int8 tempR;
unsigned int8 tempG;
unsigned int8 tempB;

int1 flag_break = FALSE;

