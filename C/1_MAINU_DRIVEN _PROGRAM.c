#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    char c;
    int ch, ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10, ch11;
    float fno, sno;
    do
    {
    start:

        printf("\n\t==============================================================================");
        printf("\n\t\t\t ⟪⟪ Main Menu ⟫⟫ ");
        printf("\n\t==============================================================================");
        printf("\n\t 1.MATHEMATICAL CALCULATIONS");
        printf("\n\t 2.BUSINESS SECTOR");
        printf("\n\t 3.STUDENT SECTOR ");
        printf("\n\t 4.special programs");
        printf("\n\t 5.Exit");

        printf("\n\n Enter your choice=");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            do
            {
                printf("\n\t==============================================================================");
                printf("\n\t\t\t ⟪⟪ MATHEMATICAL OPERATIONS ⟫⟫");
                printf("\n\t==============================================================================");
                printf("\n\n 1. ARITHMETIC");
                printf("\n\n 2. CONVERTER");
                printf("\n\n 3. TO FIND AREA AND PERIMETER");
                printf("\n\n 4. BACK TO MAIN MENU");
                printf("\n\n 5. EXIT");

                printf("\n\n Enter your choice=");
                scanf("%d", &ch1);

                switch (ch1)
                {
                case 1:
                    do
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t ⟪⟪ ARITHMETIC ⟫⟫ ");
                        printf("\n\t==============================================================================");
                        printf("\n\t 1.ADDITION ");
                        printf("\n\t 2.SUBSTRACTION");
                        printf("\n\t 3.MULTIPLICATION");
                        printf("\n\t 4.DIVISION");
                        printf("\n\t 5.BACK TO MAIN MENU");
                        printf("\n\t 6.exit");

                        printf("\n\n Enter your choice=");
                        scanf("%d", &ch2);

                        switch (ch2)
                        {
                        case 1:
                        {
                            do
                            {
                                printf("\n\t==============================================================================");
                                printf("\n\t\t\t   ⟪⟪ ADDITION ⟫⟫");
                                printf("\n\t==============================================================================");
                                printf("\n\t 1.addition of two integers");
                                printf("\n\t 2.addtion of 2 floats");
                                printf("\n\t 3.back to main menu");
                                printf("\n\t 4.exit");

                                printf("\n\n Enter your choice=");
                                scanf("%d", &ch3);

                                switch (ch3)
                                {
                                case 1:
                                {
                                    printf("\n\t\t\t\t ADDITION ");
                                    printf("\n\n program for addition of two numbers ");
                                    printf("\n\n enter the first number=");
                                    scanf("%d", &fno);
                                    printf("\n\n enter the second number=");
                                    scanf("%d", &sno);
                                    printf("\n\n addition of two numbers=%d", fno + sno);
                                }
                                break;
                                case 2:
                                {
                                    printf("\n\n program for addition of two float numbers");
                                    printf("\n\n enter the fno=");
                                    scanf("%f", &fno);
                                    printf("\n\n enter the sno=");
                                    scanf("%f", &sno);
                                    printf("\n\n addition of %f and %f =%f", fno, sno, fno + sno);
                                }
                                break;
                                case 3:
                                    goto start;
                                    break;
                                case 4:
                                    exit(0);
                                    break;
                                default:
                                    printf("\n\n please enter a valid number");
                                    break;

                                    printf("\n\n Do you want to continue menu (y/n ).........!");
                                    scanf(" %c", &c);
                                }
                            } while (c == 'y' || c == 'Y');
                        }
                        break;
                        case 2:
                        {
                            do
                            {
                                printf("\n\t==============================================================================");
                                printf("\n\t\t\t  ⟪⟪ SUBSTRACTION  ⟫⟫ ");
                                printf("\n\t==============================================================================");
                                printf("\n\t 1.substraction of two integers");
                                printf("\n\t 2.substraction of 2 floats");
                                printf("\n\t 3.back to main menu");
                                printf("\n\t 4.exit");

                                printf("\n\n Enter your choice=");
                                scanf(" %d", &ch4);

                                switch (ch4)
                                {
                                case 1:
                                {

                                    printf("\n\n program for subtraction of two numbers");
                                    printf("\n\n enter the first number=");
                                    scanf("%d", &fno);
                                    printf("\n\n enter the second number=");
                                    scanf("%d", &sno);
                                    printf("\n\n subtraction of two numbers = %d", fno - sno);
                                }
                                break;
                                case 2:
                                {
                                    printf("\n\n program for subtraction of two float numbers");
                                    printf("\n\n Enter the first number=");
                                    scanf("%f", &fno);
                                    printf("\n\n Enter the second number=");
                                    scanf("%f", &sno);
                                    printf("\n\n multiplication of %f and %f numbers=%.3f", fno, sno, fno - sno);
                                }
                                break;
                                case 3:
                                    goto start;
                                    break;
                                case 4:
                                    exit(0);
                                    break;
                                default:
                                    printf("\n\n please enter a valid number");
                                    break;

                                    printf("\n\n Do you want to continue menu (y/n ).........!");
                                    scanf("%c", &c);
                                }
                            } while (c == 'y' || c == 'Y');
                        }
                        break;
                        case 3:
                        {
                            do
                            {
                                printf("\n\t==============================================================================");
                                printf("\n\t\t\t ⟪⟪ MULTIPLICATION ⟫⟫");
                                printf("\n\t==============================================================================");
                                printf("\n\t 1.multiplication of two integers");
                                printf("\n\t 2.multiplication of 2 floats");
                                printf("\n\t 3.back to main menu");
                                printf("\n\t 4.exit");

                                printf("\n\n Enter your choice=");
                                scanf(" %d", &ch5);

                                switch (ch5)
                                {
                                case 1:
                                {
                                    printf("\n\n program for multiplication of two  integers");
                                    printf("\n\n Enter the first number =");
                                    scanf("%d", &fno);
                                    printf("\n\n Enter the second number =");
                                    scanf("%d", &sno);
                                    printf("\n\n multiplication of %d and %d numbers=%d", fno, sno, fno * sno);
                                }
                                break;
                                case 2:
                                {
                                    printf("\n\n program for multiplication of two float numbers");
                                    printf("\n\n Enter the first number=");
                                    scanf("%f", &fno);
                                    printf("\n\n Enter the second number=");
                                    scanf("%f", &sno);
                                    printf("\n\n multiplication of %f and %f numbers=%.3f", fno, sno, fno * sno * 1.0);
                                }
                                break;
                                case 3:
                                    goto start;
                                    break;
                                case 4:
                                    exit(0);
                                    break;
                                default:
                                    printf("\n\n please enter a valid number");
                                    break;

                                    printf("\n\n Do you want to continue menu (y/n ).........!");
                                    scanf("%c", &c);
                                }
                            } while (c == 'y' || c == 'Y');
                        }
                        break;
                        case 4:
                        {
                            do
                            {
                                printf("\n\t==============================================================================");
                                printf("\n\t\t\t  ⟪⟪ DIVISION ⟫⟫");
                                printf("\n\t==============================================================================");
                                printf("\n\t 1.division of two integers");
                                printf("\n\t 2.division of 2 floats");
                                printf("\n\t 3.back to main menu");
                                printf("\n\t 4.exit");

                                printf("\n\n Enter your choice=");
                                scanf(" %d", &ch6);

                                switch (ch6)
                                {
                                case 1:
                                {
                                    printf("\n\n enter the first number=");
                                    scanf("%d", &fno);
                                    printf("\n\n enter the second numbr=");
                                    scanf("%d", &sno);
                                    printf("\n\n division of %d and %d=%d", fno, sno, fno / sno);
                                }
                                break;
                                case 2:
                                {
                                    printf("\n\n Enter the first number =");
                                    scanf("%f", &fno);
                                    printf("\n\n Enter the second number =");
                                    scanf("%f", &sno);
                                    printf("\n\n division of %f and %f numbers=%6.3f", fno, sno, (1.0) * fno / sno);
                                }
                                break;
                                case 3:
                                    goto start;
                                    break;
                                case 4:
                                    exit(0);
                                    break;
                                default:
                                    printf("\n\n please enter a valid number");
                                    break;

                                    printf("\n\n Do you want to continue menu (y/n ).........!");
                                    scanf("%c", &c);
                                }
                            } while (c == 'y' || c == 'Y');
                        }
                        break;
                        case 5:
                            goto start;
                            break;
                        case 6:
                            exit(0);
                            break;
                        default:
                            printf("\n\n please enter a valid number");
                            break;
                            printf("\n\n Do you want to continue menu (y/n ).........!");
                            scanf("%c", &c);
                        }
                    } while (c == 'y' || c == 'Y');
                    break;
                case 2:
                    do
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t ⟪⟪ CONVERTER  ⟫⟫ ");
                        printf("\n\t==============================================================================");
                        printf("\n\n 1. kilometer to meter");
                        printf("\n\n 2. Meter to kilometer");
                        printf("\n\n 3. temperature from fahrenheit to degeree centigrade");
                        printf("\n\n 4. temperature from degeree to fahrenheit centigrade");
                        printf("\n\n 5. To display time in minutes and second");
                        printf("\n\n 6. back to main menu");
                        printf("\n\n 7. exit");

                        printf("\n\n Enter your choice=");
                        scanf(" %d", &ch7);

                        switch (ch7)
                        {
                        case 1:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t ⇛ kilometer to meter ⇚");
                            printf("\n\t==============================================================================");
                            printf("\n\n program for converting kilometer into meter");
                            printf("\n\n enter the kilometer=");
                            scanf("%f", &kilometer);
                            printf("\n\n meter of %f kilometer is =%f", kilometer, 1000 * kilometer);
                        }
                        break;
                        case 2:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t ⇛  Meter to kilometer ⇚");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the meter =");
                            scanf("%d", &meter);
                            printf("\n\n kilometer of %d meter=%d", meter, 1000 / meter);
                        }
                        break;
                        case 3:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t\t ⇛  Temperature from fahrenheit to degeree centigrade  ⇚");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the value of fahrenheit=");
                            scanf("%d", &f);
                            printf("\n\n degree c of fahrenheit of %d= %d", f, 5.0 / 9.0 * (f - 32));
                        }
                        break;
                        case 4:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t ⇛ Temperature from degeree to fahrenheit centigrade  ⇚");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the value of degree centigrade=");
                            scanf("%d", &c);
                            printf("\n\n fahrenheit of %d degree c = %d", c, c * 9.0 / 5.0 + 32;);
                        }
                        break;
                        case 5:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t\t ⇛ To display time in minutes and second  ⇚");
                            printf("\n\t==============================================================================");
                            printf("\n\n Enter the time in second=");
                            scanf("%d", &tsec);
                            min = tsec / 60;
                            sec = tsec % 60;
                            printf("\n\n second =%d ===> %d minute %d second", tsec, min, sec);
                        }
                        break;
                        case 6:
                            goto start;
                            break;
                        case 7:
                            exit(0);
                            break;
                        default:
                            printf("\n\n please enter a valid number");
                            break;

                            printf("\n\n Do you want to continue menu (y/n ).........!");
                            scanf("%c", &c);
                        }
                    } while (c == 'y' || c == 'Y');
                    break;
                case 3:
                    do
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\n TO find area and perimeter ");
                        printf("\n\t==============================================================================");
                        printf("\n\n 1. Area and perimeter of rectangle");
                        printf("\n\n 2. Area and perimeter of circle");
                        printf("\n\n 3. ");
                        printf("\n\n 4. back to main menu");
                        printf("\n\n 5. exit");

                        printf("\n\n Enter your choice=");
                        scanf("%d", &ch8);

                        switch (ch8)
                        {

                        case 1:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t Area and perimeter of rectangle");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the length of rectangle=");
                            scanf("%d", &length);
                            printf("\n\n enter the breadth of rectanle=");
                            scanf("%d", &breadth);
                            printf("\n\n area of rectangle =%d", length * breadth);
                            printf("\n\n perimeter of rectangle=%d", 2 * (length + breadth));
                        }
                        break;
                        case 2:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t Area and perimeter of circle");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the radius of circle=");
                            scanf("%f", &radius);
                            printf("\n\n area of radius %f circle =%f", radius, 3.14 * radius * radius);
                            printf("\n\n perimeter of circle =%f", 2 * 3.14 * radius);
                        }
                        break;
                        case 3:
                            goto start;
                            break;
                        case 4:
                            exit(0);
                            break;
                        default:
                            printf("\n\n please enter a valid number");
                            break;
                            printf("\n\n Do you want to continue menu (y/n ).........!");
                            scanf(" %c", &c);
                        }
                    } while (c == 'y' || c == 'Y');
                    break;
                case 4:
                    goto start;
                    break;
                case 5:
                    exit(0);
                    break;
                default:
                    printf("\n\n please enter a valid number");
                    break;
                    printf("\n\n Do you want to continue menu (y/n ).........!");
                    scanf("%c", &c);
                }
            } while (c == 'y' || c == 'Y');
        }
        break;
        case 2:
        {
            do
            {
                printf("\n\t==============================================================================");
                printf("\n\t\t\t BUSINESS SECTOR");
                printf("\n\t==============================================================================");
                printf("\n1. PROFIT LOSS  ");
                printf("\n2. ELECTICITY BILL  ");
                printf("\n3. TO CALCULATE SIMPLE INTEREST");
                printf("\n4. TO PRINT MINIMUM NUMBER OF NOTES");
                printf("\n5. BACK TO MAIN MENU ");
                printf("\n6. EXIT ");

                printf("\n\n Enter your choice=");
                scanf("%d", &ch9);

                switch (ch10)
                {
                case 1:
                {
                    printf("\n\t==============================================================================");
                    printf("\n\t\t\t  PROFIT LOSS  ");
                    printf("\n\t==============================================================================");
                    printf("\n\n Enter the selling price=");
                    scanf("%d", &sp);
                    printf("\n\n Enter the purchase price=");
                    scanf("%d", &pp);

                    if (sp == pp)
                        printf("\n\n nor profit neither loss");
                    else
                    {
                        if (sp > pp)
                            printf("\n\n profitable deal");
                        else
                            printf("\n\n loss deal");
                    }
                }
                break;
                case 2:
                {
                    printf("\n\t==============================================================================");
                    printf("\n\t\t\t ELECTRICITY BILL  ");
                    printf("\n\t==============================================================================");
                    printf("\n\n Enter units=");
                    scanf("%d", &unit);

                    if (unit < 0)
                        printf("\n\n not valid");
                    else
                    {
                        if (unit == 0)
                            printf("\n\n No electricity consumed ");
                        else if (unit > 0 && unit <= 50)
                            printf("\n\n your bill for electricityconsumed is %f", rs = 0.50 * unit);
                        else if (unit > 50 && unit <= 150)
                            printf("\n\n your bill for electricity consumed is rupees %f", rs = 0.75 * unit);
                        else if (unit > 150 && unit <= 250)
                            printf("\n\n you bill for electricity consumed is rupees %f", rs = 1.20 * unit);
                        else
                            printf("\n\n your bill for electricity consumed is rupess %f", rs = 1.50 * unit);
                    }
                }
                break;
                case 3:
                {
                    printf("\n\t==============================================================================");
                    printf("\n\t\t\t TO CALCULATE SIMPLE INTEREST");
                    printf("\n\t==============================================================================");
                    printf("\n\n enter the principal amount=");
                    scanf("%d", &principal);
                    printf("\n\n enter the number of years=");
                    scanf("%d", &num_of_years);
                    printf("\n\n enter the rate of interest=");
                    scanf("%f", &rate_of_interest);
                    printf("\n\n simple interest =%f", principal * num_of_years * rate_of_interest / 100);
                }
                break;
                case 4:
                {
                    printf("\n\t==============================================================================");
                    printf("\n\t\t\t  ⟪⟪ TO PRINT MINIMUM NUMBER OF NOTES ⟫⟫ ");
                    printf("\n\t=============================================================================="); //   remain
                }
                break;
                case 5:
                    goto start;
                    break;
                case 6:
                    exit(0);
                    break;
                default:
                    printf("\n\n please enter a valid number");
                    break;

                    printf("\n\n Do you want to continue menu (y/n ).........!");
                    scanf("%c", &c);
                }
            } while (c == 'y' || c == 'Y');
        }
        break;
        case 3:
        {
            do
            {

                printf("\n\t==============================================================================");
                printf("\n\t\t\t\t ⟪⟪ student sector ⟫⟫ ");
                printf("\n\t==============================================================================");
                printf("\n\t 1.GEOMETRY");
                printf("\n\t 2.COMPARISION OF NUMBERS");
                printf("\n\t 3.CHECKING OF CONDITIONS");
                printf("\n\t 4.ARITHMETIC CALCULATIONS");
                printf("\n\t 5.BACK TO MAIN MENU");
                printf("\n\t 6.Exit");

                printf("\n\n Enter your choice=");
                scanf(" %d", &ch9);

                switch (ch9)
                {
                case 1:
                {
                    do
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t\t ⟪⟪ GEOMETRY ⟫⟫");
                        printf("\n\t==============================================================================");
                        printf("\n\t 1.CHECK THE TYPE OF TRIANGLE ?");
                        printf("\n\t 2.CHECK ANGLES OF TRIANGLE VALID OR NOT");
                        printf("\n\t 2.BACK TO MAIN MENU");
                        printf("\n\t 3.Exit");

                        printf("\n\n Enter your choice=");
                        scanf(" %d", &ch10);

                        switch (ch10)
                        {
                        case 1:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t\t  ⟪⟪ CHECK THE TYPE OF TRIANGLE ⟫⟫ ");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the first side=");
                            scanf("%d", &s1);
                            printf("\n\n enter the second side=");
                            scanf("%d", &s2);
                            printf("\n\n enter the third side=");
                            scanf("%d", &s3);

                            if (s1 == 0 || s2 == 0 || s3 == 0)
                            {
                                printf("\n\n enter the valid side");
                            }
                            else if (s1 == s2 && s2 == s3)
                            {
                                printf("\n\n this is a equilateral triangle");
                            }
                            else if (s1 * s1 == s2 * s2 + s3 * s3 || s2 * s2 == s1 * s1 + s3 * s3 || s3 * s3 == s2 * s2 + s1 * s1)
                                printf("\n\n this is right angle triangle");
                            else
                            {
                                if (s1 == s2 || s2 == s3 || s3 == s1)
                                    printf("\n\n this is isoscales triangle");
                                else
                                {
                                    printf("\n\n THis is scalene triangle");
                                }
                            }
                        }
                        break;
                        case 2:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t ⟪⟪ CHECK ANGLES OF TRIANGLE VALID OR NOT ⟫⟫");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the first angle=");
                            scanf("%d", &a1);
                            printf("\n\n enter the second angle=");
                            scanf("%d", &a2);
                            printf("\n\n enter the third angle=");
                            scanf("%d", &a3);

                            if (a1 == 0 || a2 == 0 || a3 == 0)
                                printf("\n\n Enter the valid angles");
                            else
                            {
                                if (a1 + a2 + a3 == 180)
                                    printf("\n this is triangle ");
                                else
                                {
                                    printf("\n\n this is not a triangle");
                                }
                            }
                        }
                        break;
                        case 3:
                            goto start;
                            break;
                        case 4:
                            exit(0);
                            break;
                        default:
                            printf("\n\n please enter a valid number");
                            break;

                            printf("\n\n Do you want to continue menu (y/n ).........!");
                            scanf("%c", &c);
                        }
                    } while (c == 'y' || c == 'Y');
                }
                break;
                case 2:
                {
                    printf("\n\t==============================================================================");
                    printf("\n\t\t\t ⟪⟪ COMPARISION OF NUMBERS ⟫⟫");
                    printf("\n\t==============================================================================");
                    printf("\n\t1. CHECK NO. IS POISITIVE OR NEGATIVE");
                    printf("\n\t2. CHECK GREATEST OF TWO NUMBERS");
                    printf("\n\t3. CHECK GREATEST OF THREE NUMBERS");
                    printf("\n\t4. CHECK NO. IS EVEN OR ODD");
                    printf("\n\t5. BACK TO MAIN MENU");
                    printf("\n\t6. Exit");

                    printf("\n\n Enter your choice=");
                    scanf(" %d", &ch11);

                    switch (ch11)
                    {
                    case 1:
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t\t  ⟪⟪ CHECK NO. IS POISITIVE OR NEGATIVE ⟫⟫");
                        printf("\n\t==============================================================================");
                        printf("\n\n enter the number=");
                        scanf("%d", &num);

                        if (num == 0)
                            printf("\n\nnumber is zero");
                        else
                        {
                            if (num > 0)
                            {
                                printf("\n\n number is positive ");
                            }
                            else
                            {
                                printf("\n\n number is negative");
                            }
                        }
                    }
                    break;
                    case 2:
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t  ⟪⟪ CHECK GREATEST OF TWO NUMBERS ⟫⟫ ");
                        printf("\n\t==============================================================================");
                        printf("\n\n enter the fist number=");
                        scanf("%d", &fno);
                        printf("\n\n enter the second number=");
                        scanf("%d", &sno);

                        if (fno == sno)
                            printf("\n\n both numbers are same");
                        else
                        {
                            if (fno > sno)
                                printf("\n\n %d is greater", fno);
                            else
                                printf("\n\n %d is greater", sno);
                        }
                    }
                    break;
                    case 3:
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t\t\t CHECK GREATEST OF THREE NUMBERS");
                        printf("\n\t==============================================================================");
                        printf("\n\n enter the first number=");
                        scanf("%d", &fno);
                        printf("\n\n enter the second number=");
                        scanf("%d", &sno);
                        printf("\n\n enter the third number=");
                        scanf("%d", &tno);

                        if (fno == sno && sno == tno)
                            printf("\n\n all numbers are same");
                        else if (fno > sno && fno > tno)
                            printf("\n\n %d is greater", fno);
                        else if (sno > fno && sno > tno)
                            printf("\n\n %d is greater", sno);
                        else
                            printf("\n\n %d is greater", tno);
                    }
                    break;
                    case 4:
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t  ⟪⟪ CHECK NO. iS EVEN OR ODD ⟫⟫ ");
                        printf("\n\t==============================================================================");
                        printf("\n\n program for checking even or odd");
                        printf("\n\n enter the number=");
                        scanf("%d", &num);

                        if (num % 2 == 0)
                            printf("\n\n number is even");
                        else
                            printf("\n\n number is odd");
                    }
                    break;
                    case 5:
                        goto start;
                        break;
                    case 6:
                        exit(0);
                        break;
                    default:
                        printf("\n\n please enter a valid number");
                        break;

                        printf("\n\n Do you want to continue menu (y/n ).........!");
                        scanf("%c", &c);

                        while (c == 'y' || c == 'Y')
                            ;
                    }
                }
                break;
                case 3:
                {
                    do
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t  ⟪⟪ CHECKING OF CONDITIONS ⟫⟫ ");
                        printf("\n\t==============================================================================");
                        printf("\n\t 1.CHECK NO. IS DIVISIBLE BY  5 AND 11 OR NOT ");
                        printf("\n\t 2.CHECK GIVEN YEAR IS LEAP YEAR OR NOT ");
                        printf("\n\t 3.CHECKING OF CHARCTER");
                        printf("\n\t 4.BACK TO MAIN MENU");
                        printf("\n\t 5.Exit");

                        printf("\n\n Enter your choice=");
                        scanf(" %d", &ch12);

                        switch (ch12)
                        {
                        case 1:
                        {

                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t  ⟪⟪ CHECK NO. IS DIVISIBLE BY  5 AND 11 OR NOT ⟫⟫ ");
                            printf("\n\t==============================================================================");
                            printf("\n\n Enter the number=");
                            scanf("%d", &num);

                            if (num % 5 == 0 && num % 11 == 0)
                                printf("\n\n this number is divisible by 5 and 11");
                            else
                            {
                                printf("\n\n this number is not divisible by 5 and 11");
                            }
                        }
                        break;
                        case 2:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t  ⟪⟪ CHECK GIVEN YEAR IS LEAP YEAR OR NOT ⟫⟫ ");
                            printf("\n\t==============================================================================");
                            printf("\n\n Enter the year =");
                            scanf("%d", &year);

                            if (year % 4 == 0)
                                printf("\n\n this is a leap year");
                            else
                                printf("\n\n this is not a leap year");
                        }
                        break;
                        case 3:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t  ⟪⟪ CHECKING OF CHARCTER ⟫⟫ ");
                            printf("\n\t==============================================================================");
                            printf("\n\n Eneter the charcter from keyboard =");
                            scanf("%c", &ch);

                            if (ch >= 'A' && ch <= 'Z')
                                printf("\n\n capital alphabet");
                            else if (ch >= 'a' && ch <= 'z')
                                printf("\n\n small alphabet");
                            else if (ch >= '0' && ch <= '9')
                                printf("\n\n digit");
                            else
                                printf("\n\n symbol");
                        }
                        break;
                        case 4:

                            goto start;
                            break;
                        case 5:
                            exit(0);
                            break;
                        default:
                            printf("\n\n please enter a valid number");
                            break;

                            printf("\n\n Do you want to continue menu (y/n ).........!");
                            scanf("%c", &c);
                        }
                    } while (c == 'y' || c == 'Y')
                }
                break;
                case 4:
                {
                    printf("\n\t==============================================================================");
                    printf("\n\t\t\t\t ⟪⟪ ARITHMETIC CALCULATIONS ⟫⟫ ");
                    printf("\n\t==============================================================================");
                    printf("\n\n FOR ADDDITION");
                    printf("Enter First number :\n");
                    scanf("%f", &num5);
                    printf("Enter second number :\n");
                    scanf("%f", &num6);
                    printf("Sum of %f and %f is %f\n\n", num5, num6, num5 + num6);

                    printf("\n\n FOR SUBSTRACTION");
                    printf("Enter First number :\n");
                    scanf("%d", &num1);
                    printf("Enter second number :\n");
                    scanf("%d", &num2);
                    sub_result = num1 - num2;
                    printf("Subtraction of %d and %d is %d\n\n", num1, num2, sub_result);

                    printf("\n\n FOR MULTIPLICATION");
                    printf("Enter first number :\n");
                    scanf("%d", &num3);
                    printf("Enter second number :\n");
                    scanf("%d", &num4);
                    multi_result = num3 * num4;
                    printf("multiplication of %d anf %d is %d\n\n", num3, num4, multi_result);

                    printf("\n\n FOR DIVISION");
                    printf("Enter First number :\n");
                    scanf("%f", &num7);
                    printf("Enter second number :\n");
                    scanf("%f", &num8);
                    printf("Division of %f and %f is %f\n", num7, num8, num7 / num8);
                }
                break;
                case 5:
                    goto start;
                    break;
                case 6:
                    exit(0);
                    break;
                default:
                    printf("\n\n please enter a valid number");
                    break;

                    printf("\n\n Do you want to continue menu (y/n ).........!");
                    scanf("%c", &c);
                }
            } while (c == 'y' || c == 'Y') break;
        }
        case 4:
        {
            do
            {
                printf("\n\t==============================================================================");
                printf("\n\t\t\t ⟪⟪ print ⟫⟫ ");
                printf("\n\t==============================================================================");
                printf("\n\t 1. TO PRINT CORRESPONDING DAY OF WEEK ");
                printf("\n\t 2. TO PRINT NUMBER OF DAYS IN MONTH");
                printf("\n\t 3. SWAPING OF TWO NUMBERS");
                printf("\n\t 4. BACK TO MAIN MENU");
                printf("\n\t 5. EXIT");

                printf("\n\n Enter your choice=");
                scanf(" %d", &ch13);

                switch (ch13)
                {
                case 1:
                {
                    printf("\n\t==============================================================================");
                    printf("\n\t\t\t ⟪⟪ TO PRINT CORRESPONDING DAY OF WEEK   ⟫⟫ ");
                    printf("\n\t==============================================================================");
                    printf("\t\n\n  Enter the number =  \n\n\t\t\t\t\t\t\t =");
                    scanf("%d", &num);

                    if (num <= 0 || num >= 8)
                        printf("\n\n Enter the valid number,between 1 to 7");
                    else
                    {
                        if (num == 1)
                            printf("\t monday");
                        else
                        {
                            if (num == 2)
                                printf("\n\n tuesday ");
                            else
                            {
                                if (num == 3)
                                    printf("\n\n wednesday");
                                else
                                {
                                    if (num == 4)
                                        printf("\n\n thursday");
                                    else
                                    {
                                        if (num == 5)
                                            printf("\n\n friday");
                                        else
                                        {
                                            if (num == 6)
                                                printf("\n\n saturday");
                                            else
                                                printf("\n\n sunday");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                break;
                case 2:
                {
                    printf("\n\t==============================================================================");
                    printf("\n\t\t\t ⟪⟪ TO PRINT NUMBER OF DAYS IN MONTH  ⟫⟫ ");
                    printf("\n\t==============================================================================");
                    printf("\n\n Enter a number=");
                    scanf("%d", &month);

                    if (month < 1 || month > 12)
                        printf("\n\n invalid output,put number between 1 to 12");
                    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                        printf("\n\n month has 31 days");
                    else if (month == 4 || month == 6 || month == 9 || month == 11)
                        printf("\n\n month has 30 days ");
                    else
                        printf("\n\n month has 28 days ");
                }
                break;
                case 3:
                {
                    printf("\n\t==============================================================================");
                    printf("\n\t\t\t ⟪⟪ SWAPING OF TWO NUMBERS ⟫⟫ ");
                    printf("\n\t==============================================================================");
                    printf("\n\n enter the first number =");
                    scanf("%d", &fno);
                    printf("\n\n enter the second number=");
                    scanf("%d", &sno);
                    fno = fno + sno; //  dont break sequence
                    sno = fno - sno;
                    fno = fno - sno;
                    printf("\n\n swaping of numbers \n\n fno=%d \n\n sno=%d ", fno, sno);
                }
                break;
                case 4:
                    goto start;
                    break;
                case 5:
                    exit(0);
                    break;
                default:
                    printf("\n\n please enter a valid number");
                    break;

                    printf("\n\n Do you want to continue menu (y/n ).........!");
                    scanf("%c", &c);
                }
            } while (c == 'y' || c == 'Y')
        }
        break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n\n please enter a valid number");
            break;
        }
        printf("\n\n Do you want to continue menu (y/n ).........!");
        scanf("%c", &c);
    } while (c == 'y' || c == 'Y') break;
    printf("\n\n Press any key to exit .......!");
}
