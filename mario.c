#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive integer from user
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //for loop for next line
    for (int hash = 1; hash < height + 1; hash++)
    {
        for (int space = height - hash; space > 0; space--) // for loop to add spaces
        {
            printf(" ");
        }
        for (int hashwidth = 0; hashwidth < hash; hashwidth++)// for loop to add hashes
        {
            printf("#");
        }
        printf("\n");
    }
}
