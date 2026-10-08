%{
#include <stdio.h>
int lc = 0, sc = 0, tc = 0, wc = 0, cc = 0;
%}

%%
[ \n]        { cc++; }
[\t]         { tc++; cc++; }
[a-zA-Z]+    { wc++; cc += yyleng; }
[ \t]+       { sc += yyleng; cc += yyleng; }
\n           { lc++; cc++; }
.            { cc++; }
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter the sentence:\n");
    yylex();

    printf("Number of lines: %d\n", lc);
    printf("Number of spaces: %d\n", sc);
    printf("Number of tabs: %d\n", tc);
    printf("Number of words: %d\n", wc);
    printf("Number of characters: %d\n", cc);

    return 0;
}
