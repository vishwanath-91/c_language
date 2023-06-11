#include <stdio.h>
#include <conio.h>

float largest(float a[], int n);

int main()
{
    float value[4] = {2.5,
                      -4.75,
                      1.2,
                      3.67};
    float largest(float a[], int n);
    printf("%f \n", largest(value, 4));
    return 0;
}

float largest(float value[], int n)
{
    int i;
    float max;
    max = value[0];
    for (i = 1; i <= n;i++){
        if(max<value[i])
            max = value[i];

    }
    return max;

}
