// Date :

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int seconds, minutes, hours;
    double i;
    printf("Set time : \n");
    printf("Enter hours : \n ");
    scanf("%d", &hours);
    printf("Enter the minutes ");
    scanf("%d", &minutes);
    printf("%d", &seconds);
    while (1)
    {
        for (hours; hours < 24; hours++)
        {
            for (minutes; minutes < 60; minutes++)
            {
                for (seconds = 1; seconds < 60; seconds++)
                {
                    // clrscr();
                    printf("\n Digital clock :\n\n\n\t\t\t %d %d %d", hours, minutes, seconds);
                    for (i = 1; i < 3940000; i++)
                    {
                    }
                }
                seconds = 0;
            }
            minutes = 0;
        }
        hours = 0;
        break;
    };

    // return 0;

    // Coded by Mayur
}