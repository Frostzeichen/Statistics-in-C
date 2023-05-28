#ifndef mean_h
#define mean_h

float mean(float dataset[], int size_of_dataset) {
  float sum = 0.0;
  for (int i = 0; i < size_of_dataset; i++) {
    sum += dataset[i];
  }
  float mean = sum / size_of_dataset;
  return mean;
}

// Original by Terenz Jomar Dela Cruz
#endif