#include <stdio.h>
#include <conio.h>

int main()
{
    float mathematics, physics, chemistry;
    float total_marks, percentage;
    int CODE, COMP;

    start:

    printf("Enter the value of mathematics=");
    scanf("%f", &mathematics);

    printf("Enter the value of physics=");
    scanf("%f", &physics);

    printf("Enter the value of chemistry=");
    scanf("%f", &chemistry);

    total_marks = mathematics + physics + chemistry;
    printf("The total marks = %f", total_marks);

    percentage = total_marks / 3;
    printf("\nThe percentage = %f", percentage);

    if (percentage > 75)
    {
        CODE = 1;
    }
    else if (percentage > 60)
    {
        CODE = 2;
    }
    else if (percentage > 40)
    {
        CODE = 3;
    }
    else if (percentage >= 30)
    {
        CODE = 4;
    }
    else
    {
        CODE = 5;
    }

    /**********/
    /**********/
    /**********/

    if (mathematics < 30)
    {
        COMP = 1;
    }
    else if (physics < 30)
    {
        COMP = 2;
    }
    else if (chemistry < 30)
    {
        COMP = 3;
    }
    else
    {
        COMP = 4;
    }

    /**************/
    /************/

    if (percentage > 75 && CODE == 1)
    {
        printf("\n Honours ");
        CODE = 1;
        if (CODE == 1)
        {
            printf("\n green light");
        }
        /******************/
        /*******************/
        /******************/
        /*******************/
        if (COMP == 1)
        {
            printf("\n you are under compartment of mathematics");
        }
        else if (COMP == 2)
        {
            printf("\n you are under compartment of physics");
        }
        else if (COMP == 3)
        {
            printf("\n you are under compartment of chemistry");
        }
        else
        {
            printf("\n");
        }
    }
    else if (percentage > 60 && CODE == 2)
    {
        printf("\n first division");
        CODE = 2;
        if (CODE == 2)
        {
            printf("\n blue light");
        }
        /******************/
        /*******************/
        /******************/
        /*******************/
        if (COMP == 1)
        {
            printf("\n you are under compartment of mathematics");
        }
        else if (COMP == 2)
        {
            printf("\n you are under compartment of physics");
        }
        else if (COMP == 3)
        {
            printf("\n you are under compartment of chemistry");
        }
        else
        {
            printf("\n");
        }
    }
    else if (percentage > 40 && CODE == 3)
    {
        printf("\n second division");
        CODE = 3;
        if (CODE == 3)
        {
            printf("\n yellow light");
        }

        /******************/
        /*******************/
        /******************/
        /*******************/
        if (COMP == 1)
        {
            printf("\n you are under compartment of mathematics");
        }
        else if (COMP == 2)
        {
            printf("\n you are under compartment of physics");
        }
        else if (COMP == 3)
        {
            printf("\n you are under compartment of chemistry");
        }
        else
        {
            printf("\n");
        }
    }
    else if (percentage >= 30 && CODE == 4)
    {
        printf("\n third division");
        CODE = 4;
        if (CODE == 4)
        {
            printf("\n pink light");
        }

        /******************/
        /*******************/
        /******************/
        /*******************/
        if (COMP == 1)
        {
            printf("\n you are under compartment of mathematics");
        }
        else if (COMP == 2)
        {
            printf("\n you are under compartment of physics");
        }
        else if (COMP == 3)
        {
            printf("\n you are under compartment of chemistry");
        }
        else
        {
            printf("\n");
        }
    }
    else
    {
        printf("\n fail");
        CODE = 5;
        if (CODE == 5)
        {
            printf("\n red light");
        }

        /******************/
        /*******************/
        /******************/
        /*******************/
        if (COMP == 1)
        {
            printf("\n you are under compartment of mathematics");
        }
        else if (COMP == 2)
        {
            printf("\n you are under compartment of physics");
        }
        else if (COMP == 3)
        {
            printf("\n you are under compartment of chemistry");
        }
        else
        {
            printf("\n");
        }
    }
    printf("\n");
    goto start;

    return 0;
}