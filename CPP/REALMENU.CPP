#include <stdio.h>
#include<stdio.h>
#include <stdlib.h>

void main()
{
    char c;
    int ch;
    float fno, sno,tno,meter, kilometer,tsec, min, sec,length , breadth,radius,sp,pp,unit,principal,num_of_years,rate_of_interest,s1,s2,s3,a1,a2,a3,year,sub_result, multi_result,
    num,month,fahrenheit,rs,c;
    do
    {
    start:
clrscr();
        printf("\n\t==============================================================================");
        printf("\n\t\t\t ⟪⟪ Main Menu ⟫⟫ ");
        printf("\n\t==============================================================================");
        printf("\n\t 1.MATHEMATICAL CALCULATIONS");
        printf("\n\t 2.BUSINESS SECTOR");
        printf("\n\t 3.STUDENT SECTOR ");
        printf("\n\t 4.special programs");
        printf("\n\t 5.Exit");

        printf("\n\n Enter your choice=");
        scanf("%f", &ch);

        switch (ch)
        {
        case 1:
        {
            do
            {
                clrscr();
                printf("\n\t==============================================================================");
                printf("\n\t\t\t ⟪⟪ MATHEMATICAL OPERATIONS ⟫⟫");
                printf("\n\t==============================================================================");
                printf("\n\n 1. ARITHMETIC");
                printf("\n\n 2. CONVERTER");
                printf("\n\n 3. TO FIND AREA AND PERIMETER");
                printf("\n\n 4. BACK TO MAIN MENU");
                printf("\n\n 5. EXIT");

                printf("\n\n Enter your choice=");
                scanf("%f", &ch);

                switch (ch)
                {
                case 1:
                    do
                    {
                        clrscr();
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
                        scanf("%f", &ch);

                        switch (ch)
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
                                scanf("%f", &ch);

                                switch (ch)
                                {
                                case 1:
                                {
                                    printf("\n\t\t\t\t ADDITION ");
                                    printf("\n\n program for addition of two numbers ");
                                    printf("\n\n enter the first number=");
                                    scanf("%f", &fno);
                                    printf("\n\n enter the second number=");
                                    scanf("%f", &sno);
                                    printf("\n\n addition of two numbers=%f", fno + sno);
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
                                }
                                printf("\n\n Do you want to continue menu (y/n ).........!");
                                scanf(" %c", &c);

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
                                scanf(" %f", &ch);

                                switch (ch)
                                {
                                case 1:
                                {

                                    printf("\n\n program for subtraction of two numbers");
                                    printf("\n\n enter the first number=");
                                    scanf("%f", &fno);
                                    printf("\n\n enter the second number=");
                                    scanf("%f", &sno);
                                    printf("\n\n subtraction of two numbers = %f", fno - sno);
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
                                }
                                printf("\n\n Do you want to continue menu (y/n ).........!");
                                scanf("%c", &c);

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
                                scanf(" %f", &ch);

                                switch (ch)
                                {
                                case 1:
                                {
                                    printf("\n\n program for multiplication of two  integers");
                                    printf("\n\n Enter the first number =");
                                    scanf("%f", &fno);
                                    printf("\n\n Enter the second number =");
                                    scanf("%f", &sno);
                                    printf("\n\n multiplication of %f and %f numbers=%f", fno, sno, fno * sno);
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
                                }
                                printf("\n\n Do you want to continue menu (y/n ).........!");
                                scanf("%c", &c);

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
                                scanf(" %f", &ch);

                                switch (ch)
                                {
                                case 1:
                                {
                                    printf("\n\n enter the first number=");
                                    scanf("%f", &fno);
                                    printf("\n\n enter the second numbr=");
                                    scanf("%f", &sno);
                                    printf("\n\n division of %f and %f=%f", fno, sno, fno / sno);
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
                                }
                                printf("\n\n Do you want to continue menu (y/n ).........!");
                                scanf("%c", &c);

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
                        }
                        printf("\n\n Do you want to continue menu (y/n ).........!");
                        scanf("%c", &c);

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
                        scanf(" %f", &ch);

                        switch (ch)
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
                            scanf("%f", &meter);
                            printf("\n\n kilometer of %f meter=%f", meter, 1000 / meter);                                           //meter, kilometer
                        }
                        break;
                        case 3:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t\t ⇛  Temperature from fahrenheit to degeree centigrade  ⇚");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the value of fahrenheit=");
                            scanf("%f",&fahrenheit);
                            printf("\n\n degree c of fahrenheit of %f= %f", fahrenheit, 5.0 / 9.0 * (fahrenheit - 32));
                        }
                        break;
                        case 4:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t ⇛ Temperature from degeree to fahrenheit centigrade  ⇚");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the value of degree centigrade=");
                            scanf("%f", &c);
                            printf("\n\n fahrenheit of degree c = %f",c * 9.0 / 5.0 + 32;);
                        }
                        break;
                        case 5:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t\t ⇛ To display time in minutes and second  ⇚");
                            printf("\n\t==============================================================================");
                            printf("\n\n Enter the time in second=");
                            scanf("%f", &tsec);
                            min = tsec / 60;
                            sec = tsec % 60;
                            printf("\n\n second =%f ===> %f minute %f second", tsec, min, sec);                                       //tsec, min, sec
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
                        }
                        printf("\n\n Do you want to continue menu (y/n ).........!");
                        scanf("%c", &c);

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
                        scanf("%f", &ch);

                        switch (ch)
                        {

                        case 1:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t Area and perimeter of rectangle");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the length of rectangle=");
                            scanf("%f", &length);
                            printf("\n\n enter the breadth of rectanle=");
                            scanf("%f", &breadth);
                            printf("\n\n area of rectangle =%f", length * breadth);
                            printf("\n\n perimeter of rectangle=%f", 2 * (length + breadth));                                             // length , breadth
                        }
                        break;
                        case 2:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t Area and perimeter of circle");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the radius of circle=");
                            scanf("%f", &radius);
                            printf("\n\n area of radius %f circle =%f", radius, 3.14 * radius * radius);                                          //radius
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
                        }
                        printf("\n\n Do you want to continue menu (y/n ).........!");
                        scanf(" %c", &c);

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
                }
                printf("\n\n Do you want to continue menu (y/n ).........!");
                scanf("%c", &c);

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
                scanf("%f", &ch);

                switch (ch)
                {
                case 1:
                {
                    printf("\n\t==============================================================================");
                    printf("\n\t\t\t  PROFIT LOSS  ");
                    printf("\n\t==============================================================================");
                    printf("\n\n Enter the selling price=");
                    scanf("%f", &sp);
                    printf("\n\n Enter the purchase price=");
                    scanf("%f", &pp);

                    if (sp == pp)
                        printf("\n\n nor profit neither loss");                                                                                 //sp,pp,unit
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
                    scanf("%f", &unit);

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
                    scanf("%f", &principal);
                    printf("\n\n enter the number of years=");
                    scanf("%f", &num_of_years);
                    printf("\n\n enter the rate of interest=");
                    scanf("%f", &rate_of_interest);
                    printf("\n\n simple interest =%f", principal * num_of_years * rate_of_interest / 100);                     //principal,num_of_years,rate_of_interest
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
                }
                printf("\n\n Do you want to continue menu (y/n ).........!");
                scanf("%c", &c);

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
                scanf(" %f", &ch);

                switch (ch)
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
                        scanf(" %f", &ch);

                        switch (ch)
                        {
                        case 1:
                        {
                            printf("\n\t==============================================================================");
                            printf("\n\t\t\t\t  ⟪⟪ CHECK THE TYPE OF TRIANGLE ⟫⟫ ");
                            printf("\n\t==============================================================================");
                            printf("\n\n enter the first side=");
                            scanf("%f", &s1);
                            printf("\n\n enter the second side=");
                            scanf("%f", &s2);
                            printf("\n\n enter the third side=");
                            scanf("%f", &s3);

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
                                    printf("\n\n THis is scalene triangle");                                      //s1,s2,s3
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
                            scanf("%f", &a1);
                            printf("\n\n enter the second angle=");
                            scanf("%f", &a2);
                            printf("\n\n enter the third angle=");
                            scanf("%f", &a3);

                            if (a1 == 0 || a2 == 0 || a3 == 0)
                                printf("\n\n Enter the valid angles");
                            else
                            {
                                if (a1 + a2 + a3 == 180)
                                    printf("\n this is triangle ");
                                else
                                {
                                    printf("\n\n this is not a triangle");                                      //a1,a2,a3
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
                        }
                        printf("\n\n Do you want to continue menu (y/n ).........!");
                        scanf("%c", &c);

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
                    scanf(" %f", &ch);

                    switch (ch)
                    {
                    case 1:
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t\t  ⟪⟪ CHECK NO. IS POISITIVE OR NEGATIVE ⟫⟫");
                        printf("\n\t==============================================================================");
                        printf("\n\n enter the number=");
                        scanf("%f", &num);                                                                                   //num

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
                        scanf("%f", &fno);
                        printf("\n\n enter the second number=");
                        scanf("%f", &sno);

                        if (fno == sno)
                            printf("\n\n both numbers are same");
                        else
                        {
                            if (fno > sno)
                                printf("\n\n %f is greater", fno);
                            else
                                printf("\n\n %f is greater", sno);
                        }
                    }
                    break;
                    case 3:
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t\t\t CHECK GREATEST OF THREE NUMBERS");
                        printf("\n\t==============================================================================");
                        printf("\n\n enter the first number=");
                        scanf("%f", &fno);
                        printf("\n\n enter the second number=");
                        scanf("%f", &sno);
                        printf("\n\n enter the third number=");
                        scanf("%f", &tno);

                        if (fno == sno && sno == tno)
                            printf("\n\n all numbers are same");
                        else if (fno > sno && fno > tno)
                            printf("\n\n %f is greater", fno);
                        else if (sno > fno && sno > tno)
                            printf("\n\n %f is greater", sno);
                        else
                            printf("\n\n %f is greater", tno);
                    }
                    break;
                    case 4:
                    {
                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t  ⟪⟪ CHECK NO. iS EVEN OR ODD ⟫⟫ ");
                        printf("\n\t==============================================================================");
                        printf("\n\n program for checking even or odd");
                        printf("\n\n enter the number=");
                        scanf("%f", &num);

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
                    }
                    printf("\n\n Do you want to continue menu (y/n ).........!");
                    scanf("%c", &c);
                }
                    while (c == 'y' || c == 'Y')
                        ;
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
                    scanf(" %f", &ch);

                    switch (ch)
                    {
                    case 1:
                    {

                        printf("\n\t==============================================================================");
                        printf("\n\t\t\t  ⟪⟪ CHECK NO. IS DIVISIBLE BY  5 AND 11 OR NOT ⟫⟫ ");
                        printf("\n\t==============================================================================");
                        printf("\n\n Enter the number=");
                        scanf("%f", &num);

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
                        printf("\n\n Enter the year =");                                                                               //year
                        scanf("%f", &year);

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
                    }
                    printf("\n\n Do you want to continue menu (y/n ).........!");
                    scanf("%c", &c);

                } while (c == 'y' || c == 'Y')
            }
            break;
            case 4:
            {
                printf("\n\t==============================================================================");                          //sub_result, multi_result,
                printf("\n\t\t\t\t ⟪⟪ ARITHMETIC CALCULATIONS ⟫⟫ ");
                printf("\n\t==============================================================================");
                printf("\n\n FOR ADDDITION");
                printf("Enter First number :\n");
                scanf("%f", &fno);
                printf("Enter second number :\n");
                scanf("%f", &sno);
                printf("Sum of %f and %f is %f\n\n",fno,sno,fno +sno);

                printf("\n\n FOR SUBSTRACTION");
                printf("Enter First number :\n");
                scanf("%f", &fno);
                printf("Enter second number :\n");
                scanf("%f", &sno);
                sub_result =fno -sno;
                printf("Subtraction of %f and %f is %f\n\n",fno,sno, sub_result);

                printf("\n\n FOR MULTIPLICATION");
                printf("Enter first number :\n");
                scanf("%f", &fno);
                printf("Enter second number :\n");
                scanf("%f", &sno);
                multi_result =fno *sno;
                printf("multiplication of %f anf %f is %f\n\n",fno,sno, multi_result);

                printf("\n\n FOR DIVISION");
                printf("Enter First number :\n");
                scanf("%f", &fno);
                printf("Enter second number :\n");
                scanf("%f", &sno);
                printf("Division of %f and %f is %f\n",fno,sno,fno /sno);
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
            }
            printf("\n\n Do you want to continue menu (y/n ).........!");
            scanf("%c", &c);
        }
            while (c == 'y' || c == 'Y')
                break;
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
            scanf(" %f", &ch);

            switch (ch)
            {
            case 1:
            {
                printf("\n\t==============================================================================");
                printf("\n\t\t\t ⟪⟪ TO PRINT CORRESPONDING DAY OF WEEK   ⟫⟫ ");
                printf("\n\t==============================================================================");
                printf("\t\n\n  Enter the number =  \n\n\t\t\t\t\t\t\t =");
                scanf("%f", &num);

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
                printf("\n\t==============================================================================");                        //month,
                printf("\n\n Enter a number=");
                scanf("%f", &month);

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
                scanf("%f", &fno);
                printf("\n\n enter the second number=");
                scanf("%f", &sno);
                fno = fno + sno; //  dont break sequence
                sno = fno - sno;
                fno = fno - sno;
                printf("\n\n swaping of numbers \n\n fno=%f \n\n sno=%f ", fno, sno);
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
            }
            printf("\n\n Do you want to continue menu (y/n ).........!");
            scanf("%c", &c);

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

    while (c == 'y' || c == 'Y')
        break;
    printf("\n\n Press any key to exit .......!");
}
