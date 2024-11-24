#include <stdio.h>

int main(void){
    
    int age = 0;
    printf("What's is your age? ");
    scanf("%i", &age);

    if(age >= 18){
        printf("You can pass! have fun, but with caution!\n");
    }
    else{
        printf("You still to young to pass, you'll need to wait\n");
        printf("%i years", 18 - age);
    }

    return 0;
}
