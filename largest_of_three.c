/********************
 * the program in selects and prints the largest of the three numbers using nested if...else statements.
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    float A,B,C;
    printf("enter the value of A=");
    scanf("%f",&A);

    printf("enter the value of B=");
    scanf("%f",&B);

    printf("enter the value of C=");
    scanf("%f",&C);

    if(A>B){
        if(A>C)
        {
            printf("the largest value is A");
        }
        else
        {
            printf("the largest value is C");
        }
    }
    else{
        if(B>C)
        {
            printf("the largest value is B");
        }
        else
        {
            printf("the largest value is c");
        }
    }
    return 0;
}