#include <stdio.h>
int main()
{
    char phone[200], valid_phone[200];
    printf("enter phone: ");
    scanf("%s", phone);
    int non_zero = 0, j = 0;
    for (int i = 0; phone[i] != '\0'; i++)
    {
        if (phone[i] != '0')
        {
            non_zero = 1;
        }

        if (non_zero == 1 && phone[i] >= 48 && phone[i] <= 57&&j<10)
        {
            valid_phone[j] = phone[i];
            // printf("phone i - %c\n", phone[i]);
            j++;
        }
    }
    valid_phone[j] = '\0';
    printf("valid phone: %s", valid_phone);
}