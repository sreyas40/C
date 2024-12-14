// Q:Write a program to print the following pattern
//* * * * 
//  * * * 
//    * * 
//      *
#include <stdio.h>
int main()
{
    int r;
    printf("number of row/column (nxn):");
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        int j;
        for (j = 0; j <= i-1; j++)
        {
            printf("  ");
        }
        for (int k = j; k < r; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}