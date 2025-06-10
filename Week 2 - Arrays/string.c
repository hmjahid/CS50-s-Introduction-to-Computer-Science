#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) 
{
    string s = get_string("Enter a string: ");
    printf("Output: ");
    
    for (int i = 0, n = strlen(s); i < n; i++) 
    {
        printf("%c", s[i]);
    }
    printf("\n");
}