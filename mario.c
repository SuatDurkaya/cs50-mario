#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int f;
    do
    {
        f = get_int("Height: ");
    }
    while (f < 1); // this blocks negative numbers.

    for (int row = 0; row < f; row++)
    {
        // spaces section (it only for first side)
        for (int space = 0; space < f - row; space++)
        {
            printf(" ");
        }

        // "#" Section
        for (int ht = 0; ht < row; ht++)
        {
            printf("#");
        }

        printf("  "); // Gap for other side

        for (int hts = 0; hts < row; hts++) // # Section Again
        {
            printf("#");
        }
        printf("\n"); // goes one down row
    }
}
