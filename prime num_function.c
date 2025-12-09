#include <stdio.h>

int prime(int a);

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (prime(x))
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a prime number\n");
    }
    return 0;
}

int prime(int a)
{
    int i, count = 0;

    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}