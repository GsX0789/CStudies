#include <stdio.h>
#include <string.h>

/* This program is meant to show the importance of data structure
compared with its predecessor phoneBook_bad */

typedef struct 
{
    char *name;
    char *number;
}
person;


int main(void)
{
    person people[3];

    people[0].name = "Maverick";
    people[0].number = "+28-894-200-000";

    people[1].name = "Hudson";
    people[1].number = "+1-998-504-213";

    people[2].name = "David";
    people[2].number = "1-605-555-111";

    size_t arrayTotalSize = sizeof(people);
    size_t oneElementSize = sizeof(people[0]);
    size_t numberOfElements = arrayTotalSize / oneElementSize;

    char name[100];
    memset(name, '\0', 100);

    printf("Enter a name to get the number\n");
    printf("Your contacts are: ");
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%s ", people[i].name);
    }
    printf("\n>");
    fgets(name, 100, stdin);

    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < numberOfElements; i++)
    {
        if(strcmp(people[i].name, name) == 0)
        {
            printf("\n%s's number: %s", name, people[i].number);
            return 0;
        }
    }
    printf("\nThe contact was not found!");
    return 1;
}
