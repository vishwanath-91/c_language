/***count 1 to 10 digits using while loop*******/
#include<stdio.h>
#include<conio.h>

int main(){
    int i=1,sum=0;

    while(i<=10)
    {
        i=i+1;
        sum=sum+i;
    }

    printf("\nsum of i =%d",sum);

    return 0;

}