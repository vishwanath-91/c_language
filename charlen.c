#include<stdio.h>
#include<conio.h>

int main()
{
    char name[] = "vishwanath_nishad";
    int i,count;
    for (i = 0; name[i] !='\0'; i++)
    {
        count++;
    }
    printf("%d",count);

    return 0;
}