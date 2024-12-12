#include <stdio.h>
int factorial(int fact);
int main()
{
    int fact;
    printf("enter a number:");
    scanf("%d", &fact);
    int result = factorial(fact);
    printf("factorial of %d is %d", fact, result);
}

int factorial(int fact)
{
    int result=1;
    for (int i = 1; i <= fact; i++)
    {
        result = result * i;
        printf("intermediate -%d\n", result);
    }
    return result;
}