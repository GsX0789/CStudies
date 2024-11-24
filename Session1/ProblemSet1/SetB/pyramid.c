#include <stdio.h>

/*In this exercise the program should print a pyramid, with a x height
where this x height is defined by the user!*/

int main(void)
{

    //declaring the height of the pyramid
    int pyramid_height = 0;
    int pyramid_width = 0;
    printf("How tall should be the pyramid height?\n");
    //prevent user to type a to large pyramid
    do{
        printf(">");
        scanf("%i", &pyramid_height);
    }
    while(pyramid_height < 0);

    for(int i = 0; i < pyramid_height; i++)
    {
        for(int j = 0; j < pyramid_width+1; j++){
            printf("#");
        }
        pyramid_width++;
        printf("\n");
    }
    return 0;
}
