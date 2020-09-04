#include <stdio.h>

void fun1(int n)
{
    if (n > 0)
    {
        printf("%d \n", n);
        fun1(n-1);
    }
}

void fun2(int n)
{
    if (n > 0)
    {
        fun2(n-1);
        printf("%d \n", n);
    }
}

static int y = 0;

int fun3(int n)
{
    if (n > 0)
    {
        y++;
        return fun3(n-1) + y;
    }
    return 0;
}


int main()
{
    int a = 5;

    //fun1(a);
    //fun2(a);
    int out = fun3(a);
    printf("%d \n", out);

    return 0;
}