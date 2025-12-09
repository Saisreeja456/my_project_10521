#include <stdio.h>

int arst(int a);

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (arst(x))
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }
    return 0;
}

int arst(int a)
{
    int rem, sum = 0, r;
    r = a;

    while (a != 0)
    {
        rem = a % 10;
        sum = sum + (rem * rem * rem);
        a = a / 10;
    }

    if (r == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}