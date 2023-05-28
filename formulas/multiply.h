#ifndef multiply_h
#define multiply_h

float multiply(float factors[], int number_of_factors) {
  float product = factors[0];
  for (int i = 1; i < number_of_factors; i++) {
    product *= factors[i];
  }
  return product;
}

// Original by Terenz Jomar Dela Cruz
#endif