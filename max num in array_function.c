#include <stdio.h>

int max(int arr[], int n);

int main()
{
    int arr[100], n, i, maximum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    maximum = max(arr, n);

    printf("The maximum number is = %d\n", maximum);
    return 0;
}

int max(int arr[], int n)
{
    int i, max_val;
    max_val = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
    }
    return max_val;
}