#include <stdio.h>
int primeOrNot(int num);
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    while (1)
    {
        int flag = primeOrNot(num);
        if (flag)
            break;
        else
            num++;
    }
    printf("nearest prime number is %d", num);
}
int primeOrNot(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}