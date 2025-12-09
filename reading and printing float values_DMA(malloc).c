#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = (float *)malloc(n * sizeof(float));

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", (p + i));
    }

    printf("The elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", *(p + i));
    }
    printf("\n");

    free(p);
    return 0;
}