#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int num, num_cpy, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    num_cpy = num;
    int power = log10(num )+ 1;
    printf("power- %d\n", power);
    while (num_cpy != 0)
    {
        rem = num_cpy % 10;
        sum = sum + ceil(pow(rem, 3));
        printf("sum- %d\n", sum);
        num_cpy = num_cpy / 10;
    }
    sum == num ? printf("Number is armstrong") : printf("Number isn't armstrong");
}
