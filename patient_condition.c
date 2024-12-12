#include <stdio.h>
int main()
{
    char str[1000],cond[500];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter condition: ");
    scanf("%s", cond);
    int cond_l = 0;
    for(int i = 0;cond[i]!='\0';i++){
        cond_l++;
    }
    int start = 0, end;
    int cond_m=0;
    for (int i = 0;str[i]!='\0';i++)
    {
     if(str[i]==':'||str[i+1]=='\0'){
         end = (str[i + 1] == '\0') ? i : i - 1;
         if(end-start+1==cond_l){
             cond_m++;
         }
         start = i + 1;
     }
      
    }
    printf("condition matched %d times",cond_m);
}