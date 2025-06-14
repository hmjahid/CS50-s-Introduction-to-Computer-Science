#include <stdio.h>
#include <cs50.h>


bool valid_triangle (float x, float y, float z);

int main (void) 
{
   float x, y, z;
    printf("Enter the lengths of the sides of the triangle:\n");
    x = get_float("Side x: ");
    y = get_float("Side y: ");
    z = get_float("Side z: ");

    if (valid_triangle(x, y, z))
    {
        printf("Yes, it is a valid triangle.\n");
    }
    else
    {
        printf("No, it is not a valid triangle.\n");
    }

    return 0;

}

bool valid_triangle (float x, float y, float z)
{
    // check for all positiove site
    if (x<=0 || y<=0 || z<=0)
    {
        return false;
    }

    // check if sum of any two sides are greater than third
    if ((x+y <= z) || (x+z <= y) || (y+z <= y))
    {
        return false;
    }

    // if both test are passed
    return true;
}