#include <stdio.h>
#include <conio.h>

int main()
{
    int x = 10;
    int *ptr1, **ptr2;
    ptr1 = &x;
    ptr2 = &ptr1;
    printf("address of x=%d \n", &x);
    printf("address of ptr1=%d \n", &ptr1);
    printf("address of ptr2=%d \n ", &ptr2);
    printf("value of ptr1=%d \n", ptr1);
    printf("value of ptr2=%d \n ", ptr2);

    printf("%d ", **ptr2);
    return 0;
}
