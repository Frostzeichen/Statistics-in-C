#ifndef covariance_h
#define covariance_h
#include <stdlib.h>
// Only use this for sizes of similar length.

float covariance (float dataset_x[], float dataset_y[], int sample_size, int error_correction) {
  float sum_x;
  float sum_y;
  float mean_x;
  float mean_y;
  float summation_of_distances;
  for (int i = 0; i < sample_size; i++) {
    sum_x += dataset_x[i];
    sum_y += dataset_y[i];
  }

  mean_x = sum_x / sample_size;
  mean_y = sum_y / sample_size;

  for (int i = 0; i < sample_size; i++) {
    summation_of_distances += (dataset_x[i] - mean_x) * (dataset_y[i] - mean_y);
  }

  float covariance = summation_of_distances / (sample_size - error_correction);

  return covariance;
}

// Original by Terenz Jomar Dela Cruz
#endif