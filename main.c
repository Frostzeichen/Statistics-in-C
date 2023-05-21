#include <stdio.h>
#include "protostat.h"

int welcome_instructions() {
  printf("What would you like to do? (add underscores & lowercaps only)\n");
  printf("- add\n");
  printf("- subtract\n");
  printf("- multiply\n");
  printf("- divide\n");
  printf("- mean\n");
  printf("- variance\n");
  printf("- standard_deviation\n");
  printf("Type here: ");
  return 0;
}

int main(void) {
  while (1) {
    welcome_instructions();
    char user_command[15];
    scanf("%s", user_command);
    printf("You selected \"%s\"\n.", user_command);
  
    float* dataset_array = malloc(sizeof(float));
    char input[10];
    int index = 0;
  
    // Input numbers to make array.
    while (1) {
      printf("Enter a number or 'x' to submit): ");
      scanf("%s", input);
      if (input [0] == 'x') {
        break;
      }
      float f = strtof(input, NULL);
      dataset_array = realloc(dataset_array, sizeof(float) * (index + 1));
      dataset_array[index] = f;
      index++;
    }
    for (int i = 0; i < index; i++) {
      printf("%.2f ", dataset_array[i]);
    }
  
    if (strcmp(user_command, "add") == 0) {
      float sum = add(dataset_array, index);
      printf("Sum = %f\n", sum);
    }
    else if (strcmp(user_command, "subtract") == 0) {
      float difference = subtract(dataset_array, index);
      printf("Difference = %f\n", difference);
    }
    else if (strcmp(user_command, "multiply") == 0) {
      float product = multiply(dataset_array, index);
      printf("Product = %f\n", product);
    }
    else if (strcmp(user_command, "divide") == 0) {
      float quotient = divide(dataset_array, index);
      printf("Quotient = %f\n", quotient);
    }
    else if (strcmp(user_command, "mean") == 0) {
      float xmean = mean(dataset_array, index);
      printf("Quotient = %f\n", xmean);
    }
    else if (strcmp(user_command, "variance") == 0) {
      printf("Please enter a correction value (0, 1, or more)\n");
      int correction;
      scanf("%d", &correction);
      float xvariance = variance(dataset_array, correction, index);
      printf("Variance = %f\n", xvariance);
    }
    else if (strcmp(user_command, "standard_deviation") == 0) {
      printf("Please enter a correction value (0, 1, or more)\n");
      int correction;
      scanf("%d", &correction);
      float xstandard_deviation = standard_deviation(dataset_array, correction, index);
      printf("Standard Deviation = %f\n", xstandard_deviation);
    }
    else {
      printf("Error. Invalid command.");
    }
  }

  
  return 0;
}
