#include <stdio.h>

int linear_search(int n, int a[], int key);

int main()
{
    int x, a[100], key, i, position;

    printf("Enter size of an array: ");
    scanf("%d", &x);

    printf("Enter values: ");
    for (i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a number to be search: ");
    scanf("%d", &key);

    position = linear_search(x, a, key);

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

int linear_search(int n, int a[], int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }
    return -1;
}