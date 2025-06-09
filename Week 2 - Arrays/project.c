#include <stdio.h>

int const size = 5;

int main (void) {
    int numbers[size];
     numbers[0] = 1;
    //  numbers[1] = numbers[0] * 2;
    //  numbers[2] = numbers[1] * 2;
    //  numbers[3] = numbers[2] * 2;
    //  numbers[4] = numbers[3] * 2;

    for (int i = 1; i < size; i++) {
        numbers[i] = numbers[i - 1] * 2;
    }

    //  int numbers[5] = {1, 2, 4, 8, 16};

    for ( int i = 0; i < 5; i++) {
        printf("%i\n", numbers[i]);
    }
}