#include <stdio.h>
#include <cs50.h>


const int N = 3;

float average(int length, int array[]);

int main(void) {

   
    // int scores[3];
    // scores[0] = 90;
    // scores[1] = 85;
    // scores[2] = 90;
    // for ( int i = 0; i < 3; i++) {
    //     scores[i] = get_int("Score: ");
    // }

     int scores[N];

    for ( int i = 0; i < N; i++) {
        scores[i] = get_int("Score: ");
    }
    

    // printf("The average is:  %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);


    // int a = 5;
    // int b = 10;
    // int c = 20;

    // printf("The average is:  %f\n", (a + b + c) / 3.0);


     printf("The average is:  %f\n",average(N, scores));

}


float average (int length, int array[]) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum / (float) length;
}