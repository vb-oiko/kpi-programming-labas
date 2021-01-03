#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TEST_CASES_NUM 3
#define ITERATIONS_NUM 3
#define RANDOM_GENERATION_NUM 1000
#define TEST_ARRAY_SIZE 10

typedef enum
{
    BEST,
    MIDDLE,
    WORST,
} caseType;

int iterationsCount[3] = {1000, 10000, 100000};

char caseName[TEST_CASES_NUM][7] = {
    "Best",
    "Middle",
    "Worst",
};

int *getRandIntArray(size_t n);
void printIntArray(int *arr, size_t n);
void selectionSort(int *arr, size_t n, size_t *comparisons, size_t *swaps);
void swap(int *a, int *b);

int main()
{
    srand(time(NULL));
    size_t comps;
    size_t swaps;

    int *arr = getRandIntArray(TEST_ARRAY_SIZE);
    printIntArray(arr, TEST_ARRAY_SIZE);
    comps = 0;
    swaps = 0;
    selectionSort(arr, TEST_ARRAY_SIZE, &comps, &swaps);
    printf("Comparisons: %zu, swaps: %zu\n", comps, swaps);

    return 0;
}

int *getRandIntArray(size_t n)
{
    int *arr = malloc(n * sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = rand() % (n * 2);
    }
    return arr;
}

void printIntArray(int *arr, size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n\n");
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
            // printf("Swaped %ld-th and %ld-th elements\n", minInd, i);
            swap(&arr[minInd], &arr[i]);
            (*swaps)++;
        }

        // printIntArray(arr, n);
    }
}