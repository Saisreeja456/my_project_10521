#include <stdio.h>

int main()
{
    char st[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%s", st);

    printf("Enter a character to be search: ");
    scanf(" %c", &ch);

    for (i = 0; st[i] != '\0'; i++)
    {
        if (st[i] == ch)
        {
            printf("The character %c is at position %d\n", ch, i + 1);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Sorry! The character %c is not present in the string.\n", ch);
    }

    return 0;
}