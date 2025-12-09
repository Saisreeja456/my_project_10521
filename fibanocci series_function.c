#include <stdio.h>

void fib(int a);

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    fib(x);
    return 0;
}

void fib(int a)
{
    int f = 0, s = 1, t, i;

    if (a >= 1)
    {
        printf("%d ", f);
    }
    if (a >= 2)
    {
        printf("%d ", s);
    }

    for (i = 1; i <= a - 2; i++)
    {
        t = f + s;
        printf("%d ", t);
        f = s;
        s = t;
    }
    printf("\n");
}