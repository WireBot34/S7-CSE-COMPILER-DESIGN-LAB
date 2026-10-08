#include <stdio.h>
#include <string.h>

char s[50], in[50];
int top = -1, i = 0;

int main()
{
    printf("Enter the expression = ");
    scanf("%49s", in);

    while (in[i])
    {
        s[++top] = in[i++];

        printf("\nShift %c", s[top]);

        if (s[top] == 'i')
        {
            s[top] = 'E';
            printf("\nReduce i to E");
        }

        if (top >= 2 &&
            s[top] == 'E' &&
            s[top - 1] == '+' &&
            s[top - 2] == 'E')
        {
            top -= 2;
            s[top] = 'E';
            printf("\nReduce E+E to E");
        }
    }

    if (top == 0 && s[0] == 'E')
        printf("\nAccepted\n");
    else
        printf("\nRejected\n");

    return 0;
}
