#include <stdio.h>
#include <string.h>

//Asks the user a simple word to encrypt

int main(void)
{

    const int KEY_ADDER = 9;

    char fixed_message[10];
    printf("Inserts a short word max 10 letters to encrypt\n");
    printf(">");
    scanf("%s", &fixed_message);

    
    printf("\nMessage before: %s", fixed_message);

    for (int index = 0; index < strlen(fixed_message); index++)
    {
       fixed_message[index] += KEY_ADDER;
    }

    printf("\nMessage after encryption: %s", fixed_message);

    return 0;
}
