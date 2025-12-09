#include <stdio.h>

int factorial(int n);

int main()
{
    int a;

    printf("Enter a value: ");
    scanf("%d", &a);

    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}