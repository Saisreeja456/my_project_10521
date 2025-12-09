#include <stdio.h>

int main()
{
    int a[10] = {0, 6, 28, 19, 16, 15, 100, 18, 1, 7};
    int count = 0, temp = 0, i;

    for(i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)
        {
            count++;
        }
        else
        {
            temp++;
        }
    }

    printf("%d\n", count);
    printf("%d\n", temp);

    return 0;
}
