/********
 * the program in counts the number of boys whose weight is less than 50 kg and height is greater then 170cm************/
#include <stdio.h>
#include <conio.h>

int main()
{   char name[10][15];
    int weight[10], height[10];
    int i,count;
    for (i = 0; i <= 10; i++)
    {   printf("enter the boys name=");
        scanf("%s",name);
        printf("enter the boys weight=");
        scanf("%d", weight[i]);
        printf("enter the boys height=");
        scanf("%d", height[i]);
    }

    for ( i = 0; i <=10; i++)
    {
        if (weight[i]<50 && height[i]>170)
        {
            count++;
        }
        
    }

    printf("%d",count);
    

}