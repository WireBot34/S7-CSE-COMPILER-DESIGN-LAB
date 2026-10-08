#include <stdio.h>
#include <string.h>

int main()
{
    char s[50], op1, op2, oper;
    int i = 0, t = 1;

    printf("Enter expression (e.g. a+b*c): ");
    scanf("%49s", s);

    while (s[i])
    {
        if (s[i] == '*' || s[i] == '/')
        {
            op1 = s[i - 1];
            oper = s[i];
            op2 = s[i + 1];

            printf("t%d = %c %c %c\n", t, op1, oper, op2);

            s[i - 1] = '0' + t++;
            for (int j = i; s[j]; j++)
                s[j] = s[j + 2];

            i = 0;
        }
        else
            i++;
    }

    i = 0;

    while (s[i])
    {
        if (s[i] == '+' || s[i] == '-')
        {
            printf("t%d = %c %c %c\n",
                   t, s[i - 1], s[i], s[i + 1]);

            s[i - 1] = '0' + t++;
            for (int j = i; s[j]; j++)
                s[j] = s[j + 2];

            i = 0;
        }
        else
            i++;
    }

    printf("Result = %s\n", s);
    return 0;
}
