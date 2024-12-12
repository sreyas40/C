#include <stdio.h>

int main()
{
    char str[1000];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int pos = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            pos = i;
        }
    }
    printf("space-%d\n", pos);
    for (int i = pos + 1; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
}