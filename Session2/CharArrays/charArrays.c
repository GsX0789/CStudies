#include <stdio.h>
#include <ctype.h>
#include <String.h>

//This little program is case senstive intended

int main(void)
{

    const int MAX_LENGHT = 100;
    char word[MAX_LENGHT];

    printf("\nPlease enter a word! ");
    fgets(word, MAX_LENGHT, stdin);

    printf("\nNow, enter a letter to check\nif it's in the word %s! ", word);
    char character;
    scanf("%c", &character);

    if(strchr(word, character) != NULL)
    {
        printf("The letter %c exists in %s", character, word);
    }
    else
    {
        printf("The letter %c does not exists in %s", character, word);
    }

    return 0;
}
