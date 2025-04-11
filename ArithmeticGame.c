#include <stdio.h>
#include <stdlib.h>

int score = 0;

int main()
{
    int minIntAdd = 2, maxIntAdd = 100;
    printf("What is the addition range?\n");
    printf("Lower limit: ");
    scanf("%d", minIntAdd);
    printf("Upper limit: ");
    scanf("%d", maxIntAdd);
    while (maxIntAdd <= minIntAdd)
    {
        printf("Invalid input! Upper limit must be greater than lower limit.\n");
        printf("What is the addition range?\n");
        printf("Lower limit: ");
        scanf("%d", minIntAdd);
        printf("Upper limit: ");
        scanf("%d", maxIntAdd);
    }
    return 0;
}