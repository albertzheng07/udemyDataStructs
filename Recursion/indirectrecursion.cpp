#include <stdio.h>

void funb(int n);

void funa(int n)
{
    if (n > 0)
    {
        printf("%d \n", n);
        funb(n-1);
    }
}

void funb(int n)
{
    if (n > 1)
    {
        printf("%d \n", n);
        funa(n/2);
    }
}

int main () {
    int n = 20;

    funa(n);
    return 0;
}