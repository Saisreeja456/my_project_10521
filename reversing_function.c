#include <stdio.h>

int rev(int a);

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Reverse of %d is %d\n", x, rev(x));
    return 0;
}

int rev(int a)
{
    int rem, sum = 0;

    while (a != 0)
    {
        rem = a % 10;
        sum = (sum * 10) + rem;
        a = a / 10;
    }
    return sum;
}