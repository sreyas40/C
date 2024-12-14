//Q:Find result of expression (eg: 1+2+3+4+5+6+7+8+9+10)

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[1000];
    printf("Enter expression: ");
    scanf("%s", str);
    int res = str[0]-48;
    for (int i = 1; str[i] != '\0'; i++)
    {
        if (i % 2 != 0)
        {
            if(str[i]=='+'){
                res+=str[i+1]-48;
            }
            else if(str[i]=='-'){
                res-=str[i+1]-48;
            }
        
        }
        
    }
    printf("evaluated result %d", res);
}