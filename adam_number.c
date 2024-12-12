#include <stdio.h>
#include <math.h>

int main()
{
    int num, num_cpy, num_rev = 0, rem, org_square, rev_square, rev_square_cpy, compare_res = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    num_cpy = num;
    while (num_cpy != 0)
    {
        rem = num_cpy % 10;
        num_rev = num_rev * 10 + rem;
        num_cpy = num_cpy / 10;
    }
    printf("reverse of given number: %d\n", num_rev);
    org_square = ceil(pow(num, 2));
    rev_square = ceil(pow(num_rev, 2));
    printf("squares- %d %d\n", org_square, rev_square);
    rev_square_cpy = rev_square;
    while (rev_square_cpy != 0)
    {
        rem = rev_square_cpy % 10;
        compare_res = compare_res * 10 + rem;
        rev_square_cpy = rev_square_cpy / 10;
    }
    printf("reverse of square- %d\n", compare_res);
    org_square == compare_res ? printf("Number is adam") : printf("Number isn't adam");

    return 0;
}