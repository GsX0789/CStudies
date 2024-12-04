#include <stdio.h>

int main(int argc, char *argv[])
{
    int age = 42;
    //& usually refers to the variable address!
    //pAge is a variable(pointer) that points to the address of age!
    int *pAge = &age;
    printf("\nAge address: %p", &age);
    printf("\nAge Pointer address: %p", &pAge);

    printf("\nAge Value: %i", age);
    printf("\nAge Pointer Value: %i", *pAge);

    char key = ' ';
    *pAge = 44;
    printf("\nChanging both variables by changing the pointer value:");
    printf("\nPress any key to see the changes");
    scanf("%c", &key);
    printf("\nValue of Age: %i", age);
    printf("\nValue of the AgePointer: %i", *pAge);
}
