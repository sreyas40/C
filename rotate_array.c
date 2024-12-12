#include <stdio.h>
int main()
{
    int limit, temp, pos;
    char dir;
    printf("Enter the limit:");
    scanf("%d", &limit);
    int a[limit];
    printf("Enter the array elements:");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter direction and number of positions to rotate (eg: r 2 means right by 2 positions):");
    scanf("\n%c%d", &dir, &pos);
    printf("selected direction is %c and number of positions is %d\n", dir, pos);
    if (dir == 'r')
    {
        // code for rotating array in right direction by any number of positions
        for (int i = 0; i < pos; i++)
        {

            temp = a[limit - 1];
            for (int i = limit - 1; i > 0; i--)
            {
                a[i] = a[i - 1];
            }
            a[0] = temp;
        }
    }
    else
    {
        // code for rotating array in left direction by any number of positions
        for (int i = 0; i < pos; i++)
        {

            temp = a[0];
            for (int i = 0; i < limit; i++)
            {
                a[i] = a[i + 1];
            }
            a[limit - 1] = temp;
        }
    }
    for (int i = 0; i < limit; i++)
    {
        printf("%d \t ", a[i]);
    }
}