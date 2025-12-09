#include <stdio.h>

void swap(int *x, int *y);
void selection_sort(int *a, int n);

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

    selection_sort(a, n);

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int *a, int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (*(a + j) < *(a + min_idx))
            {
                min_idx = j;
            }
        }

        if (min_idx != i)
        {
            swap((a + i), (a + min_idx));
        }
    }
}