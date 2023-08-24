#ifndef variance_h
#define variance_h

float variance(float dataset[], float error_correction, int size_of_dataset) {
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
  
  free(differences_for_variance);
  return variance;
}

// Original by Terenz Jomar Dela Cruz
#endif