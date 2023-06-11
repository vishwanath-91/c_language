#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int a;
    printf("enter the number to find even or add number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("even number of elements: %d\n",a);
    }
    else
    {
        printf("odd number of elements: %d\n",a);
    }
}