#include <stdio.h>

int main(void){

    //defining the first_name variable
    char first_name[40];
    printf("What's your name?\n");
    printf(">");
    scanf("%s", &first_name);
    printf("Hello, %s", first_name);

    return 0;
}


