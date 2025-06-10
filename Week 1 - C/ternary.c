#include <stdio.h>
#include <cs50.h>


int main(void) 
{
    int a = get_int("Enter a number: ");
    a > 0 ? printf("greater than 0\n") : printf("less than or equal to 0\n");

}