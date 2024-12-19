#include <stdio.h>

int main(void)
{

    char *short_message = "Sausage!"; 
    size_t message_size = sizeof(short_message) / sizeof(*short_message);

    int num1 = 80;
    int *pNum = &num1; 
    printf("\nThe value %d is at the address %p\n", *pNum, pNum);

    // for (int i = 0; i < message_size; i++)
    // {
    //     printf("The address of %c is %p\n", *(short_message + i), 
    //     &short_message[0 + i]);
    // }
    
    for (int i = 0; i < message_size; i++)
    {
        printf("%c", *(short_message + i));
    }
    printf("\n");
    return 0;
}
