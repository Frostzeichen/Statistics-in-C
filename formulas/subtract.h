#ifndef subtract_h
#define subtract_h

float subtract(float subtrahends[], int number_of_subtrahends) {
  float difference = subtrahends[0];
  for (int i = 1; i < number_of_subtrahends; i++) {
    difference -= subtrahends[i];
  }
  return difference;
}

// Original by Terenz Jomar Dela Cruz
#endif