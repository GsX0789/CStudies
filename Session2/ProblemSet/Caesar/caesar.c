#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{

    const int MAX_SIZE = 100;
    int keyN = 0;
    char word[MAX_SIZE];
    char cypherWord[MAX_SIZE];
    //Memset fills a chunk of region of memory with a specific data
    //void pointer(might be the array or buffer), data to set, size of that memory region
    memset(cypherWord, '\0', MAX_SIZE);
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";

    printf("\nEnter a key: ");
    scanf("%d", &keyN);

    // Used to get the \n so it does not get throw in the fgets down bellow
    // Due the input buffer, since scanf does not consume the \n escape
    getchar();

    if(keyN == 0)
    {
        return 1;
    }

    printf("Plaintext: ");
    fgets(word, MAX_SIZE, stdin);

    //This line, removes the new line character, so it does not bother us
    //when trying to get the letter down below!
    word[strcspn(word, "\n")] = '\0';

    char letter_to_find;

    for (int i = 0; i < strlen(word); i++)
    {
        char *letter_pos = strchr(alphabet, tolower(word[i]));
        if(letter_pos != NULL)
        {
            //Pointer arithmetic
            int position = (letter_pos - alphabet);
            //making sure that it's inside the alphabet bounds!
            int newPos = (letter_pos - alphabet + keyN) % 26;
            cypherWord[i] = alphabet[newPos];
        }
        else if (word[i] == ' ')
        {
            cypherWord[i] = ' ';
        }
        else
        {
            printf("\n The character %c is not in the alphabet!");
        }
    }
    printf("CypherText: %s", cypherWord);
    return 0;

    //TODO, check the spaces
}
