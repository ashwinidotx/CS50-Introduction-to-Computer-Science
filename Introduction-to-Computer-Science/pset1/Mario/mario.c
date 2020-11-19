#include <stdio.h>
#include <cs50.h>


// the idea here is to add spaces, then add hashes, then add a separator and finally add the rest of the triangle.


int main()
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8); // check if the height is within range 1 to 8 inclusive

    // printf("Entered Height: %i\n", n);

    for (int i = 1; i <= n; i++)
    {
        int sp = n - i;
        for (int j = 1; j <= sp; j++)
        {
            printf(" ");
        }
        // print n-i number of spaces.
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        // print i number of spaces

        printf("  ");
        // a separator

        for (int x = 1; x <= i; x++)
        {
            printf("#");
        }
        // add the right side of pyramid

        printf("\n");
    }

}
