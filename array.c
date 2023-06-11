#include <stdio.h>
#include <conio.h>

int main()
{
    int x, y;
    printf("how much row");
    scanf("%d", &x);
    printf("how much column");
    scanf("%d", &y);

    int arr[x][y];
    int i, j, value;

    for (i = 0; i <= x; i++)
    {
        for (j = 0; j <= y; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int k, l;
    for (k = 0; k <= x; k++)
    {

        for (l = 0; l <= y; l++)
        {
            printf("\n value of arr is = arr[%d]", arr[k][l]);
        }
        printf("\n");
    }
}
