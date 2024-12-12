#include <stdio.h>
int main()
{
    int num_h, g_need;
    printf("Enter number of houses in the city:");
    scanf("%d", &num_h);
    int num_g[num_h];
    printf("Enter number of gold coins in each house:");
    for (int i = 0; i < num_h; i++)
    {
        scanf("%d", &num_g[i]);
    }
    printf("Enter the number of gold coins required:");
    scanf("%d", &g_need);
    int res = num_h, start_p;
    for (start_p = 0; start_p < num_h; start_p++)
    {
        int count = 0, itr = 0;
        for (int i = start_p; i < num_h; i++)
        {
            count += num_g[i];
            itr++;
            if (count >= g_need)
            {
                if(itr < res)
                 res = itr;
                break;
            }
        }
    }
    printf("Minimum number of houses to be raided is %d", res);
}