#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = 0;
    scanf("%i", &height);

    draw(height);

    return 0;
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    //Recursion happens here, meaning that every time that the method calls itself
    //it will be the n value less one, until there is nothing
    draw(n - 1);
}
