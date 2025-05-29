#include <cs50.h>
#include <stdio.h>

int main(void) {
    
    int x = get_int("Input value of x:");
    int y = get_int("Input value of y:");

    printf("%.5f\n", (float) x / y);

    // printf("%i\n", x / y);
    // printf("%i\n", x + y);

}