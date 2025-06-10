#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) 
{
    string name = get_string("Input Name: ");

    int length = strlen(name);
    printf("%i\n", length);

    // int n = 0;
    // while (name[n] != '\0') 
    // {
    //     n++;
    // }
    // printf("%i\n", n);
}