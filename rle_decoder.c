#include<stdio.h>
int main(){
    char str[1000];
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    for (int i = 0;str[i]!='\0';i++){
        char ch;
        int num = 0;
        if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122){
            ch=str[i];
            // printf("chara- %c\n",ch);
            int j=i+1;
            while(str[j]>=48&&str[j]<=57){
                num= num*10+(str[j]-48);
                // printf("num-%d",num);
                j++;
                if(str[j+1]>=65&&str[j+1]<=90||str[j]>=97&&str[j+1]<=122){
                    for(int i=0;i<num;i++){
                        printf("%c",ch);
                    }

                }
            }
        }

    }
}