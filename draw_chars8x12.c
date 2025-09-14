#include "draw.h"//for the font
#include "stdio.h"//for putChar

void print_char_8x12(char c)
{
  c -= 0x20;
  for(char col = 0; col<12; col++){
    for(char row = 0; row<8; row++){
      unsigned short rowBits = font_8x12[c][col];
      unsigned short colMask = 1 << (7-row);
      putchar((rowBits & colMask) ? '*':' ');
    }
    putchar('\n');
  }
}
