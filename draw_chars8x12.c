#include "draw.h"//for the font
#include "stdio.h"//for putChar

void print_char_8x12(char c)
{
  c -= 0x20;
  for(char col = 0; col<12; col++){
    unsigned short rowBits = font_8x12[c][col];
    for(char row = 0; row<8; row++){
      unsigned short colMask = 1 << (7-col);
      putchar((rowBits & colMask) ? '*':' ');
    }
    putchar('\n');
  }
}
