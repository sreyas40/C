#include <stdio.h>
int main()
{
    int a[50][50];
    int r, c;
    printf("Enter Rows:");
    scanf("%d", &r);
    printf("Enter Columns:");
    scanf("%d", &c);
    printf("Enter array elements:");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}