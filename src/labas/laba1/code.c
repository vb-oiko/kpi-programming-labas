#include <math.h>
#include <stdio.h>
#define SQU 2

int main()
{
    float x, y, a;
    printf("введіть значення x і y через пропуск\n");
    scanf("%f%f", &x, &y);
    a = (sqrt(fabs(x + 4.62)) - y) / (1 + 2 * pow(x, SQU) + pow(y, SQU));
    printf("шукане значення a = %f \n", a);
    return 0;
}
