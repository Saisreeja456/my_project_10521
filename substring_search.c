#include <stdio.h>

int main()
{
    char str[100], substr[30];
    int i, j, is_match;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter a substring: ");
    scanf("%s", substr);

    for (i = 0; str[i] != '\0'; i++)
    {
        is_match = 1;
        for (j = 0; substr[j] != '\0'; j++)
        {
            if (str[i + j] == '\0' || str[i + j] != substr[j])
            {
                is_match = 0;
                break;
            }
        }

        if (is_match == 1 && substr[0] != '\0')
        {
            printf("Substring found at index: %d\n", i);
            return 0;
        }
    }

    printf("Substring not found\n");
    return 0;
}