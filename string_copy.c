#include <stdio.h>

int main()
{
    char st1[30], st2[30];
    int i;

    printf("Enter string-1: ");
    scanf("%s", st1);

    for (i = 0; st1[i] != '\0'; i++)
    {
        st2[i] = st1[i];
    }

    st2[i] = '\0';

    printf("The copied string: %s\n", st2);
    return 0;
}