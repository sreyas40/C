// Q:Write a program to print the following pattern
//* * * * *
//* * * *
//* * *
//* *   
//*

#include <stdio.h>
int main()
{
    int r;
    printf("number of row/column (nxn):");
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        for (int j = r-1; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}