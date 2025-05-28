// constant and comment

#include <stdio.h>


void print_row(int n);

int main (void) {

    //  can't be changed
    const int n= 3;
    for ( int i = 0; i < n; i++) {
        print_row(n);
    }
}



void print_row(int n) {
    for ( int j = 0; j < 10; j++) {
            printf("#");
        }
        printf("\n");
}