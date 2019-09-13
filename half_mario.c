#include <cs50.h>
#include <stdio.h>

// Draws a half-pyramid of a specified height

int main(void)
{
    int height, line_num, position;

    height = get_int("Height: ");

    // Keeps asking the user to put the height until it's greater than 0 but less than 23
    while (height < 0 || height > 23)
    {
        height = get_int("Height: ");
    }

    // Outer loop to walk through the rows
    for (line_num = 1; line_num < height + 1; line_num++)
    {
        /* Inner loop to draw the line of spaces and hashes
           amount of spaces in each row equals to the height of the pyramid less number of the current line
           amount of hashes equals to the row number +1 since the top of the pyramid has two hashes
        */
        for (position = 0; position >= 0 && position < height - line_num; position++)
        {
            printf(" ");
        }

        for (position = 0; position < line_num + 1; position++)
        {
            printf("#");
        }

        printf("\n");
    }

}
