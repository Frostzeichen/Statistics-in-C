#ifndef sum_of_squares_h
#define sum_of_squares_h

float sum_of_squares(float addends[], int number_of_addends) {
  float ss = 0.0;
  for (int i = 0; i < number_of_addends; i++) {
    ss += *(addends + i) * 2;
  }
  
  return ss;
}

// Original by Terenz Jomar Dela Cruz
#endif