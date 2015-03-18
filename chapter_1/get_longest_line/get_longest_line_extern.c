#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int max;
char line[MAXLINE];
char longest[MAXLINE];

int mygetline(char line[], int maxline);
void mycopy(char to[], char from[]);

/* print the longest input line */
main()
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = mygetline()) > 0)
        if (len > max) {
            max = len;
            mycopy();
        }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}

int mygetline(void)
{
    int c, i;
    extern char line[];

    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void mycopy()
{
    int i;
    extern char line[], longest[];
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
