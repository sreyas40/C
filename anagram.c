#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1000], str2[1000], temp;
    printf("enter first word:");
    scanf("%s", str1);
    printf("enter second word:");
    scanf("%s", str2);
    for (int j = 0; str1[j] != '\0'; j++)
    {
        for (int i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i + 1] != '\0' && str1[i] > str1[i + 1])
            {
                temp = str1[i];
                str1[i] = str1[i + 1];
                str1[i + 1] = temp;
            }
        }
    }
    for (int j = 0; str2[j] != '\0'; j++)
    {
        for (int i = 0; str2[i] != '\0'; i++)
        {
            if (str2[i + 1] != '\0' && str2[i] > str2[i + 1])
            {
                temp = str2[i];
                str2[i] = str2[i + 1];
                str2[i + 1] = temp;
            }
        }
    }

    // printf("%s\n", str1);
    // printf("%s\n", str2);

   if(strcmp(str1,str2)==0){
       printf("anagram");
   }
}