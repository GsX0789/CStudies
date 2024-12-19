#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
   
    char *message = "good Morning";
    char *correct_message = malloc(strlen(message) + 1);

    if ( correct_message == NULL)
    {
        fprintf(stderr, "Memory Allocation Failed");
        return 1;
    }

    strcpy(correct_message, message);

    correct_message[0] = toupper(correct_message[0]);

    printf("%s\n", message);
    printf("%s\n", correct_message);

    free(correct_message);

    return 0;
}

