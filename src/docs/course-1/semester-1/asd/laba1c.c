/*
    2 – 2. Є дійсна квадратна матриця A[N][N]. Утворити вектор В,
    елементами якого є суми елементів по стовпчиках матриці А.
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define N 5

void printIntArray(int *arr, size_t n);
void printIntMatrix(int **A, size_t m, size_t n);
void freeMatrix(int **A, size_t m);
int *getRandIntArray(size_t n);
int **getRandIntMatrix(size_t m, size_t n);
void *safeMalloc(size_t size);
int *newIntArray(size_t n);
int *sumByColumns(int **A, size_t m, size_t n);

int main(void)
{
    srand(time(NULL));

    int **A = getRandIntMatrix(N, N);
    printf("\nSource matrix:\n");
    printIntMatrix(A, N, N);

    int *B = sumByColumns(A, N, N);

    printf("\nTarget vector of sums of columns of the matrix:\n");
    printIntArray(B, N);

    freeMatrix(A, N);
    A = NULL;
    free(B);

    printf("\n\n");
    return 0;
}

void printIntArray(int *arr, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");
}

void printIntMatrix(int **A, size_t m, size_t n)
{
    for (size_t i = 0; i < m; i++)
    {
        printIntArray(A[i], n);
    }
}

void freeMatrix(int **A, size_t m)
{
    for (size_t i = 0; i < m; i++)
    {
        free(A[i]);
    }
}

int *getRandIntArray(size_t n)
{
    int *arr = newIntArray(n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
    }
    return arr;
}

int **getRandIntMatrix(size_t m, size_t n)
{
    int **A = (int **)safeMalloc(m * sizeof(int *));

    for (int i = 0; i < m; i++)
    {
        A[i] = getRandIntArray(n);
    }
    return A;
}

void *safeMalloc(size_t size)
{
    void *ptr = malloc(size);
    if (ptr == NULL)
    {
        fprintf(stderr, "caesar-cifer: failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }
    return ptr;
}

int *newIntArray(size_t n)
{
    int *arr = safeMalloc(n * sizeof(int));
    return arr;
}

int *sumByColumns(int **A, size_t m, size_t n)
{
    int *B = newIntArray(n);

    for (size_t i = 0; i < n; i++)
    {
        B[i] = 0;
    }

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            B[j] += A[i][j];
        }
    }

    return B;
}