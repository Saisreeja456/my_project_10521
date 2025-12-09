#include <stdio.h>

int binary_search(int n, int a[], int key);

int main()
{
    int x, a[100], key, i, position;

    printf("Enter size of an array: ");
    scanf("%d", &x);

    printf("Enter sorted values: ");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a number to be search: ");
    scanf("%d", &key);

    position = binary_search(x, a, key);

    if (position == -1)
    {
        printf("The element is not found\n");
    }
    else
    {
        printf("%d is found at position %d\n", key, position + 1);
    }
    return 0;
}

int binary_search(int n, int a[], int key)
{
    int l = 0, h = n - 1, mid;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}