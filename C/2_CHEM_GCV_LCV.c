#include <stdio.h>
#include <conio.h>


void main()
{
    char c;
    int ch;
    float carbon, hydrogen, sulphur, oxygen, gcv, lcv;
    
    do
    {
    start:
        clrscr();
        printf("\n\t===================================================================");
        printf("\n\t\t\t\t     Main Menu  ");
        printf("\n\t===================================================================");
        printf("\n\n\t 1.TO CALCULATE GROSS CALORIFIC VALUE ");
        printf("\n\n\t 2.TO CALCULATE LOWER CALORIFIC VALUE");
        printf("\n\n\t 3.EXIT");

        printf("\n\n\t Enter your choice = ");
        scanf(" %d", &ch);

        clrscr();
        switch (ch)
        {

        case 1:
        {

            do
            {
                clrscr();
                printf("\n\t===================================================================");
                printf("\n\t\t\t  TO CALCULATE GROSS CALORIFIC VALUE ");
                printf("\n\t=====================================================================");
                printf("\n\n\t1. CALCULATE GROSS CALORIFIC VALUE");
                printf("\n\n\t2. BACK TO MAIN MENU");
                printf("\n\n\t3. EXIT");

                printf("\n\n \tEnter your choice = ");
                scanf(" %d", &ch);
                clrscr();
                switch (ch)
                {
                case 1:
                {
                    printf("\n\n Enter the carbon in percentage =  ");
                    scanf("%f", &carbon);
                    printf("\n\n Enter the oxygen in percentage = ");
                    scanf("%f", &oxygen);
                    printf("\n\n Enter the hydrogen in percentage = ");
                    scanf("%f", &hydrogen);
                    printf("\n\n Enter the sulphur in percentage = ");
                    scanf("%f", &sulphur);
                    gcv = (8080 * carbon + 34500 * (hydrogen - oxygen / 8) + 2240 * sulphur) / 100;
                    printf("\n\t===================================================================");
                    printf("\n\n\t\t\t THE GROSS CALORIFIC VALUE = %.3f ", gcv);
                    printf("\n\t===================================================================");
                }
                break;
                case 2:
                    clrscr();
                    goto start;

                case 3:
                    exit(0);
                    break;
                default:
                    printf("\n\n please enter a valid number");
                    break;
                }
                printf("\n\n Do you want to continue menu (y/n ).........!    ");
                scanf(" %c", &c);

            } while (c == 'y' || c == 'Y');
        }

        break;
        case 2:
        {

            do
            {
                clrscr();
                printf("\n\t===================================================================");
                printf("\n\t\t\t TO CALCULATE LOWER CALORIFIC VALUE ");
                printf("\n\t===================================================================");
                printf("\n\n\t 1. CALCULATE LOWER CALORIFIC VALUE");
                printf("\n\n\t 2. BACK TO MAIN MENU");
                printf("\n\n\t 3. EXIT");

                printf("\n\n\t Enter your choice = ");
                scanf("%d", &ch);
                clrscr();
                switch (ch)
                {
                case 1:
                {
                    printf("\n\n Enter the carbon in percentage = ");
                    scanf("%f", &carbon);
                    printf("\n\n Enter the oxygen in percentage = ");
                    scanf("%f", &oxygen);
                    printf("\n\n Enter the hydrogen in percentage = ");
                    scanf("%f", &hydrogen);
                    printf("\n\n Enter the sulphur in percentage = ");
                    scanf("%f", &sulphur);
                    gcv = (8080 * carbon + 34500 * (hydrogen - oxygen / 8) + 2240 * sulphur) / 100;
                    lcv = (gcv - (0.09 * hydrogen * 587));
                    printf("\n\t===================================================================");
                    printf("\n\n\t\t\t THE LOWER CALORIFIC VALUE = %.3f ", lcv);
                    printf("\n\t===================================================================");
                }
                break;
                case 2:
                    goto start;
                case 3:
                    exit(0);
                    break;
                default:
                    printf("\n\n please enter a valid number");
                    break;
                }
                printf("\n\n Do you want to continue menu (y/n ).........!");
                scanf(" %c", &c);
            } while (c == 'y' || c == 'Y');
        }
        break;
        case 3:
            exit(0);
            break;
        default:
            printf("\n\n please enter a valid number");
            break;
        }
        printf("\n\n Do you want to continue menu (y/n ).........!");
        scanf(" %c", &c);
    } while (c == 'y' || c == 'Y');
}