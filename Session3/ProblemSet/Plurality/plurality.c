#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 9
#define MAX_NAME 20

//Candidate Struct
typedef struct 
{
    char *name;
    int votes;

} candidate ;

//Defining the array of canditates
candidate candidates[MAX];

int candidate_count;

bool vote(char *cName);
void printWinner();

int main(int argc, char *argv[])
{
    if (argc < 2){
        printf("Please enter more than two or two canditates!\n");
        return 1;
    }

    //Here -1 is important, because the first argument, is the file path!
    candidate_count = argc - 1;

    if(candidate_count > MAX)
    {
        printf("The Max amount of canditates is %d canditates\n", MAX);
        return 2;
    }
    
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    printf("Please enter the number of voters!\n");
    printf(">");

    int number_of_votes = 0;
    scanf("%i", &number_of_votes);

    //get the "\n" so it does not drop in the canditateName;
    getchar();

    for (int i = 0; i < number_of_votes; i++)
    {
        char candidateName[MAX_NAME];
        printf("Vote: ");
        fgets(candidateName, MAX_NAME, stdin);

        //remove the extra '\n' otherwise we can't compare the names!
        candidateName[strcspn(candidateName, "\n")] = '\0';

        if(!vote(candidateName))
        {
            printf("\nInvalid Name!!");
        }
    }

    printWinner();

    return 0;
}

bool vote(char *cName)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if(strcmp(cName, candidates[i].name) == 0)
        {
            candidates[i].votes += 1;
            return true;
        }
    }
    return false;
}

void printWinner()
{

    int winner_votes = 0;

    for (int i = 0; i < candidate_count; i++)
    {
        if(candidates[i].votes > winner_votes)
        {
            winner_votes = candidates[i].votes;
        }
    }
    for (int index = 0; index < candidate_count; index++)
    {
        if(candidates[index].votes == winner_votes)
        {
            printf("%s is the winning of election with %i votes", candidates[index].name, candidates[index].votes);
        }
    }
}
