
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define N 100

void printIntArray(int *arr, int n);
int *getRandIntArray(int n);
int getOddArray(int *source, int n, int *target);
int getEvenArray(int *source, int n, int *target);

int main(void)
{
    srand(time(NULL));
    int *arr = getRandIntArray(N);

    int *odds = malloc(N * sizeof(int));
    int *evens = malloc(N * sizeof(int));

    if (odds == NULL || evens == NULL)
    {
        printf("Failled to allocate memory");
        exit(EXIT_FAILURE);
    }

    int nOdds = getOddArray(arr, N, odds);
    odds = realloc(odds, nOdds * sizeof(int));

    int nEvens = getEvenArray(arr, N, evens);
    evens = realloc(evens, nEvens * sizeof(int));

    printIntArray(arr, N);
    printf("\n\n");
    printIntArray(odds, nOdds);
    printf("\n\n");
    printIntArray(evens, nEvens);
    printf("\n\n");
}

void printIntArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");
}

int *getRandIntArray(int n)
{
    int *arr = malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Failled to allocate memory in getRandIntArray function for %d int elements", n);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    return arr;
}

int getOddArray(int *source, int n, int *target)
{

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (source[i] % 2 == 1)
        {
            target[k] = source[i];
            k += 1;
        }
    }

    return k;
}

int getEvenArray(int *source, int n, int *target)
{

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (source[i] % 2 == 0)
        {
            target[k] = source[i];
            k += 1;
        }
    }

    return k;
}