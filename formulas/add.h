#ifndef add_h
#define add_h

float add(float addends[], int number_of_addends) {
  float sum = 0.0;
  for (int i = 0; i < number_of_addends; i++) {
    sum += addends[i];
  }
  return sum;
}

// Original by Terenz Jomar Dela Cruz
#endif