#include <stdio.h>
#include <stdlib.h>

int score = 0;

int main()
{
    int minIntAdd = 2, maxIntAdd = 100;
    printf("What is the addition range?\n");
    printf("Lower limit: ");
    scanf("%d", &minIntAdd);
    printf("Upper limit: ");
    scanf("%d", &maxIntAdd);
    while (maxIntAdd <= minIntAdd)
    {
        printf("Invalid input! Upper limit must be greater than lower limit.\n");
        printf("What is the addition range?\n");
        printf("Lower limit: ");
        scanf("%d", &minIntAdd);
        printf("Upper limit: ");
        scanf("%d", &maxIntAdd);
    }
    int minIntMult = 2, maxIntMult = 100;
    printf("What is the multiplication range?\n");
    printf("Lower limit: ");
    scanf("%d", &minIntMult);
    printf("Upper limit: ");
    scanf("%d", &maxIntMult);
    while (maxIntMult <= minIntMult)
    {
        printf("Invalid input! Upper limit must be greater than lower limit.\n");
        printf("What is the multiplication range?\n");
        printf("Lower limit: ");
        scanf("%d", &minIntMult);
        printf("Upper limit: ");
        scanf("%d", &maxIntMult);
    }
    return 0;
}