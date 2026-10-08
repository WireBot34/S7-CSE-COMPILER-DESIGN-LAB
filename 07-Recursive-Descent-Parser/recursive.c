#include <stdio.h>

char s[100];
int p = 0, ok = 1;

void T()
{
    if (s[p] == 'i')
        p++;
    else
        ok = 0;
}

void EPC()
{
    if (s[p] == '+')
    {
        p++;
        T();
        EPC();
    }
}

void EC()
{
    T();
    EPC();
}

int main()
{
    scanf("%99s", s);
    EC();

    if (ok && s[p] == '\0')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
