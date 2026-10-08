#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    int i, j, t = 0, flag;
    char s[30], ch;
    char keyword[20][30] = {"int", "main", "if", "return", "else"};

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fprintf(output, "Token No\tToken\tLexeme\tLine No\n");

    while (!feof(input))
    {
        i = 0;
        flag = 0;
        ch = fgetc(input);

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            fprintf(output, "%d\tOperator\t%c\t%d\n", t++, ch, i);
        }
        else if (ch == '(' || ch == ')' || ch == '{' ||
                 ch == '}' || ch == ';' || ch == '=')
        {
            fprintf(output, "%d\tSpecial Symbol\t%c\t%d\n", t++, ch, i);
        }
        else if (isdigit(ch))
        {
            s[0] = ch;
            i = 1;
            ch = fgetc(input);

            while (isdigit(ch) && ch != ' ')
            {
                s[i++] = ch;
                ch = fgetc(input);
            }

            s[i] = '\0';
            fprintf(output, "%d\tNumber\t%s\t%d\n", t++, s, i);
        }
        else if (isalpha(ch))
        {
            s[0] = ch;
            i = 1;
            ch = fgetc(input);

            while (isalnum(ch) && ch != ' ')
            {
                s[i++] = ch;
                ch = fgetc(input);
            }

            s[i] = '\0';

            for (j = 0; j < 5; j++)
            {
                if (strcmp(s, keyword[j]) == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag == 1)
                fprintf(output, "%d\tKeyword\t%s\t%d\n", t++, s, i);
            else
                fprintf(output, "%d\tIdentifier\t%s\t%d\n", t++, s, i);
        }
        else if (ch == '\n')
        {
            t++;
        }
    }

    fclose(input);
    fclose(output);

    return 0;
}
