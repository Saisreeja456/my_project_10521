#include <stdio.h>

int main()
{
    char st1[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", st1);

    for (i = 0; st1[i] != '\0'; i++)
    {
        if (st1[i] >= 'A' && st1[i] <= 'Z')
        {
            st1[i] = st1[i] + 32;
        }
    }

    printf("The lowercase string is: %s\n", st1);
    return 0;
}