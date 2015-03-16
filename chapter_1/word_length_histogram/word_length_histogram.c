#include <stdio.h>
#define IN_WORD 0
#define OUT_WORD 1
#define MAX_LENGTH 30

int main()
{
    int word_lengths[MAX_LENGTH], i, j;
    int c, nc, state;
    for (i=0; i < MAX_LENGTH; i++)
        word_lengths[i] = 0;
    nc = 0;
    state = OUT_WORD;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN_WORD)
            {
                word_lengths[nc-1]++;
                nc = 0;
            }
            state = OUT_WORD;
        }
        else
        {
            if (state == OUT_WORD)
                state = IN_WORD;
            nc ++;
        }
    }
    printf("\n--\n");
    for (i = 0; i < MAX_LENGTH; i++)
    {
        printf("%i: ", i+1);
        for (j = 0; j < word_lengths[i]; j++)
            putchar('#');
        printf("\n");
    }
    return 0;
}
