// logic

#include <cs50.h>
#include <stdio.h>

int main(void) 
{
   char answer = get_char("Are you agree? ");

   if ( answer == 'y' || answer == 'Y') 
   {
    printf("You are agreed.\n");
   }
   else if ( answer == 'n' || answer == 'N' )
   {
    printf("You are not agreed.\n");
   }

}