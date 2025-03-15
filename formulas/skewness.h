#ifndef skewness_h
#define skewness_h

// TODO: Separation of concerns between c and h files.
#include <stdlib.h>
#include <math.h>

float skewness(float dataset[], float error_correction, int size_of_dataset) {
  float sum = 0.0;
  for (int i = 0; i < size_of_dataset; i++) {
    sum += dataset[i];
  }
  float mean = sum / size_of_dataset;
  float* differences_for_variance = malloc(size_of_dataset * sizeof(float));
  if (differences_for_variance == NULL) {
    return -1;
  }
  for (int i = 0; i < size_of_dataset; i++) {
    differences_for_variance[i] = dataset[i] - mean;
  }
  float sum_of_squares = 0.0;
  for (int i = 0; i < size_of_dataset; i++) {
    sum_of_squares += differences_for_variance[i] * differences_for_variance[i];
  }
  float variance = sum_of_squares / (size_of_dataset - error_correction);
  float standard_deviation = sqrt(variance);

  float coefficient_of_variation = standard_deviation / mean;

  float skewness_numerator = 0.0;
  for (int i = 0; i < size_of_dataset; i++) {
    skewness_numerator += differences_for_variance[i] * differences_for_variance[i] * differences_for_variance[i];
  }

  float skewness_denominator = size_of_dataset - error_correction;
  skewness_denominator *= standard_deviation * standard_deviation * standard_deviation;

  float skewness = skewness_numerator / skewness_denominator;
  
  free(differences_for_variance);
  return skewness;
}

#endif
