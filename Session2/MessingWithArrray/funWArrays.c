#include <stdio.h>
#include <string.h>

//This program encrypts Hello

int main(void)
{

    const int KEY_ADDER = 15;

    char fixed_message[] = "Hello";

    printf("\nMessage before: %s", fixed_message);

    for (int index = 0; index < strlen(fixed_message); index++)
    {
       fixed_message[index] += KEY_ADDER;
    }

    printf("\nMessage after encryption: %s", fixed_message);

    return 0;
}
