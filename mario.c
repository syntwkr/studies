#include <cs50.h>
#include <stdio.h>
#define SPACES 2

// Draws a pyramid of a specified height

int main(void)
{
    int height, line_num, position;

    height = get_int("Height: ");

    // Keeps asking the user to put the height until it's greater than 0 but less than 23
    while (!(height > 0 && height <= 23))
    {
        height = get_int("Height: ");
    }

    // Outer loop to "walk" through the rows
    for (line_num = 1; line_num <= height; line_num++)
    {
        // Inner loop to draw the line of spaces and hashes
        for (position = 0; position <= height + SPACES + line_num; position++)
        {
            /* - each row is a combination of spaces, hashes and new line characters;
            - if condition controls spaces: amount of left side spaces in each row equals to .. then we need two more spaces..
            - if else catches last character and puts a new line, ending the row
            - else puts chars */
            if ((position >= 0 && position < height - line_num) || (position >= height && position < height + SPACES))
            {
                putchar(' ');
            }

            else if (position == height + SPACES + line_num)
            {
                putchar('\n');
            }

            else
            {
                putchar('#');
            }
        }
    }

}
