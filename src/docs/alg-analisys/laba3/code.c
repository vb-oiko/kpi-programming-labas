#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TEST_CASES_NUM 3
#define ITERATIONS_NUM 3
#define RANDOM_GENERATION_NUM 1000
#define TEST_ARRAY_SIZE 20

typedef enum
{
    BEST,
    MIDDLE,
    WORST,
} caseType;

int debugMode = 0;
int iterationsCount[3] = {1000, 10000, 100000};

char caseName[TEST_CASES_NUM][7] = {
    "Best",
    "Middle",
    "Worst",
};

int *getRandIntArray(size_t n);
void printIntArray(int *arr, size_t n);
int *copyIntArray(int *arr, size_t n);
void selectionSort(int *arr, size_t n, size_t *comparisons, size_t *swaps);
void swap(int *a, int *b);
void mergeSort(int *arr, size_t left, size_t right, size_t *comparisons, size_t *swaps);

int main()
{
    srand(time(NULL));
    size_t comps;
    size_t swaps;

    int *arr1 = getRandIntArray(TEST_ARRAY_SIZE);
    int *arr2 = copyIntArray(arr1, TEST_ARRAY_SIZE);
    printf("Sourse array:\n");
    printIntArray(arr1, TEST_ARRAY_SIZE);
    printf("\n");

    printf("Selection sort\n");
    comps = 0;
    swaps = 0;
    selectionSort(arr1, TEST_ARRAY_SIZE, &comps, &swaps);
    printIntArray(arr1, TEST_ARRAY_SIZE);
    printf("Comparisons: %zu, swaps: %zu\n", comps, swaps);
    printf("\n");

    printf("Merge sort\n");
    comps = 0;
    swaps = 0;
    mergeSort(arr2, 0, TEST_ARRAY_SIZE - 1, &comps, &swaps);
    printIntArray(arr2, TEST_ARRAY_SIZE);
    printf("Comparisons: %zu, swaps: %zu\n", comps, swaps);
    printf("\n");

    return 0;
}

int *getRandIntArray(size_t n)
{
    int *arr = malloc(n * sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = rand() % (n * 10);
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

int *copyIntArray(int *arr, size_t n)
{
    int *copy = malloc(n * sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        copy[i] = arr[i];
    }
    return copy;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *arr, size_t n, size_t *comparisons, size_t *swaps)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        size_t minInd = i + 1;

        for (size_t j = i + 2; j < n; j++)

        {
            (*comparisons)++;
            if (arr[j] < arr[minInd])
            {
                minInd = j;
            }
        }

        (*comparisons)++;
        if (arr[minInd] < arr[i])
        {
            if (debugMode)
            {
                printf("Swaped %ld-th and %ld-th elements\n", minInd, i);
            }
            swap(&arr[minInd], &arr[i]);
            (*swaps)++;
        }

        if (debugMode)
        {
            printIntArray(arr, n);
        }
    }
}

void mergeSort(int *arr, size_t left, size_t right, size_t *comparisons, size_t *swaps)
{
    if (right == left)
    {
        return;
    }

    size_t m = (left + right) / 2;

    mergeSort(arr, left, m, comparisons, swaps);
    mergeSort(arr, m + 1, right, comparisons, swaps);

    size_t lSize = m - left + 1;
    int *L = malloc(lSize * sizeof(int));
    for (size_t i = 0; i < lSize; i++)
    {
        L[i] = arr[left + i];
        // (*swaps)++;
    }

    size_t rSize = right - (m + 1) + 1;
    int *R = malloc(rSize * sizeof(int));
    for (size_t i = 0; i < rSize; i++)
    {
        R[i] = arr[m + 1 + i];
        // (*swaps)++;
    }

    if (debugMode)
    {
        printf("left: %zu, m: %zu, right: %zu, lSize: %zu, rSize: %zu\n", left, m, right, lSize, rSize);
        printf("Left array: ");
        printIntArray(L, lSize);
        printf("Right array: ");
        printIntArray(R, rSize);
        printf("\n");
    }

    size_t k;
    size_t i;
    size_t j;

    for (k = left, i = 0, j = 0; i < lSize && j < rSize; k++)
    {
        if (L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        (*swaps)++;
        (*comparisons)++;
    }

    while (i < lSize)
    {
        arr[k] = L[i];
        i++;
        k++;
        (*swaps)++;
    }

    while (j < rSize)
    {
        arr[k] = R[j];
        j++;
        k++;
        (*swaps)++;
    }

    free(L);
    free(R);
}