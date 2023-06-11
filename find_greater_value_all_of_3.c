#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    printf("enter the value of c=");
    scanf("%d",&c);

    if(a>b){
        if(b>c){
            printf("%d is greater",a);
        }
        else{
            printf("%d is greater",b);
        }
    }
    else{
        if(b>c){
            printf("%d is greater",b);
        }
        else{
            printf("%d is greater",c);
        }
    }


}