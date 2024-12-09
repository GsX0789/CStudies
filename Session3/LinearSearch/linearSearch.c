#include <stdio.h>
#include <string.h>

/* This program works by doing a linear search in a specific array
it's is possible to see how slow it's to find the value through a linear search
if the value is either the last one or the second to last */

int main(void)
{
    int numbers[] = {40 ,30 ,70 ,100 ,170 ,270 ,440};

    //linear search
    //let's say that we want to find 100
    int keyNumber = 1000;

    for (int i = 0; i < 7; i++)
    {
        if(keyNumber == numbers[i])
        {
            printf("We find the key number %d, it costs %d iterations", keyNumber, i);
            return 0;
        }
    }
    printf("The number was not found!");
    return 1;
}
