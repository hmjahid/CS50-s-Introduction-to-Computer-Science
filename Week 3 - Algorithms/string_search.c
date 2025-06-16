#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string strings[] = {"bd", "ch", "ru", "pk", "ir", "my"};

    string s = get_string("Enter string: ");

    for (int i = 0; i < 6; i++)
    {
        if ( strcmp(strings[i], s) == 0)
        {
            printf("String found!\n");
            return 0;
        }
    }

    printf("Not Found!\n");
    return 1;


}