#include <stdio.h>
#include <cs50.h>
#include <string.h>


typedef struct
{
    string name;
    string number;
} person;


int main(void)
{
    person people[3];

    people[0].name = "Jahid";
    people[0].number = "+8801711111111";
    people[1].name = "Rahim";
    people[1].number = "+8801712222222";
    people[2].name = "Rahul";
    people[2].number = "+8801713333333";

    string name = get_string("Enter name: ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found! %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;


    // string phonebook[][2] = {
    //     {"John", "123-456-7890"},
    //     {"Jane", "987-654-3210"},
    //     {"Bob",  "555-555-5555"}
    // };

    // printf("Name: %s, Number: %s\n", phonebook[0][0], phonebook[0][1]);

    // Print all names and numbers
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Name: %s, Number: %s\n", phonebook[i][0], phonebook[i][1]);
    // }
}