#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], *p, x, y;
    int v[26] = {0}, n;

    printf("Enter the statement : ");
    scanf("%99s", s);

    p = strtok(s, ";,");

    while (p)
    {
        if (sscanf(p, "%c=%d", &x, &n) == 2)
            v[x - 'a'] = n;

        else if (sscanf(p, "%c=%c", &x, &y) == 2)
            v[x - 'a'] = v[y - 'a'];

        printf("%c=%d\n", x, v[x - 'a']);

        p = strtok(NULL, ";,");
    }

    return 0;
}
