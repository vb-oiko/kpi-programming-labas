#include <math.h>
#include <stdio.h>

int main()
{
    float x; //вихідне значення
    float y; // результат
    printf("введіть значення x: ");
    scanf("%f", &x);

    if (x < 0)
    {
        y = 1;
    }
    else
    {
        if (x > M_PI) // M_PI стандартна константа бібліотеки math.h
        {
            y = -1;
        }
        else
        {
            y = cos(x);
        }
    }

    printf("шукане значення y = %f \n", y);
    return 0;
}
