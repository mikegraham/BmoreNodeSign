#include <avr/pgmspace.h>

unsigned char GamaTab[16]=
//{0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0};
{0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7,0xE7};

//========================================================
unsigned char dots_color[5][3][8][4] =
{
 {
//=====================================================
  {//green 
    {0x00,0x00,0x00,0x4b},
    {0x00,0x00,0x04,0xbf},
    {0x00,0x00,0x4b,0xff},
    {0x00,0x04,0xbf,0xff},
    {0x00,0x4b,0xff,0xff},
    {0x04,0xbf,0xff,0xff},
    {0x4b,0xff,0xff,0xff},
    {0xbf,0xff,0xff,0xfd}
  },
//=======================================================
  {//red 
   {0xff,0xfd,0x71,0x00},
    {0xff,0xd7,0x10,0x00},
    {0xfd,0xf1,0x00,0x00},
    {0xda,0x10,0x00,0x00},
    {0x71,0x00,0x00,0x01},
    {0x10,0x00,0x00,0x17},
    {0x00,0x00,0x01,0x7e},
    {0x00,0x00,0x17,0xef}
  },
//======================================================
  {//blue 
    {0x06,0xef,0xff,0xff},
    {0x6e,0xff,0xff,0xff},
    {0xef,0xff,0xff,0xfa},
    {0xff,0xff,0xff,0xa3},
    {0xff,0xff,0xfa,0x30},
    {0xff,0xfa,0xa3,0x00},
    {0xff,0xfa,0x30,0x00},
    {0xff,0xa3,0x00,0x00}
  }
 },
 {
//=====================================================
  {//green 
    {0xFF,0xFF,0xFF,0x4b},
    {0xFF,0xFF,0xF4,0xbf},
    {0x00,0x00,0x4b,0xff},
    {0x00,0x04,0xbf,0xff},
    {0x00,0x4b,0xff,0xff},
    {0x04,0xbf,0xff,0xff},
    {0x4b,0xff,0xff,0xff},
    {0xbf,0xff,0xff,0xfd}
  },
//=======================================================
  {//red 
   {0xff,0xfd,0x71,0x00},
    {0xff,0xd7,0x10,0x00},
    {0xfd,0xf1,0x00,0x00},
    {0xda,0x10,0x00,0x00},
    {0x71,0x00,0x00,0x01},
    {0x10,0x00,0x00,0x17},
    {0x00,0x00,0x01,0x7e},
    {0x00,0x00,0x17,0xef}
  },
//======================================================
  {//blue 
    {0x06,0xef,0xff,0xff},
    {0x6e,0xff,0xff,0xff},
    {0xef,0xff,0xff,0xfa},
    {0xff,0xff,0xff,0xa3},
    {0xff,0xff,0xfa,0x30},
    {0xff,0xfa,0xa3,0x00},
    {0xff,0xfa,0x30,0x00},
    {0xff,0xa3,0x00,0x00}
  }
 },
}; 

