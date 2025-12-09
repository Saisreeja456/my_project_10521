#include <stdio.h>

int main()
{
    int sub[6], i;

    for(i = 0; i < 6; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &sub[i]);
    }

    for(i = 0; i < 6; i++)
    {
        printf("Sub %d marks = %d\n", i + 1, sub[i]);
    }

    return 0;
}
