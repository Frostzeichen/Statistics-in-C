#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "statistics_in_c.h"

int welcome_instructions() {
  printf("What would you like to do? (add underscores & lowercaps only)\n");
  printf("- add\n");
  printf("- subtract\n");
  printf("- multiply\n");
  printf("- divide\n");
  printf("- mean\n");
  printf("- variance\n");
  printf("- standard_deviation\n");
  printf("- coefficient_of_variation\n");
  printf("- skewness\n");
  printf("- slope\n");
  printf("- quit\n");
  printf("Type here: ");
  return 0;
}

int main (void) {
  while (1) {
    welcome_instructions();
    char user_command[15];
    scanf("%s", user_command);
    printf("You selected \"%s\".\n", user_command);
  
    if (strcmp(user_command, "quit") == 0) {
      break;
    }
    else if (strcmp(user_command, "add") == 0) {
      // Initiate variables
      float* dataset_array = malloc(sizeof(float));
      char input[10];
      int index = 0;
      // Input numbers to make array. Count number of files and save to `index` variable.
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
      // Begin calculation.
      float sum = add(dataset_array, index);
      printf("Sum = %f\n", sum);
      free(dataset_array);
    }
    else if (strcmp(user_command, "subtract") == 0) {
      // Initiate variables
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
      // Begin calculation.
      float difference = subtract(dataset_array, index);
      printf("Difference = %f\n", difference);
      free(dataset_array);
    }
    else if (strcmp(user_command, "multiply") == 0) {
      // Initiate variables
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
      // Begin calculation.
      float product = multiply(dataset_array, index);
      printf("Product = %f\n", product);
      free(dataset_array);
    }
    else if (strcmp(user_command, "divide") == 0) {
      // Initiate variables
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
      // Begin calculation.
      float quotient = divide(dataset_array, index);
      printf("Quotient = %f\n", quotient);
      free(dataset_array);
    }
    else if (strcmp(user_command, "mean") == 0) {
      // Initiate variables
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
      // Begin calculation.
      float xmean = mean(dataset_array, index);
      printf("Quotient = %f\n", xmean);
      free(dataset_array);
    }
    else if (strcmp(user_command, "variance") == 0) {
      // Initiate variables
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
      // Begin calculation.
      printf("Please enter a correction value (0, 1, or more)\n");
      int correction;
      scanf("%d", &correction);
      float xvariance = variance(dataset_array, correction, index);
      printf("Variance = %f\n", xvariance);
      free(dataset_array);
    }
    else if (strcmp(user_command, "standard_deviation") == 0) {
      // Initiate variables
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
      // Begin calculation.
      printf("Please enter a correction value (0, 1, or more)\n");
      int correction;
      scanf("%d", &correction);
      float xstandard_deviation = standard_deviation(dataset_array, correction, index);
      printf("Standard Deviation = %f\n", xstandard_deviation);
      free(dataset_array);
    }
    else if (strcmp(user_command, "coefficient_of_variation") == 0) {
      // Initiate variables
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
      // Begin calculation.
      printf("Please enter a correction value (0 for population or 1 for sample)\n");
      int correction;
      scanf("%d", &correction);
      float xstandard_deviation = standard_deviation(dataset_array, correction, index);
      printf("Standard Deviation = %f.2\n", xstandard_deviation);
      float xcoefficient_of_variation = coefficient_of_variation(dataset_array, correction, index);
      printf("Coefficient of Variation = %f\n", xcoefficient_of_variation);
      free(dataset_array);
    }
    else if (strcmp(user_command, "skewness") == 0) {
      // Initiate variables
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
      // Begin calculation.
      printf("Please enter a correction value (0 for population or 1 for sample)\n");
      int correction;
      scanf("%d", &correction);
      float xstandard_deviation = standard_deviation(dataset_array, correction, index);
      printf("Standard Deviation = %f.2\n", xstandard_deviation);
      float xskewness = skewness(dataset_array, correction, index);
      printf("Skewness = %f\n", xskewness);
      free(dataset_array);
    }
    else if (strcmp(user_command, "covariance") == 0) {
      float* dataset_x = malloc(sizeof(float));
      float* dataset_y = malloc(sizeof(float));
      int sample_size_x;
      int sample_size_y;
      char input[10];
      int index = 0;
      int correction;

      while (1) { // Input for variable 1 (x)
        printf("Enter a number for your variable 1 (of 2) or 'x' to submit: ");
        scanf("%s", input);
        if (input [0] == 'x') {
          break;
        }
        float f = strtof(input, NULL);
        dataset_x = realloc(dataset_x, sizeof(float) * (index + 1));
        dataset_x[index] = f;
        index++;
      }
      sample_size_x = index;
      printf("Sample size (x): %d\n", sample_size_x);
      index = 0;

      while (1) { // Input for variable 2 (y)
        printf("Enter a number for your variable 2 (of 2) or 'x' to submit: ");
        scanf("%s", input);
        if (input [0] == 'x') {
          break;
        }
        float f = strtof(input, NULL);
        dataset_y = realloc(dataset_y, sizeof(float) * (index + 1));
        dataset_y[index] = f;
        index++;
      }
      sample_size_y = index;
      printf("Sample size (y): %d\n", sample_size_y);
      if (sample_size_x != sample_size_y) {
        printf("Invalid dataset. Your datasets do not have the same sizes. Please try again with equal sizes.");
        break;
      }

      printf("Input correction value (0 or 1)\n");
      scanf("%d", &correction);
      printf("Error correction is %d\n", correction);

      float xcovariance = covariance(dataset_x, dataset_y, 5, correction);
      printf("The covariance is: %.2f\n", xcovariance);
    }
    else if (strcmp(user_command, "slope") == 0) {
      int x1;
      int y1;
      int x2;
      int y2;
      printf("Please input x coordinate for start point (x1):\n");
      scanf("%d", &x1);
      printf("Please input y coordinate for start point (y1):\n");
      scanf("%d", &y1);
      printf("Starting point coordinates is (%d, %d)\n", x1, y1);
      printf("Please input x coordinate for end point (x2):\n");
      scanf("%d", &x2);
      printf("Please input y coordinate for end point (y2):\n");
      scanf("%d", &y2);
      printf("Ending point coordinates is (%d, %d)\n", x2, y2);
      printf("Crunching numbers. Please wait.\n");
      float xslope = slope(x1, y1, x2, y2);
      printf("The slope is: %.2f\n", xslope);
    }
    // end of last command
    // else-if (strcmp(user_command, "math function")) for new command here
    else {
      printf("Error. Invalid command.");
    }
  }

  
  return 0;
}
