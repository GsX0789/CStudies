#include <stdio.h>

int main(void)
{
    long long creditN = 4003600000000014;
    printf("%llu\n", creditN);
    
    
    while (creditN > 0)
    {
        int digit = creditN % 10;
        printf("%i", digit);
        creditN /= 10;
    }
    

    return 0;
}
