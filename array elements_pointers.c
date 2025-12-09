#include <stdio.h>

int main()
{
    int a[100], n, i;
    int *p;

    p = a;

    printf("Enter size of an array: ");
    scanf("%d", &n);

    printf("Enter the values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    printf("The array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}