#include <stdio.h>

void bubble_sort(int *a, int n);

int main()
{
    int a[100], n, i;

    printf("Enter size of an array: ");
    scanf("%d", &n);

    printf("Enter values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubble_sort(a, n);

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");
    return 0;
}

void bubble_sort(int *a, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (*(a + j) > *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
}