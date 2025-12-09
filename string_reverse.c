#include <stdio.h>

int main()
{
    char st1[30], st2[30];
    int length = 0, i, j;

    printf("Enter string to read: ");
    scanf("%s", st1);

    for (i = 0; st1[i] != '\0'; i++)
    {
        length++;
    }

    for (i = 0, j = length - 1; j >= 0; i++, j--)
    {
        st2[i] = st1[j];
    }

    st2[i] = '\0';

    printf("The reversed string is: %s\n", st2);
    return 0;
}