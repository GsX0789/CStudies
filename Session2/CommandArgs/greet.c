#include <stdio.h>

int main(int argc, char* argv[])
{
    //Means that the user enter an argument!
    if(argc == 2)
    {
        printf("\nHello %s", argv[1]);
    }
    else if(argc == 3)
    {
        printf("\nHello, here are some data about you:");
        printf("\nName: %s\nAge: %s", argv[1], argv[2]);
    }
    else
    {
        printf("Hello world!");
    }


}
