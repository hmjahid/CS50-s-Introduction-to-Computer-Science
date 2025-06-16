#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {20, 15, 40, 60, 90, 150};

    int n = get_int("Enter number: ");

    for (int i = 0; i < 6; i++)
    {
        if ( numbers[i] == n)
        {
            printf("Number found!\n");
            return 0;
        }
    }

    printf("Not Found!\n");
    return 1;


}