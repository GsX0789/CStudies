#include <stdio.h>

/*In this exercise the program should print a pyramid, with a x height
where this x height is defined by the user!*/

void RightPyramid(int, int);

int main(void)
{

    //declaring the height of the pyramid
    int pyramid_h = 0;
    int pyramid_w = 0;
    const int PYRAMID_LIMIT = 8;
    printf("How tall should be the pyramid height?\n");
    //prevent user to type a to large pyramid
    do
    {
        printf(">");
        scanf("%i", &pyramid_h);
    }
    while(pyramid_h < 1 || pyramid_h > PYRAMID_LIMIT);
    RightPyramid(pyramid_h, pyramid_w);

    return 0;
}

void RightPyramid(int pyramid_height, int pyramid_width)
{
    
    //number of dots = pyramid height - currentrow

    //Row
    //Right Pyramid
    for(int row = 0; row < pyramid_height; row++)
    {
        pyramid_width++;
        int dots = pyramid_height - pyramid_width;
        //Column
        for(int spaces = 0; spaces < dots; spaces++)
        {
            printf(" ");
        }

        for(int column = 0; column < pyramid_width; column++){
            printf("#");
        }

        printf("\n");
    }
}

