#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char vowel);
int isConsonantValueOne(char consonant);
int isConsonantValueTwo(char consonant);
int isConsonantValueThree(char consonant);
int isConsonantValueFour(char consonant);
int isConsonantValueFive(char consonant);
int isConsonantValueEight(char consonant);
int isConsonantValueTen(char consonant);


int main(void)
{

    const int MAX_LENGHT = 100;
    const int SCORES[] = {1,2,3,4,5,8,10};

    int player1_score = 0;

    char word[MAX_LENGHT];
    printf("Enter a word to see its score value\n");
    printf(">");
    fgets(word, MAX_LENGHT, stdin);

    for (int index = 0; index < strlen(word); index++)
    {
       if(isVowel(word[index]))
       {
            player1_score += SCORES[0];
       }
       else if(isConsonantValueOne(word[index]))
       {
            player1_score += SCORES[0];
       }
       else if(isConsonantValueTwo(word[index]))
       {
            player1_score += SCORES[1];
       }
       else if(isConsonantValueThree(word[index]))
       {
            player1_score += SCORES[2];
       } 
       else if(isConsonantValueFour(word[index]))
       {
            player1_score += SCORES[3];
       } 
       else if(isConsonantValueFive(word[index]))
       {
            player1_score += SCORES[4];
       } 
       else if(isConsonantValueEight(word[index]))
       {
            player1_score += SCORES[5];
       }  
       else if(isConsonantValueTen(word[index]))
       {
            player1_score += SCORES[6];
       } 
    }

    printf("\nPlayer1 Score: %i", player1_score);

    return 0;
}

//Checking if it is a consonant that its value is two
int isConsonantValueOne(char consonant)
{
    char consonant1[] = {"lnrstLNRST"};
    return (strchr(consonant1, consonant) != NULL);
}

//Checking if it is a consonant that its value is two
int isConsonantValueTwo(char consonant)
{
    char consonant2[] = {"dgDG"};
    return (strchr(consonant2, consonant) != NULL);
}

//Is Consonant value three?
int isConsonantValueThree(char consonant)
{
    char consonant3[] = {"bcmpBCMP"};
    return (strchr(consonant3, consonant) != NULL);
}

//Is Consonant value four?
int isConsonantValueFour(char consonant)
{
    char consonant4[] = {"fhvwyFHVWY"};
    return (strchr(consonant4, consonant) != NULL);
}

//Is Consonant value five?
int isConsonantValueFive(char consonant)
{
    char consonant5[] = {"kK"};
    return (strchr(consonant5, consonant) != NULL);
}

//Is Consonant value eight?
int isConsonantValueEight(char consonant)
{
    char consonant8[] = {"jxJX"};
    return (strchr(consonant8, consonant) != NULL);
}

//Is Consonant value Ten?
int isConsonantValueTen(char consonant)
{
    char consonant10[] = {"qzQZ"};
    return (strchr(consonant10, consonant) != NULL);
}

//Checking if the inputted data has a vowel
int isVowel(char vowel)
{
    char vowels[] = {"aeiouAEIOU"};
    return (strchr(vowels, vowel) != NULL);
}
