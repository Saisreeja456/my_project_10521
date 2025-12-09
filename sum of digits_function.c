#include <stdio.h>

int sum(int a);

int main()
{
    int x, res;

    printf("Enter a number: ");
    scanf("%d", &x);

    res = sum(x);

    printf("Sum of digits of %d is %d\n", x, res);
    return 0;
}

int sum(int a)
{
    int sum = 0, rem;

    while (a != 0)
    {
        rem = a % 10;
        sum = sum + rem;
        a = a / 10;
    }
    return sum;
}