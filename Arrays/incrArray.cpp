#include <stdio.h>

int main()
{
    int *p, *q;

    p = new int[5];

    for (int i = 0; i < 5; i++)
    {
        p[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", p[i]);
    } 

    q = new int[10];

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    delete []p; 

    p = q;

    q = NULL;

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", p[i]);
    } 

    return 0;
}