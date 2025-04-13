#include <stdio.h>
#include <stdlib.h>

int score = 0;
int res, ans;

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
        printf("Lower limit: ");
        scanf("%d", &minIntMult);
        printf("Upper limit: ");
        scanf("%d", &maxIntMult);
    }

    while (score < 10)
    {
        printf("Current score: %d\n", &score);
        res = minIntAdd+rand()%(minIntMult-minIntAdd+1);
    }
    return 0;
}