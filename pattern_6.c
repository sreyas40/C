// Q:Write a program to print the following pattern
//      *
//    * * *
//  * * * * *
//* * * * * * *
#include <stdio.h>
int main()
{
    int r;
    printf("number of row/column (nxn):");
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        int j=0;
        printf("%d ", i);
        for (j; j < r-i-1; j++)
        {
            printf("  ");
        }
        for (int k = j; k < r; k++)
        {
            printf("* ");
        }
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}