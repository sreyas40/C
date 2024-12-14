
// Qn: Find the difference between the sum of odd and even position digits 
// Qn: Find the difference between the sum of odd and even digits 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int odd_n = 0, even_n = 0;
    char str[1000];
    printf("Enter a number: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++){
        if(str[i]%2==0){
            even_n +=str[i]-48;
        }else
            odd_n += str[i] - 48;
    }
    printf("The difference between odd and even [position] digits is %d", abs(odd_n - even_n));
}