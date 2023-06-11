#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, value, total = 0;
    int arr[10];

    printf("Enter value of array=");

    /*initialization value in array */
    for (i = 0; i <= 10; i++)
    {
        scanf("%d", &value);

        arr[i] = value;
    }

    /*printing value of array*/
    for (j = 0; j <= 10; j++)
    {

        total = total + arr[j];
        printf("\n index=%d of value= %d", j, arr[j]);
    }

    printf("\n total=%d", total);
    return 0;
}
