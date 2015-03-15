#include <stdio.h>

/* Count the characters in stdin */

main()
{
    long nc; // Holds the char count
    for (nc = 0; getchar() != EOF; nc++)
        ;
    printf("\n-------------------\n");
    printf("%8ld characters\n", nc);
}
