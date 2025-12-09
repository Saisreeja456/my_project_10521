#include <stdio.h>

int pali(int a);

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (pali(x))
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
    return 0;
}

int pali(int a)
{
    int rem, sum = 0, r;
    r = a;

    while (a != 0)
    {
        rem = a % 10;
        sum = (sum * 10) + rem;
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