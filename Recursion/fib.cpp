#include <stdio.h>

int rfib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return rfib(n-2) + rfib(n-1);
}

int ifib(int n)
{
    if (n <= 1)
    {
        return n;
    }    
    int val1 = 0;
    int val2 = 1;
    for (int i = 2; i < n+1; i++)
    {
        int temp = val2;
        val2 += val1;
        val1 = temp;
    }
    return val2;
}

#define maxN 100
static int f[maxN] = {0};

int fib(int n)
{
    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n-1] == -1)
        {
            f[n-1] = fib(n-1);
        }
        if (f[n-2] == -1)
        {
            f[n-2] = fib(n-2);
        }
        return f[n-2] + f[n-1];
    }  
}

int main () {
    int n = 9;

    int out = rfib(n);

    printf("%d \n",out);

    for (int i = 0; i < maxN; i++)
    {
        f[i] = -1;
    }
    out = fib(n);

    printf("%d \n",out);

    out = ifib(n);

    printf("%d \n",out);

    return 0;
}