#include <stdio.h>

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return pow(m, n-1)*m;
}

int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return power(m*m, n/2);
    }
    else
    {
        return m*power(m*m, (n-1)/2);
    }
    
}

int main () {
    int m = 2;
    int n = 9;

    int out = power(m, n);

    printf("%d \n",out);

    out = pow(m, n);

    printf("%d \n",out);

    return 0;
}