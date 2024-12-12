#include <stdio.h>
int main()
{
    char str[20];
    int res = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        res = res * 10 + str[i] - 48;
    }
    printf("The number is %d", res);
}   