#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 1;

    while (i <= 10)
    {
        int j=1;
        while (j <= 10)
        {
            int table=1;

            table = i * j;

            printf("\n %d * %d = %d", i, j, table);

            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}