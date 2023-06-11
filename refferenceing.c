/*write a program to print the address of a variable along with its value*/
#include <stdio.h>
#include <conio.h>

int main()
{
    char a;
    int x;
    float p, q;
    a = 'a';
    x = 125;
    p = 10.25, q = 18.76;
    printf("%c is stored at address %u \n", a, &a);
    printf("%c is stored at address %u \n", a, a);
    printf("%d is stored at address %u \n", x, &x);
    printf("%f is stored at address %u \n", p, &p);
    printf("%f is stored at address %u \n", q, &q);
    return 0;
}
