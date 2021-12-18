#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6; // кількість рядків
    int m = 3; // кількість стовпчиків

    int **a;  // показчик на массив для вихідної матриці
    float *b; // показчик на массив для ветора-результата
    int i;    //індекс поточної строки матриці
    int j;    //індекс поточного стовпця матриці

    a = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }

    b = (float *)malloc((n / 2) * sizeof(float));

    printf("Введіть значення елементів матриці\n");

    for (i = 0; i < n; i++)
    {
        int sum = 0;
        int count = 0;

        for (j = 0; j < m; j++)
        {
            printf("Введіть значення A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);

            if ((j + 1) % 2 == 1)
            {
                sum += a[i][j];
                count += 1;
            }
        }

        if ((i + 1) % 2 == 0)
        {
            b[i / 2] = (float)sum / count;
        }
    }

    printf("\n\nВихідна матриця A: \n\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nВектор-результат B: \n\n");

    for (i = 0; i < n / 2; i++)
    {
        printf("%.2f\t", b[i]);
    }

    printf("\nґт");

    for (int i = 0; i < n; i++)
    {
        free(a[i]);
    }

    free(a);
    free(b);
}