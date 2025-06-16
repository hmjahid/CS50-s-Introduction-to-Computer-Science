#include <stdio.h>
#include <cs50.h>

void structure(int n);

int main (void)
{
    int height = get_int("Height: ");
    structure(height);
}

void structure(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("#\n");
    }

}