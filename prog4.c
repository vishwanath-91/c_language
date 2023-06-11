/*write a program to check whether a given character is an alphabet (uppercase) and alphabet (lowercase),a digit ar a special character.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    char x;
    printf("enter the value of x=");
    scanf("%c", &x);
    if (x >= 'A' && x <= 'Z')
    {
        printf("the value is uppercase alphabet \n");
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("the value is lowercase alphabet \n");
    }
    else if (x >= '0' && x <= '9')
    {
        printf("the value is digits \n ");
    }
    else
    {
        printf("special charecter \n ");
    }
    return 0;
}
