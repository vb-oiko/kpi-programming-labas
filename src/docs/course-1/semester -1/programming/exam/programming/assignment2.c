#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n; //вихідне значення - розмірність матриці
    do
    {
        printf("Введіть значення розмірності матриці n>0: ");
        scanf("%d", &n);
    } while (n <= 0);

    float **a; // показчик на массив для вихідної матриці
    float *b;  // показчик на массив для ветора-результата
    int i;     //індекс поточної строки матриці
    int j;     //індекс поточного стовпця матриці

    a = (float **)malloc(n * sizeof(float *));
    b = (float *)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        a[i] = (float *)malloc(n * sizeof(float));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = sin(i + 1) + log(pow((j + 1), 2));
        }
    }

    printf("\n\nВихідна матриця A: \n\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        b[i] = a[i][i] * a[1][i];
    }

    printf("\n\nВектор-результат B: \n\n");

    for (i = 0; i < n; i++)
    {
        printf("%.2f\t", b[i]);
    }

    printf("\n");

    printf("\nРезультуюча матриця A: \n\n");
    for (i = 0; i < n; i++)
    {
        printf("[%d,%d] <=> [%d,%d]\n", i, n - i - 1, i, n - 1);
        float temp = a[i][n - i - 1];
        a[i][n - i - 1] = a[i][n - 1];
        a[i][n - 1] = temp;
    }

    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        free(a[i]);
    }

    free(a);
    free(b);
}