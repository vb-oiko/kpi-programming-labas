#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TEST_CASES_NUM 3
#define ARRAY_SIZES_NUM 3
#define SORT_METHODS_NUM 3
#define RANDOM_GENERATION_NUM 1000
#define TEST_ARRAY_SIZE 20

typedef enum
{
    BEST,
    MIDDLE,
    WORST,
} caseType;

typedef enum
{
    SELECTION,
    MERGE,
    RADIX,
} sortType;

int debugMode = 0;
int arraySize[3] = {1000, 10000, 100000};

char caseName[TEST_CASES_NUM][7] = {
    "Best",
    "Middle",
    "Worst",
};

char sortMethodName[SORT_METHODS_NUM][10] = {
    "SELECTION",
    "MERGE",
    "RADIX",
};

int *getRandIntArray(size_t n);
void printIntArray(int *arr, size_t n);
int *copyIntArray(int *arr, size_t n);
void selectionSort(int *arr, size_t n, size_t *comparisons, size_t *swaps);
void swap(int *a, int *b);
void mergeSort(int *arr, size_t left, size_t right, size_t *comparisons, size_t *swaps);
void algCheck();
int getDigit(int a, int k);
void countingSort(int *arr, int n, int digit, size_t *comparisons, size_t *swap);
void radixSort(int *arr, int n, size_t *comparisons, size_t *swap);
int *newIntArray(size_t n);
int *getIntArrayByCase(size_t n, caseType testCase);
void printSortResults(size_t n, caseType testCase, sortType sortMethod);

int main()
{
    srand(time(NULL));
    debugMode = 1;
    algCheck();
    debugMode = 0;

    printf("!==============================================================================================================!\n");
    printf("!                    !                                     Sorting Method                                      !\n");
    printf("!                    !-----------------------------------------------------------------------------------------!\n");
    printf("!    Array  Size     !            Comparisons Count               !                Swaps Count                 !\n");
    printf("!  (Passes Count)    !-----------------------------------------------------------------------------------------!\n");
    printf("!                    !  Theoretical ! Experimental !    Ratio     !  Theoretical ! Experimental !    Ratio     !\n");

    for (size_t sortMethod = 0; sortMethod < SORT_METHODS_NUM; sortMethod++)
    {
        printf("!==============================================================================================================!\n");
        printf("!                                           %10s SORT                                                    !\n", sortMethodName[sortMethod]);
        fflush(stdout);
        for (size_t testCase = 0; testCase < TEST_CASES_NUM; testCase++)
        {
            printf("!--------------------------------------------------------------------------------------------------------------!\n");
            printf("!                                              %7s Case                                                    !\n", caseName[testCase]);
            printf("!--------------------------------------------------------------------------------------------------------------!\n");

            for (size_t sizeRange = 0; sizeRange < ARRAY_SIZES_NUM; sizeRange++)
            {
                int n = arraySize[sizeRange];
                printSortResults(n, testCase, sortMethod);
            }
        }
    }

    printf("!==============================================================================================================!\n");
    printf("\n\n");
    return 0;
}

void printSortResults(size_t n, caseType testCase, sortType sortMethod)
{
    size_t comps = 0;
    size_t swaps = 0;
    size_t tComps = 0;
    size_t tSwaps = 0;

    switch (sortMethod)
    {
    case SELECTION:
        tComps = (size_t)n / 2 * (size_t)n;
        tSwaps = (size_t)n;
        break;

    case MERGE:
        tComps = 0;
        tSwaps = (size_t)(n * log(n));
        break;

    case RADIX:
        tComps = 0;
        tSwaps = (size_t)n * 10;
        break;

    default:
        break;
    }

    int passNum = (testCase == MIDDLE) ? RANDOM_GENERATION_NUM : 1;

    for (size_t i = 0; i < RANDOM_GENERATION_NUM; i++)
    {
        int *arr = getIntArrayByCase(n, testCase);

        switch (sortMethod)
        {
        case SELECTION:
            selectionSort(arr, n, &comps, &swaps);
            break;

        case MERGE:
            mergeSort(arr, 0, n - 1, &comps, &swaps);
            break;

        case RADIX:
            radixSort(arr, n, &comps, &swaps);
            break;

        default:
            break;
        }

        free(arr);
    }

    comps = comps / (size_t)RANDOM_GENERATION_NUM;
    swaps = swaps / (size_t)RANDOM_GENERATION_NUM;

    printf("!%12ld (%4d) !", n, passNum);
    printf(" % 11ld  !", tComps);
    printf(" % 11ld  !", comps);
    printf(" % 11f  !", (float)comps / tComps);
    printf(" % 11ld  !", tSwaps);
    printf(" % 11ld  !", swaps);
    printf(" % 11f  !", (float)swaps / tSwaps);
    printf("\n");
    fflush(stdout);
}

void algCheck()
{
    if (!debugMode)
    {
        return;
    }

    size_t comps;
    size_t swaps;
    printf("GENERATING ARRAYS\n");
    for (size_t i = 0; i < TEST_CASES_NUM; i++)
    {
        int *arr = getIntArrayByCase(TEST_ARRAY_SIZE, i);
        printf("%s case\n", caseName[i]);
        printIntArray(arr, TEST_ARRAY_SIZE);
        free(arr);
    }
    printf("\n\n");

    printf("SORTING ALGORITHMS\n");
    int *arr1 = getRandIntArray(TEST_ARRAY_SIZE);
    int *arr2 = copyIntArray(arr1, TEST_ARRAY_SIZE);
    int *arr3 = copyIntArray(arr1, TEST_ARRAY_SIZE);
    printf("Array size: %d\n", TEST_ARRAY_SIZE);
    printf("Sourse array:\n");
    printIntArray(arr1, TEST_ARRAY_SIZE);
    printf("\n");

    printf("SELECTION SORT\n");
    comps = 0;
    swaps = 0;
    printf("Sourse array:\n");
    printIntArray(arr1, TEST_ARRAY_SIZE);
    selectionSort(arr1, TEST_ARRAY_SIZE, &comps, &swaps);
    printf("Comparisons: %zu, swaps: %zu\n", comps, swaps);
    printf("\n");

    printf("MERGE SORT\n");
    comps = 0;
    swaps = 0;
    mergeSort(arr2, 0, TEST_ARRAY_SIZE - 1, &comps, &swaps);
    printIntArray(arr2, TEST_ARRAY_SIZE);
    printf("Comparisons: %zu, copying to new array: %zu\n", comps, swaps);
    printf("\n");

    printf("Radix sort\n");
    comps = 0;
    swaps = 0;
    printf("Sourse array:\n");
    printIntArray(arr3, TEST_ARRAY_SIZE);

    for (int i = 0; i < 3; i++)
    {
        countingSort(arr3, TEST_ARRAY_SIZE, i, &comps, &swaps);
        printf("Sorted by the digit number %d from the right:\n", i + 1);
        printIntArray(arr3, TEST_ARRAY_SIZE);
    }
    printf("Comparisons: %zu, copying to new array: %zu\n", comps, swaps);
    printf("\n\n");

    free(arr1);
    free(arr2);
    free(arr3);
}

int *getRandIntArray(size_t n)
{
    int *arr = newIntArray(n);
    int range = debugMode ? 1000 : 10000000;
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = rand() % range;
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
    int *copy = newIntArray(n);

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
                printf("Swapped elements with indices %3ld and %3ld\n", i, minInd);
            }
            swap(&arr[minInd], &arr[i]);
            (*swaps)++;
        }
        else
        {
            if (debugMode)
            {
                printf("No swap needed for the element with index %3ld\n", i);
            }
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
    int *L = newIntArray(lSize);
    for (size_t i = 0; i < lSize; i++)
    {
        L[i] = arr[left + i];
        (*swaps)++;
    }

    size_t rSize = right - (m + 1) + 1;
    int *R = newIntArray(rSize);
    for (size_t i = 0; i < rSize; i++)
    {
        R[i] = arr[m + 1 + i];
        (*swaps)++;
    }

    if (debugMode)
    {
        printf("left: %zu, m: %zu, right: %zu, lSize: %zu, rSize: %zu\n", left, m, right, lSize, rSize);
        printf("Left array:  ");
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

int getDigit(int a, int k)
{
    static int powersOf10[] = {
        1,
        10,
        100,
        1000,
        10000,
        100000,
        1000000,
        10000000,
        100000000,
        1000000000,
    };

    return (a / powersOf10[k]) % 10;
}

void countingSort(int *arr, int n, int digit, __attribute__((unused)) size_t *comparisons, size_t *swaps)
{
    int *count = newIntArray(10);
    for (size_t i = 0; i < 10; i++)
    {
        count[i] = 0;
    }

    int *output = newIntArray(n);

    for (size_t i = 0; i < (size_t)n; i++)
    {
        count[getDigit(arr[i], digit)]++;
    }

    int total = 0;
    for (size_t i = 0; i < 10; i++)
    {
        int temp = count[i];
        count[i] += total;
        total += temp;
        (*swaps)++;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int key = getDigit(arr[i], digit);
        int ind = count[key] - 1;
        output[ind] = arr[i];
        count[getDigit(arr[i], digit)]--;
        (*swaps)++;
    }

    for (size_t i = 0; i < (size_t)n; i++)
    {
        arr[i] = output[i];
        (*swaps)++;
    }

    free(output);
    free(count);
}

void radixSort(int *arr, int n, size_t *comparisons, size_t *swaps)
{
    for (size_t i = 0; i < 3; i++)
    {
        countingSort(arr, n, i, comparisons, swaps);
        if (debugMode)
        {

            printIntArray(arr, n);
        }
    }
}

int *newIntArray(size_t n)
{
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    return arr;
}

int *getIntArrayByCase(size_t n, caseType testCase)
{
    int *arr;

    switch (testCase)
    {
    case BEST:
        arr = newIntArray(n);
        for (size_t i = 0; i < n; i++)
        {
            arr[i] = i;
        }
        break;

    case MIDDLE:
        arr = getRandIntArray(n);
        break;

    case WORST:
        arr = newIntArray(n);
        for (size_t i = 0; i < n; i++)
        {
            arr[i] = n - i;
        }
        break;

    default:
        printf("Wrong test case type");
        exit(EXIT_FAILURE);
        break;
    }

    return arr;
}
