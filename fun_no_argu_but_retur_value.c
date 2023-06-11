#include <stdio.h>
#include <conio.h>

int get_number(void);

int main()
{
    int m = get_number();
    printf("%d", m);
}

int get_number(void)
{
    int number;
    scanf("%d", &number);
    return number;
}
