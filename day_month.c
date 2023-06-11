/********
 * the program shows the use of integer arithmetic to convert a given number of days into months and days.
 * **********/
#include<stdio.h>
#include<conio.h>

int main(){
    int days,month;
    printf("enter the days for convert days & months");
    scanf("%d",&days);

    month=days/30;
    days=days%30;

    printf("the total month is %d, and days is %d",month,days);


    return 0;
}