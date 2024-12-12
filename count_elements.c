#include <stdio.h>
int main()
{
    char a[200];
    int vowel, upr, lwr, num, cons, spc, sym;
    vowel = upr = lwr = cons = num = 0;
    printf("Enter string:");
    scanf("%[^\n]s", a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122 || a[i] >= 48 && a[i] <= 57)
        {
            if (a[i] >= 65 && a[i] <= 90)
            {
                upr++;
                if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
                    vowel++;
                else
                    cons++;
            }
            if (a[i] >= 97 && a[i] <= 122)
            {
                lwr++;
                if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                    vowel++;
                else
                    cons++;
            }
            if (a[i] >= 48 && a[i] <= 57)
                num++;
        }
        else if (a[i] > 32)
            sym++;
        if (a[i] == 32)
            spc++;
    }
    printf("vowels-%d lowercase-%d uppercase-%d numbers-%d consonants-%d space-%d symbols-%d ", vowel, lwr, upr, num, cons, spc, sym);
    return 0;
}