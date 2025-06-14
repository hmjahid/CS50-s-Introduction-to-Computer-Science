#include <stdio.h>

float multiply(float a, float b);

int main(void)
{
    float result = multiply(9, 5);
    printf("Multiplication result: %.2f\n", result);
    return 0;
}

float multiply(float a, float b) 
{
    float multiply_result = a * b;
    return multiply_result;
}
