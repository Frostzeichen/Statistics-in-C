#ifndef divide_h
#define divide_h

float divide(float factors[], int number_of_factors) {
  float quotient = factors[0];
  for (int i = 1; i < number_of_factors; i++) {
    quotient /= factors[i];
    printf("Quotient = %f\n", quotient);
  }
  return quotient;
}

// Original by Terenz Jomar Dela Cruz
#endif