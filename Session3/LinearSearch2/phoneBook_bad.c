#include <stdio.h>
#include <string.h>

/* The reason why this code is _bad, is because we can't trust that
the numbers really correspond to the names, if we change the order of the numbers
then every number might be in the wrong synch with the name */

int main(void)
{

    /*My Study notes: It's important to define it as a pointer array,
    because, the compiler can't know the size of all literals here
    especially when dealing with strings bc they have different sizes,
    so here what we do is create a pointer array, that will store
    the reference of each string in a block of memory
    making the compiler life easier*/

    char *names[] = {"Johny", "Hudson", "Maverick", "Daniel"};
    //ph stands for phone
    char *phNumbers[] = {"+1-605-555-111", "+28-894-200-000", "+1-998-504-213", 
    "+55 11-91121-1511"};

    char name[100];
    memset(name, '\0', 100);

    printf("Enter a name to get the number\n");
    printf("Your contacts are: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%s ", names[i]);
    }
    printf("\n>");
    fgets(name, 100, stdin);

    //This line is important, otherwise the program will compare the following
    //is Hudson\n equal to Hudson? and the answer is no!
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < 4; i++)
    {
        if(strcmp(names[i], name) == 0)
        {
            printf("\nThe phone number of %s is %s", name, phNumbers[i]);
            return 0;
        }
    }
    printf("\nThe contact was not found!");
    return 1;
}
