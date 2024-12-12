#include <stdio.h>
int main()
{
    char str[1000];
    printf("Enter the string:");
    scanf("%[^\n]s", str);
    char ch = str[0];
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
            // printf("char-%c count-%d\n", ch, count);
            if (str[i + 1] == '\0')
            {
                printf("%d%c", count, ch);
            }
        }
        else
        {
            printf("%d%c", count, ch);
            ch = str[i];
            count = 1;
        }
    }
}