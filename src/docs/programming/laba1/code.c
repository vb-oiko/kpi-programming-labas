#include <math.h>
#include <stdio.h>

int main()
{
    float x, a, b; // вихідні змінні
    float R;       // результат

    printf("Програма для обчислення формули:\n");
    printf("R = asin(pow(x, 2)) + acos(b * x - a) + exp(b * x)\n\n");
    printf("введіть значення x, a, та b через пропуск\n");

    scanf("%f%f%f", &x, &a, &b);

    if (fabs(a) <= 1 && fabs(b * x - a) <= 1)
    {
        printf("Формула не визначена при введених значеннях x, a, та b\n\n");
        return 0;
    }

    R = asin(pow(x, 2)) + acos(b * x - a) + exp(b * x);

    printf("\nшукане значення R = %f \n\n", R);
    return 0;
}
