// Scope and do while loop

#include <cs50.h>
#include <stdio.h>

void meow (int n);


int main (void) 
{
    int number;
    do {
         number = get_int("Number: ");
    }
    while ( number < 1);
    
    meow(number);
    
}


void meow (int n) 
{
    for ( int i = 0; i < n; i++) {
            printf("MEOW\n");
        }
    
}