/*
 * Program similar to Unix 'wc'
 * Prints a final line with the number of lines, words and characters
 */

#include <stdio.h>
#define IN_WORD 0
#define OUT_WORD 1

int main()
{
    int c, nl, nw, nc, state;
    c = nl = nw = nc = 0;
    state = OUT_WORD;
    while ((c = getchar()) != EOF)
    {
        nc++;
        if (c == '\n') 
            nl++;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT_WORD;
        else
        {
            if(state == OUT_WORD)
                nw++;
            state = IN_WORD;
        }
    }
    printf("\n%d lines, %d words, %d chars\n", nl, nw, nc);
    return 0;
}
