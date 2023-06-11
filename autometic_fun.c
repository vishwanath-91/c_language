/*write a multifunction to illustrate how automatic variables work.*/
/*a program with two subprograms function1 and function2 is show in fig.m is an automatic variable and it is declared at the beginning of each function.m is initialized to 10,100 and 1000 in function1, function2 and main respectively*/

#include <stdio.h>
#include <conio.h>
void function1(void);
void function2(void);

int main()
{
    int m = 1000;
    function2();
    printf("%d \n ", m);
    return 0;
}
void function1(void)
{
    int m = 10;
    printf("%d \n", m);
}
void function2(void)
{
    int m = 100;
    function1();
    printf("%d \n ", m);
}
