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

float taylor(int x, int n)
{
    static int p = 1;
    static int f = 1;
    if (n <= 0)
    {
        return 1;
    }
    else{
        float r = taylor(x, n-1);
        // global variables for power and factorial usable for increasing power and factorial
        p = p * x; // x^n (1 * x * x * x ...)
        f = f * n; // n! (1 * 2 * 3 * n)
        return r + p / (float)f;
        // return taylor(x, n-1) + power(x, n) / fact(n); // slower solution because stack calls required
    }
}

// Horner's Rule taylor series

float exp(int x, int n)
{
    static float s = 1;

    if (n == 0)
    {
        return s;
    }
    s = 1 + x/(float)n*s;

    return exp(x, n - 1);
}

float iterexp(int x, int n)
{
    float s = 1;

    float num = 1;
    float den = 1;

    for (int i = 1; i <=n; i++)
    {
        num *= x; // pow
        den *= i; // fact
        s += num / den;
    }
    
    return s;
}

int main () {
    int x = 2;
    int n = 10;

    float out = taylor(x, n);

    printf("taylor normal %f \n",out);

    out = exp(x, n);

    printf("horner %f \n",out);

    out = iterexp(x, n);

    printf("iterative %f \n",out);

    return 0;
}