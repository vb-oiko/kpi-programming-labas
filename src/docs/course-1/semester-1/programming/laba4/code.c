#include <stdio.h>
#include <stdlib.h>

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
    for (int i = 0; i < n; i++)
    {
        a[i] = (float *)malloc(n * sizeof(float));
    }

    b = (float *)malloc(n * sizeof(float));

    if (a == NULL || b == NULL)
    {
        printf("Виділити пам'ять не вдалося\n");
        exit(1);
    }

    printf("Пам'ять успішно виділено\n\n");

    for (i = 0; i < n; i++)
    {
        b[i] = 0;
    }

    printf("Введіть значення елементів матриці\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Введіть значення A[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);

            b[j] += a[i][j];
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

    printf("\n\nВектор-результат B: \n\n");

    for (i = 0; i < n; i++)
    {
        printf("%.2f\t", b[i]);
    }

    printf("\n");
    free(a);
    free(b);

    return 0;
}
