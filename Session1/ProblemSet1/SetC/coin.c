#include <stdio.h>

//In this exercise, the user will pass a coin amount, let's say 85c cents, and we need to use
//the greedy algorithm to evaluate how many coins is need to a given amount!
//Example:
//

void GreedyMachine(int);

int main(void)
{
    int coin_change = 0;
    printf("Coins charge, insert a value, 100c or lower\n");

    //Do a verification, to notice if the user input is inside the boundaries!
    do
    {
        printf(">");
        scanf("%i", &coin_change);
        
    } while (coin_change > 100 || coin_change < 0);

    GreedyMachine(coin_change);

    return 0;
}

void GreedyMachine(int coin_amount)
{
    //const to make it easier to subtract;
    const int QUARTER_COIN = 25;
    const int DIME_COIN = 10;
    const int NICKEL_COIN = 5;
    const int PENNY_COIN = 1;

    int coins_quantity = 0;
    

    while(coin_amount > 0)
    {
        //Here is where the Greedy algorithm comes in!
        if(coin_amount >= QUARTER_COIN)
        {
            coin_amount -= QUARTER_COIN;
            coins_quantity++;
        }
        else if(coin_amount >= DIME_COIN && coin_amount <=QUARTER_COIN)
        {
            coin_amount -= DIME_COIN;
            coins_quantity++;
        }
        else if(coin_amount >= NICKEL_COIN && coin_amount < DIME_COIN)
        {
            coin_amount -= NICKEL_COIN;
            coins_quantity++;
        }
        else if(coin_amount >= PENNY_COIN && coin_amount < NICKEL_COIN)
        {
            coin_amount -= PENNY_COIN;
            coins_quantity++;
        }
    }

    printf("Coin(s) amount: %i", coins_quantity);
}
