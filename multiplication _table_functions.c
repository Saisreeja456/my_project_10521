#include <stdio.h>

void mult(int a);

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    mult(x);

    return 0;
}

void mult(int a)
{
    int i;

    // Prints table up to 10
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", a, i, a * i);
    }
}