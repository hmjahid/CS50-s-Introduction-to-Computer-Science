#include <stdio.h>

int main (void)
{
    int n = 20;
    int *p = &n;
    printf("%i\n", *p);
    printf("%p\n", p);
}