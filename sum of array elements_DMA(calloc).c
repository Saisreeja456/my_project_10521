#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));

    if (p == NULL)
    {
        printf("Memory error\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    for (i = 0; i < n; i++)
    {
        sum += *(p + i);
    }

    printf("The sum of given number = %d\n", sum);

    free(p);
    return 0;
}