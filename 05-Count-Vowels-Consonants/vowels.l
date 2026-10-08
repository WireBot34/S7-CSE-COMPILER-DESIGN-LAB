%{
#include <stdio.h>
int vc = 0, cc = 0, ch = 0;
%}

%%
[b-dB-Df-hF-Hj-nJ-Np-tP-Tv-zV-Z]
        { cc++; ch++; }
[aAeEiIoOuU]
        { vc++; ch++; }
.       { ch++; }
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter the sentence:\n");
    yylex();

    printf("Number of vowels: %d\n", vc);
    printf("Number of consonants: %d\n", cc);
    printf("Number of characters: %d\n", ch);

    return 0;
}
