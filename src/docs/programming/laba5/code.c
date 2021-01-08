#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>

void printIntArray(int *arr, int n);
void printIntMatrix(int **A, int m, int n);
void freeMatrix(int **A, int m);
void copyIntArray(int *from, int *to, int n);
void descInsertSortWithBarr(int *arr, int n);
int *getRandIntArray(int n);
int **getRandIntMatrix(int m, int n);

int main()
{
    srand(time(NULL));
    int m;
    int n;
    int k;

    printf("Please enter rows count: ");
    scanf("%d", &m);
    printf("Please enter columns count: ");
    scanf("%d", &n);
    printf("Please enter row to sort: ");
    scanf("%d", &k);
    printf("\nsource matrix:\n");

    int **A = getRandIntMatrix(m, n);
    printIntMatrix(A, m, n);

    int *B = A[k - 1];

    descInsertSortWithBarr(B, n);

    printf("\ntarget matrix:\n");
    printIntMatrix(A, m, n);

    freeMatrix(A, m);
    free(A);

    printf("\n\n");
    return 0;
}

void descInsertSortWithBarr(int *arr, int n)
{
    if (n <= 1)
    {
        return;
    }
    printf("-------------------\n");
    int *barr = malloc((n + 1) * sizeof(int));

    copyIntArray(arr, barr + 1, n);

    for (int i = 2; i < n + 1; i++)
    {
        printf("i: %d\n", i);
        barr[0] = barr[i];
        printIntArray(barr, n + 1);
        int j = i;
        while (barr[j] > barr[j - 1])
        {
            barr[j] = barr[j - 1];
            barr[j - 1] = barr[0];
            j -= 1;
            printIntArray(barr, n + 1);
        }
    }
    printf("-------------------\n");

    copyIntArray(barr + 1, arr, n);
    free(barr);
}

void printIntArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");
}

void printIntMatrix(int **A, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        printIntArray(A[i], n);
    }
}

void freeMatrix(int **A, int m)
{
    for (int i = 0; i < m; i++)
    {
        free(A[i]);
    }
}

void copyIntArray(int *from, int *to, int n)
{
    for (int i = 0; i < n; i++)
    {
        to[i] = from[i];
    }
}

int *getRandIntArray(int n)
{
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    return arr;
}

int **getRandIntMatrix(int m, int n)
{
    int **A = (int **)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
    {
        A[i] = getRandIntArray(n);
    }
    return A;
}
