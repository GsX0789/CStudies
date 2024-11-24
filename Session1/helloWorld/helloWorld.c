#include <stdio.h>


int main(void){
    
    char firstName[30];
    printf("Enter your firstname: ");
    scanf("%s", &firstName);

    printf("Hello World!\n");
    printf("Welcome to your C journey %s", firstName);
    return 0;
}

