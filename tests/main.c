#include <stdio.h>
#include "../formulas/sum_of_squares.h"
#include <string.h>
#include <stdlib.h>

void displayInstructions(void) {
    printf("Please type a number:\n");
    printf("> ");
}

int main (void) {
    float* buffer;
    buffer = (float*) malloc(sizeof(float));
    int addends = 0;

    for (int i = 0; i < 1024; i++) {
        displayInstructions();
        char input[1024];
        scanf("%s", input);

        if (!strcmp(input, "x")) goto exit;
        printf("%s\n", input);
        buffer[i] = atof(input);
        addends++;
    }

    exit:
    float x = sum_of_squares(buffer, addends);
    printf("%f", x);
    free(buffer);
    return 0;
}