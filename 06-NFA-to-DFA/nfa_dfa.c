#include <stdio.h>

#define MAX 20

int nfa[MAX][2][MAX];
int dfa[MAX][2];
int nfaStates, dfaCount = 0;

int contains(int set[], int n, int state)
{
    int i;
    for (i = 0; i < n; i++)
        if (set[i] == state)
            return 1;
    return 0;
}

int sameSet(int a[], int na, int b[], int nb)
{
    int i;
    if (na != nb)
        return 0;

    for (i = 0; i < na; i++)
        if (!contains(b, nb, a[i]))
            return 0;

    return 1;
}

int findState(int states[][MAX], int sizes[], int set[], int size)
{
    int i;
    for (i = 0; i < dfaCount; i++)
        if (sameSet(states[i], sizes[i], set, size))
            return i;

    return -1;
}

int main()
{
    int states[MAX][MAX], sizes[MAX];
    int queue = 0, i, j, k, from, to;

    printf("Enter number of NFA states: ");
    scanf("%d", &nfaStates);

    for (i = 0; i < nfaStates; i++)
        for (j = 0; j < 2; j++)
        {
            printf("Enter number of transitions from q%d on %c: ",
                   i, 'a' + j);
            scanf("%d", &nfa[i][j][0]);

            for (k = 1; k <= nfa[i][j][0]; k++)
                scanf("%d", &nfa[i][j][k]);
        }

    states[0][0] = 0;
    sizes[0] = 1;
    dfaCount = 1;

    while (queue < dfaCount)
    {
        for (j = 0; j < 2; j++)
        {
            int newSet[MAX], newSize = 0, found;

            for (i = 0; i < sizes[queue]; i++)
            {
                from = states[queue][i];

                for (k = 1; k <= nfa[from][j][0]; k++)
                {
                    to = nfa[from][j][k];

                    if (!contains(newSet, newSize, to))
                        newSet[newSize++] = to;
                }
            }

            if (newSize == 0)
                dfa[queue][j] = -1;
            else
            {
                found = findState(states, sizes, newSet, newSize);

                if (found == -1)
                {
                    for (k = 0; k < newSize; k++)
                        states[dfaCount][k] = newSet[k];

                    sizes[dfaCount] = newSize;
                    dfa[queue][j] = dfaCount++;
                }
                else
                    dfa[queue][j] = found;
            }
        }

        queue++;
    }

    printf("\nDFA TRANSITION TABLE\n");
    printf("State\t a\t b\n");

    for (i = 0; i < dfaCount; i++)
    {
        printf("{");
        for (j = 0; j < sizes[i]; j++)
        {
            printf("q%d", states[i][j]);
            if (j != sizes[i] - 1)
                printf(",");
        }
        printf("}\t");

        if (dfa[i][0] == -1) printf("-\t");
        else printf("D%d\t", dfa[i][0]);

        if (dfa[i][1] == -1) printf("-\n");
        else printf("D%d\n", dfa[i][1]);
    }

    return 0;
}
