#include <stdio.h>

int fact(int a);

int main()
{
    int x, res;

    printf("Enter a value: ");
    scanf("%d", &x);

    res = fact(x);

    printf("The factorial is: %d\n", res);
    return 0;
}

int fact(int a)
{
    int i, b = 1;

    for (i = 1; i <= a; i++)
    {
        b = b * i;
    }
    return b;
}