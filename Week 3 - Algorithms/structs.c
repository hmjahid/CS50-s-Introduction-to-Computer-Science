#include <stdio.h>
#include <cs50.h>

typedef struct
{
    string name;
    int votes;
} candidate;


int main(void)
{
    const int num = 3;
    candidate candidates[num];

    for (int i = 0; i < num; i++)
    {
        candidates[i].name = get_string("Enter name: ");
        candidates[i].votes = get_int("Enter votes: ");
    }

    int highest_vote = 0;
    for (int i = 0; i < num; i++)
    {
        if (candidates[i].votes > highest_vote)
        {
            highest_vote = candidates[i].votes;
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (candidates[i].votes == highest_vote)
        {
            printf("Candidate: %s\n", candidates[i].name);
        }
    }

}
