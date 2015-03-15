#include <stdio.h>
#define IN_SPACE 0
#define OUT_SPACE 1

int main()
{
    int c, state;
    state = OUT_SPACE;
    while ((c = getchar()) != EOF)
    {
        if ( c == ' ' || c == '\t' || c == '\n')
        {
            if (state == OUT_SPACE)
                putchar('\n');
            state = IN_SPACE;
        }
        else
        {
            state = OUT_SPACE;
            putchar(c);
        }
    }
    return 0;
}
