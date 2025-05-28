#include <cs50.h>
#include <stdio.h>

int main(void) {
    
    int x = get_int("Input value of X:");
    int y = get_int("Input value of Y:");

    printf("%i\n", x + y);

}