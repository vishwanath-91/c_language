#include <stdio.h>
#include <conio.h>

void function(void);

int count;

int main()
{
    count = 10;
    printf("\n %d", count);
    function();
    printf("\n %d", count);
    return 0;
}
void function(void)
{
    int i;
    int count = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("\n %d", count);
        count = count + 1;
    }
}
