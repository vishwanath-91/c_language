#include <stdio.h>
#include <conio.h>

int main()
{
    
    float a,b,c;
    int ch;
    start:
    printf("enter the value of a=");
    scanf("%f",&a);

    printf("enter the value of b=");
    scanf("%f",&b);

    printf("\n");

    printf("Enter [1] for ADD \n");
    printf("Enter [2] for SUBTRACTION \n");
    printf("Enter [3] for multiplication \n ");
    printf("Enter [4] for DIVISION \n");

    printf("\n");

    printf("enter your choice=");
    scanf("%d",&ch);

    printf("\n");


    if(ch==1){
        c=a+b;
        printf("ADDITION of %f + %f = %f",a,b,c);
    }
    else if (ch==2)
    {
        c=a-b;
        printf("SUBTRACTION of %f - %f = %f",a,b,c);
    }
    else if (ch==3)
    {
        c=a*b;
        printf("multiplication of %f * %f = %f",a,b,c);
    }
    else if (ch==4)
    {
        c=a/b;
        printf("DIVISION of %f / %f = %f",a,b,c);
    }
    else
    {
        printf("invalid Entry");
    }

    printf("\n");
    
    goto start;
}
