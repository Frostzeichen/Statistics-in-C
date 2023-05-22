#ifndef statistics_in_c_h
#define statistics_in_c_h
#include <stdio.h>

int array_size(float arr[]) {
    return sizeof(arr) / sizeof(arr[0]);
}

// Basic Mathematical Functions
// In the future, try to remove number_of_addends so it only takes in an array and that's it. Maybe add another set that converts or stuff. Idk.
float add(float addends[], int number_of_addends) {
  float sum = 0.0;
  for (int i = 0; i < number_of_addends; i++) {
    sum += addends[i];
    printf("%f\n", sum);
  }
  return sum;
}

float subtract(float subtrahends[], int number_of_subtrahends) {
  float difference = subtrahends[0];
  for (int i = 1; i < number_of_subtrahends; i++) {
    difference -= subtrahends[i];
  }
  return difference;
}

float multiply(float factors[], int number_of_factors) {
  float product = factors[0];
  for (int i = 1; i < number_of_factors; i++) {
    product *= factors[i];
    printf("Product = %f\n", product);
  }
  return product;
}

float divide(float factors[], int number_of_factors) {
  float quotient = factors[0];
  for (int i = 1; i < number_of_factors; i++) {
    quotient /= factors[i];
    printf("Quotient = %f\n", quotient);
  }
  return quotient;
}

float mean(float dataset[], int size_of_dataset) {
  float sum = 0.0;
  for (int i = 0; i < size_of_dataset; i++) {
    sum += dataset[i];
  }
  float mean = sum / size_of_dataset;
  return mean;
}

float variance(float dataset[], float error_correction, int size_of_dataset) {
  float sum = 0.0;
  for (int i = 0; i < size_of_dataset; i++) {
    sum += dataset[i];
  }
  float mean = sum / size_of_dataset;
  float* differences_for_variance = malloc(size_of_dataset * sizeof(float));
  if (differences_for_variance == NULL) {
    printf("Error. Memory allocation failed.\n");
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

float standard_deviation(float dataset[], float error_correction, int size_of_dataset) {
  float sum = 0.0;
  for (int i = 0; i < size_of_dataset; i++) {
    sum += dataset[i];
  }
  float mean = sum / size_of_dataset;
  float* differences_for_variance = malloc(size_of_dataset * sizeof(float));
  if (differences_for_variance == NULL) {
    printf("Error. Memory allocation failed.\n");
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
  
  free(differences_for_variance);
  return standard_deviation;
}

float coefficient_of_variation(float dataset[], float error_correction, int size_of_dataset) {
  float sum = 0.0;
  for (int i = 0; i < size_of_dataset; i++) {
    sum += dataset[i];
  }
  float mean = sum / size_of_dataset;
  float* differences_for_variance = malloc(size_of_dataset * sizeof(float));
  if (differences_for_variance == NULL) {
    printf("Error. Memory allocation failed.\n");
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
  
  free(differences_for_variance);
  return coefficient_of_variation;
}
// Original by Terenz Jomar Dela Cruz

#endif