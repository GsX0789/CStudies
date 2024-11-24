#include <stdio.h>

int main(void){

    char first_name[20] = "";
    printf("Hello, please enter your firstName: ");
    scanf("%s", &first_name);
    float bankMoney = 1250.0f;
    printf("How much money do you have %s?", first_name);
    scanf("%f", &bankMoney);
    printf("%s you have %.2f$", first_name, bankMoney);
    if(bankMoney > 0){
        printf("\nNice %s you have some money in your account", first_name);
    }
    else{
        printf("\nI think it's time to do some savings, don't you agree %s?", first_name);
    }
    return 0;
}
