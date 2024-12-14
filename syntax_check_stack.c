#include <stdio.h>
int stck_ptr = -1, stck[100], stck_max = 100;
void push(char ch)
{
    if (stck_ptr < stck_max)
    {
        stck[++stck_ptr] = ch;
    }
}

void pop()
{
    stck_ptr--;
}
int main()
{
    char str[1000];
    printf("Enter code: ");
    scanf("%[^\n]s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            push(str[i]);
            printf("push stack ptr: %d\n", stck_ptr);
        }
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            pop();
            printf("pop stack ptr: %d\n", stck_ptr);
        }
    }
    printf("stack ptr: %d\n", stck_ptr);
    if (stck_ptr == -1)
        printf("Balanced\n");
    else
    {
        printf("Not Balanced\n");
        if (stck_ptr >= 0)
        {
            printf("missing closing brackets");
        }
        else if (stck_ptr < -1)
            printf("extra closing brackets");
    }
}