#include <stdio.h>
int main()
{
    char str[2000];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    // printf("The string you entered is: %s\n", str);
    int start = 0, space = 0;
    for (int j = 0; str[j] != '\0'; j++)
    {
        if (str[j] == ' ' || str[j + 1] == '\0')
        {
            space++;
            int end = (str[j + 1] == '\0') ? j : j - 1;
            for (int i = end; i >= start; i--)
            {
                if (space % 2 == 1)
                {
                    if (str[i] >= 65 && str[i] <= 90)
                    {
                        printf("%c", str[i]);
                    }
                    else
                    {
                        printf("%c", str[i] - 32);
                    }
                }
                else
                {
                    if (str[i] >= 97 && str[i] <= 122)
                    {
                        printf("%c", str[i]);
                    }
                    else
                    {
                        printf("%c", str[i] + 32);
                    }
                }
            }
            printf(" ");
            start = j + 1;
        }
    }
    // printf("space-%d", space);
    return 0;
}