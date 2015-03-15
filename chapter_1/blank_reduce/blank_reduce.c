/*
 * Program that outputs its stdin reducing any sequence of whitespaces to one
 */

#include <stdio.h>

int main()
{
    int c;
    int in_whitespace = 0;
    while ((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            if(in_whitespace)
            {
                continue;
            }
            else
            {
                in_whitespace = 1;
                putchar(c);
            }
        }
        else
        {
            in_whitespace = 0;
            putchar(c);
        }
    }
}
