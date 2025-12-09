#include <stdio.h>

int main()
{
    int a[100], n, sum = 0, i;

    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of %d subjects = %d", n, sum);

    return 0;
}
