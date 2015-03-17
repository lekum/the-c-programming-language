#include <string.h>
#include <stdio.h>
#define MAXLINE 1000

int reverse (char origin[], char dest[]);
int mygetline(char s[],int lim);

int reverse (char origin[], char dest[])
{
    int i, idx;
    for (i = 0; origin[i] != '\0'; i++)
        ;
    idx = i;
    for (i = 0; i < idx; i++)
        dest[i] = origin[idx - i - 1];
    dest[i] = '\0';
    return 0;
}

int mygetline(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int main()
{
    char original_line[MAXLINE];
    char reversed_line[MAXLINE];
    while (0 != mygetline(original_line, MAXLINE))
    {
        reverse(original_line, reversed_line);
        printf("%s", reversed_line);
    }
    return 0;
}
