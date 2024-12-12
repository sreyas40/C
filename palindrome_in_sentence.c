#include <stdio.h>
int main()
{
    char str[2000];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    // printf("The string you entered is: %s\n", str);
    int start = 0;
    for (int j = 0; str[j] != '\0'; j++)
    {
        if (str[j] == ' ' || str[j + 1] == '\0')
        {
            int end = (str[j + 1] == '\0') ? j : j - 1;
            // printf("start-%d end-%d\n", start,end);

            int length = (end - start) + 1, pal = 1;

            int i = 0;
            while (i <=length / 2)
            {
                if (str[start+i] != str[end - i])
                {
                    // printf("%c - %c\n", str[start + j], str[end - j]);
                    pal = 0;
                    break;
                }
                i++;
            }

            if (pal)
            {
                for (int i = start; i <= end; i++)
                {
                    printf("%c", str[i]);
                }
                printf("\t");
            }

            start = j + 1;
        }
    }
    // printf("space-%d", space);
    return 0;
}