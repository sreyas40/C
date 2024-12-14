// Q:Write a program to print the following pattern
//1
//2 2
//3 3 3
//4 4 4 4
#include <stdio.h>
int main()
{
    int r;
    printf("number of row/column (nxn):");
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        int j;
        for (j = 0; j <= i; j++)
        {
            printf("%d  ",i+1);
        }
   printf("\n");
    }
}