/*write a program to illustrate the use of indirection operator '*' to access the value pointed to by a pointer*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y;
    int *ptr;
    x = 10;
    ptr = &x;
    y = *ptr;
    printf("value of x is %d \n ", x);
    printf("%d is stored at address %u \n", x, &x);
    printf("%d is stored at address %u \n ", *&x, &x);

    printf("%d is stored at address %u \n", *ptr, ptr);

    printf("%d is stored at address %u \n ", ptr, &ptr);
    printf("%d is stored at address %u \n ", y, &y);

    *ptr = 25;
    printf("\n now x=%d \n", x);
    return 0;
}
