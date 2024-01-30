#include <stdio.h>

void main()
{

    int ly;

    printf("enter the year: ");
    scanf("%d", &ly);

    if (ly % 4 == 0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }

    return 0;
}
