#include <stdio.h>
#include <conio.h>

void mathoperation(int x, int y, int *s, int *d);
int main()
{
    int x = 20, y = 10, s, d;
    mathoperation(x, y, &s, &d);
    printf("s=%d \n d=%d \n ", s, d);
}
void mathoperation(int x, int y, int *s, int *d)
{
    *s = s + d;
    *d = s - d;
}
