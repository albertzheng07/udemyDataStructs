#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}

int iSum(int n)
{
    int s = 0;

    for (int i = 1; i < n+1; i++)
    {
        s += i;
    }

    return s;
}

int fsum(int n)
{
    return ((n + 1)*n) / 2;
}

int main () {
    int n = 20;

    int out = sum(n);

    printf("%d", out);

    out = iSum(n);

    printf("%d", out);

    out = fsum(n);

    printf("%d", out);

    return 0;
}