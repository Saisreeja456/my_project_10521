#include <stdio.h>

int add(int a, int b);

int main()
{
    int x, y, res;

    printf("Enter two values: ");
    scanf("%d %d", &x, &y);

    res = add(x, y);

    printf("The result is: %d\n", res);
    return 0;
}

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}