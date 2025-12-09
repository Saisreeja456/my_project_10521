#include <stdio.h>

int main()
{
    char st1[30], st2[30];
    int i = 0, flag = 0;

    printf("Enter string 1: ");
    scanf("%s", st1);

    printf("Enter string 2: ");
    scanf("%s", st2);

    while (st1[i] != '\0' || st2[i] != '\0')
    {
        if (st1[i] != st2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }

    return 0;
}