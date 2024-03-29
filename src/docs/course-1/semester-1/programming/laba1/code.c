#include <math.h>
#include <stdio.h>

#define SQU 2 // константа для степеню 2

int main()
{
    float x, y, z; // вихідні змінні
    float a, b;    // шукані змінні

    printf("Програма для обчислення формули\n\n");
    printf("введіть значення x і y та z через пропуск\n");

    scanf("%f%f%f", &x, &y, &z);

    a = (3 + exp(y - 1)) / ((1 + pow(x, SQU)) * fabs(y - tan(z)));
    b = 1 + fabs(y - x) + pow(y - x, SQU) / 2 + pow(fabs(y - x), SQU) / 3;

    printf("\nшукане значення a = %f \n", a);
    printf("шукане значення b = %f \n\n", b);
    return 0;
}
