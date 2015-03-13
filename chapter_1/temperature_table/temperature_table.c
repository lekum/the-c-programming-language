#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define INTERVAL 20

main()
{
    printf("CELSIUS - FAHRENHEIT\n");
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + INTERVAL)
    {
        printf("%7d   %10.1f\n", fahr, (5.0/9.0)*(fahr - 32));
    }
}
