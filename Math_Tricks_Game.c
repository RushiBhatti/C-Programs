#include <stdio.h>

/*
Added simple but unique console based game based on math tricks using C
with using fundamental concepts like conditionals,loops,functions,etc.
*/

int choice, option, digit, trick, imagine, play;
char name[40];

void displayCalander()
{
    // printf("Here is a Calander : \n");
    printf("\n\t");
    printf("SUN    MON    TUES   WED    THURS  FRI    SATURDAY");
    printf("\n\t");
    printf("01      2      3      4      5      6      7");
    printf("\n\t");
    printf("08      9     10     11     12     13     14");
    printf("\n\t");
    printf("15     16     17     18     19     20     21");
    printf("\n\t");
    printf("22     23     24     25     26     27     28");
    printf("\n");
}

void varify(int choice)
{
    printf("\n");
    printf("selected 3*3 square is : ");
    printf("\n\t%d     %d     %d", choice - 8, choice - 7, choice - 6);
    printf("\n\t%d     %d     %d", choice - 1, choice, choice + 1);
    printf("\n\t%d     %d     %d", choice + 6, choice + 7, choice + 8);
    printf("\n");
}

void trick1()
{
    // int choice,option;
    printf("\n***** CALANDER TRICK *******************************************\n");
    printf("Select any 3*3 square from below calander : \n");
    displayCalander();
    printf("\nEnter middle element of square  :  ");
    scanf("%d", &choice);

    for(;;)
    {
        if ((choice >= 1 && choice <= 8) || (choice >= 21 && choice <= 28) || choice == 14 || choice == 15 || choice >= 29)
        {
            printf("\n\t!!!!!!!! PLEASE,ENTER VALID ELEMENT !!!!!!!!!\n");
            // trick1();
            printf("\nEnter middle element of square  :  ");
            scanf("%d", &choice);
            continue;
        }
        break;
    }

    printf("\n");
    printf("The Sum Of ALL Each digits in square is :  %d.", choice * 9);
    printf("\nEnter 1 to varify else any to exit.");
    scanf("%d", &option);
    if (option == 1)
    {
        varify(choice);
    }
    else
    {
        return;
    }
}

void example()
{
    printf("\n~~~~~~~~~~~~~~~~~\n");
    printf("\nLet,suppose think about three digit number is 395");
    printf("\nHere 3 , 9 and 5 all are different integers");
    printf("\nNow reverse is : 593");
    printf("\nNow diffrence is : ");
    printf("\n395 - 593 = 198");
    printf("\nAnd 1 is first integer of answer.");
    printf("\n\tHOPE YOU UNDERSTAND :) ");
}

void trick2()
{
    printf("\n***** 3 DIGITS TRICK *************************************************\n");
    printf("\n Open Your Calculator \n");
    printf("\n1. Think about any three digits that have each diffrent integer ");
    printf("\n2. Now reverse that ");
    printf("\n3. substract OR minus both to know difference");

    printf("\nEnter 1 to view an example of this process : ");
    scanf("%d", &imagine);
    if (imagine == 1)
    {
        example();
    }

    printf("\n\nEnter first integer of your Answer(difference)  : ");
    scanf("%d", &digit);
    printf("\n\nYour Answer is  : ");
    printf("\n\n\t %d%d%d", digit, 9, 9 - digit);
}

int main()
{

    int run = 1;
    if (run)
    {
        printf("\n\t\t*******************************************************\n");
        printf("Enter Your Name : ");
        scanf("%s", &name);
        run = 0;
    }

    printf("\n\t\tHey, %s NAMASTE!!!\n\t\t Here are some tricks of maths ! \n", name);
    printf("\n\t\t1.  Calander Trick ");
    printf("\n\t\t2.  3 digits Trick ");
    printf("\n\t\t%s Enter Trick number to perform that trick : ", name);
    scanf("%d", &trick);
    switch (trick)
    {
    case 1:
        trick1();
        break;
    case 2:
        trick2();
        break;

    default:
        printf("\n\t\t Hey %s , you have to Enter Valid Choice  !", name);
        break;
    }
    printf("\n\t\t%s Enter 1 to replay : ", name);
    scanf("%d", &play);
    if (play == 1)
    {
        main();
    }
    else
    {
        return 0;
    }

    return 0;
}