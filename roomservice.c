#include<stdio.h>

/* to illustrate the nested loops
    created on 9.09.2019. */

int main(void)
{  
    int floor, room, cupboard, shelf;
    
    for (floor = 1; floor <= 2; ++floor)
    {
        printf("Floor: %d\n", floor);
        for (room = 1; room <= 3; ++room)
        {
            printf("\tRoom: %d\n", room);
            for (cupboard = 1; cupboard <= 2; ++cupboard)
            {
                printf("\t\tCupboard: %d\n", cupboard);  
                for (shelf = 1; shelf <= 5; ++shelf)
                    if (shelf>=2 && shelf<=4)
                    {
                        printf("\t\t\tShelf: %d\n", shelf);
                    }
                    
            }
        }
    }
    return 0;
}
