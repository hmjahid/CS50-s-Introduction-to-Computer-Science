#include <stdio.h>
#include <cs50.h>

int main (void) {
    string name = get_string("What is your name\n");

    int age = get_int("What is your age?\n");

    string hometown = get_string("What is your hometown\n");
    
    string number = get_string("What is your phone number?\n");

    printf("Info are name: %s, age: %i, hometown: %s, number: %s\n", name, age, hometown, number);

}