#include <stdio.h>

int mul(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Multiplication is: %d\n", mul(num1, num2));
    return 0;
}

int mul(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a + mul(a, b - 1);
    }
}