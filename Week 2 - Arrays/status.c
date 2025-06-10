#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[] ) 
{
    if (argc != 2) 
    {
        printf("Missing cli argument\n");
        return 1;
    }

    printf("Hello, %s\n", argv[1]);
    return 0;

}

// status code can be checked using 'echo $?' in terminal after running the program 