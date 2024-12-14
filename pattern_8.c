// Q:Write a program to print the following pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4
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
            printf("%d  ", j+1);
        }
        printf("\n");
    }
}