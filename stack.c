#include <stdio.h>
int MAX = 3, sp = -1, s[10];
void push(int n)
{
    if (sp < MAX - 1)
    {
        sp++;
        s[sp] = n;
    }
    else
        printf("Stack full");
}
int pop()
{
    if (sp >= 0)
    {
        sp--;
        return s[sp + 1];
    }
    else
    {
        printf("Stack empty");
        return -1;
    }
}
int main()
{
    int ch, n;
    while (1)
    {
        printf("\n1.push\n2.pop\n3.exit\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the number:");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            n = pop();
            if (n != -1)
                printf("%d", n);
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
}