#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int *p;

    printf("Enter no. of rows & columns: ");
    scanf("%d %d", &r, &c);

    p = &a[0][0];

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", (p + i * c + j));
        }
    }

    printf("The matrix you have entered:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", *(p + i * c + j));
        }
        printf("\n");
    }

    return 0;
}