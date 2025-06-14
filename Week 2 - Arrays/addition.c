#include <stdio.h>

int addition(int a, int b);

int main(void)
{
    int result = addition(9, 5);
    printf("Addition result: %i\n", result);
    return 0;
}

int addition(int a, int b) 
{
    int addition_result = a + b;
    return addition_result;
}
