#include <stdio.h>

int fact(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}

int iFact(int n)
{
    if (n < 0)
    {
        return 0;
    }    
    int s = 1;
    for (int i = 1; i < n+1; i++)
    {
        s *= i;
    }
    return s;
}

int main () {
    int n = 3;

    int out = fact(n);

    printf("%d \n",out);

    out = iFact(n);

    printf("%d \n",out);   
    return 0;
}