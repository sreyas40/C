#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string: ");
    //scanf("%s", str);   
    //above method will scan until ' ',\n or \0
    //gets(str); 
    //above method will scan until \n or \0
    // fgets(str, 20, stdin); 
    //above method will scan until n-1 characters or \n or \0
    // scanf("%[^.]s", str);
    // scanf("%[^\n]s", str);
    // scanf("%[^e]s", str);
    // above method will scan until the mentioned character in square bracket is encountered . ^ means until
    // printf("The string you entered is: %s", str);
 

//write a program in c to scan any characters like alphabets, numbers,.,comma,space ,\n, but should stop scanning when any other symbol is encountered
    scanf("%[a-z,A-Z,0-9,., ,\n]s", str);
    //in the above only the mentioned characters will be scanned, if any other is encountered the scan will stop
    printf("The string you entered is: %s", str);
    return 0;
}