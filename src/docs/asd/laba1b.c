/*
2 – 2а. Надано масив A[N]. Поміняти мінімальний та максимальний елементи місцями.
*/

#include <stdio.h>
#include <stdlib.h>

int *getRandIntArray(size_t n);
void printIntArray(int *arr, size_t n);
void swapMinAndMaxElements(int *arr, size_t n);

const size_t N = 25;

int main(void)
{

    int *arr = getRandIntArray(N);
    printf("Source array:\n");
    printIntArray(arr, N);

    swapMinAndMaxElements(arr, N);

    printf("Target array:\n");
    printIntArray(arr, N);

    free(arr);
    printf("\n");
    exit(EXIT_SUCCESS);
}

int *getRandIntArray(size_t n)
{
    int *arr = malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Failed to allocate memory for the array");
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    return arr;
}

void printIntArray(int *arr, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");
}

void swapMinAndMaxElements(int *arr, size_t n)
{
    size_t minInd = 0;
    size_t maxInd = 0;

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] < arr[minInd])
        {
            minInd = i;
        }
        if (arr[i] > arr[maxInd])
        {
            maxInd = i;
        }
    }

    printf("Min element: A[%zu] = %d\n", minInd, arr[minInd]);
    printf("Max element: A[%zu] = %d\n", maxInd, arr[maxInd]);
    printf("Swapped: A[%zu] and A[%zu]\n", minInd, maxInd);

    int temp = arr[minInd];
    arr[minInd] = arr[maxInd];
    arr[maxInd] = temp;
}
