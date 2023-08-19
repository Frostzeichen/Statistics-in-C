#ifndef slope_h
#define slope_h
#include <stdio.h>

float slope (int x1, int y1, int x2, int y2) {
  int rise = y2 - y1;
  int run = x2 - x1;
  float slope = rise/run;
  return slope;
}

// Original by Terenz Jomar Dela Cruz
#endif