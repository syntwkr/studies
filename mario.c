#include <cs50.h>
#include <stdio.h>
#define SPACES 2

/* draws "mario" pyramid
	created on 10.09.2019 */

int main(void)
{
    int height, space, hash, line_num, position;
    
    height = get_int("Height: ");
    
    while (!(height > 0 && height <= 10))
    {
        height = get_int("Height: ");
    }

    for (line_num = 1; line_num <= height; line_num++)
    {
        for (position = 0; position <= height + SPACES + line_num; position++)
        {
            if ((position >= 0 && position < height - line_num) || (position >= height && position < height + SPACES))
                putchar(' ');
            //else if ((position >= height - line_num && position < height) || (position >= height && position <= height + 1 + line_num))
                //putchar('#');
            //else
                //putchar('\n');
            else if (position == height + SPACES + line_num)
                putchar('\n');
            else
                putchar('#');
        }
    }
}   
