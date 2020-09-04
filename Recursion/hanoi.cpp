#include <stdio.h>

void hanoi(int n, int A, int B, int C)
{
    if (n > 0)
    {
        hanoi(n-1, A, C, B);
        printf("%d to %d \n", A, C);
        hanoi(n-1, B, A, C);
    }
}

int main () {
    int n = 3;

    hanoi(n, 1, 2, 3);
  
    return 0;
}