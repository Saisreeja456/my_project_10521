#include <stdio.h>

int main()
{
    int a[100], n, i;
    float sum = 0, p;

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

    p = (sum / (n * 100)) * 100;

    printf("The percentage: %f", p);

    return 0;
}
