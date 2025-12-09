#include <stdio.h>

void selection_sort(int a[], int n);

int main()
{
    int ss[100], n, i;

    printf("Enter size of an array: ");
    scanf("%d", &n);

    printf("Enter values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ss[i]);
    }

    selection_sort(ss, n);
    return 0;
}

void selection_sort(int a[], int n)
{
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }

        if (min_idx != i)
        {
            temp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = temp;
        }
    }

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}