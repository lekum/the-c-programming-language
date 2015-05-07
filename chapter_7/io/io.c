#include <stdio.h>
#define MAXLINE 80

int main(int argc, char **argv)
{
    if(argc < 2)
    {
        fprintf(stderr, "Incorrect number of params");
        return 1;
    }
    char line [MAXLINE];
    FILE *outfile =  fopen(argv[1], "w");
    printf("Enter lines:\n");
    while(fgets(line, MAXLINE, stdin))
    {
        fputs(line, outfile);
    }
    fclose(outfile);
    return 0;
}
