#include <stdio.h>

int fun(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        return fun(fun(n+11));
    }
    
}

int main () {
    int n = 95;

    int o = fun(n);
    printf("%d", o);
    return 0;
}