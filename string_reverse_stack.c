#include <stdio.h>
int stck_ptr=-1,stck[100],stck_max=100;
void push(char ch){
    if(stck_ptr<stck_max){
        stck[++stck_ptr] = ch;
    }
}

char pop(){
    if(stck_ptr>=0){
        return stck[stck_ptr--];
    }
}
int main(){
    char str[1000];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    for (int i = 0; str[i] != '\0';i++){
        push(str[i]);
    }
    for (int i = 0; stck_ptr >= 0;i++){
        printf("%c",pop());
    }
}