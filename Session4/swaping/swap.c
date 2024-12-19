#include <stdio.h>

//A simple program that swaps two int variables

void swap(int *a, int *b);

int main(void)
{

    int x = 7;
    int y = 5;

    printf("X is %i and Y is %i\n", x, y);

    swap(&x, &y);

    printf("X is %i and Y is %i\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
