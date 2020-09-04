#include <stdio.h>

int comb(int n, int r)
{
    if (r == n || r == 0)
    {
        return 1;
    }
    return comb(n-1, r-1) + comb(n-1, r);
}

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

int combFact(int n, int r)
{
    int t0 = fact(n);
    int t1 = fact(r);
    int t2 = fact(n-r);

    return t0/(t1*t2);
}

int main () {
    int r = 2;
    int n = 4;

    int out = comb(n, r);

    printf("%d \n",out);

    out = combFact(n, r);

    printf("%d \n",out);

    return 0;
}