#include <stdio.h>
int factorial(int fact)
{
    if (fact >= 1)
    {
        return fact * factorial(fact - 1);
    }
    else
        return 1;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("Factorial of %d is %d", num, result);
}