
#include <stdlib.h>
#include <stdio.h>
#include <sys/times.h> // for times
#include <unistd.h>    // for sysconf

// #define N 50000000
#define PASS_COUNT 5

void printIntArray(int *arr, int n);
int *getRandIntArray(int n);
int getOddArray(int *source, int n, int *target);
int getEvenArray(int *source, int n, int *target);
double getExecutionTime(int N, int debug);

int main(void)
{
    srand(times(NULL));

    printf("\n\n");
    getExecutionTime(20, 1);

    printf("!-------------------------------------------------------------------------------------------------!\n");
    printf("!                   !                                     Time, sec                               !\n");
    printf("!      Number       !-----------------------------------------------------------------------------!\n");
    printf("!    of elements    !   Pass 1   !   Pass 2   !   Pass 3   !   Pass 4   !   Pass 5   !   Average  !\n");
    printf("!-------------------------------------------------------------------------------------------------!\n");
    fflush(stdout);

    for (int i = 10000000; i <= 50000000; i += 10000000)
    {
        printf("! %12d      !", i);
        fflush(stdout);

        float totalTime = 0;

        for (int j = 1; j <= PASS_COUNT; j += 1)
        {
            float time = getExecutionTime(i, 0);
            printf(" % 8lf  !", time);
            fflush(stdout);
            totalTime += time;
        }
        printf(" % 8lf  !", totalTime / PASS_COUNT);

        printf("\n");
    }

    printf("!-------------------------------------------------------------------------------------------------!\n");
    printf("\n\n");

    return 0;
}

void printIntArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
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

double getExecutionTime(int N, int debug)
{
    struct tms start, end;
    long clocks_per_sec = sysconf(_SC_CLK_TCK);
    long clocks;

    int *arr = getRandIntArray(N);

    int *odds = malloc(N * sizeof(int));
    int *evens = malloc(N * sizeof(int));

    if (odds == NULL || evens == NULL)
    {
        printf("Failled to allocate memory");
        exit(EXIT_FAILURE);
    }

    times(&start);
    int nOdds = getOddArray(arr, N, odds);
    int nEvens = getEvenArray(arr, N, evens);
    times(&end);

    if (debug == 1)
    {
        printf("Algorithm check\n\n");
        printf("Source array\n");
        printIntArray(arr, N);
        printf("Odd array\n");
        printIntArray(odds, nOdds);
        printf("Even array\n");
        printIntArray(evens, nEvens);
        printf("\n");
        fflush(stdout);
    }

    free(arr);
    free(odds);
    free(evens);

    clocks = end.tms_utime - start.tms_utime;
    return (double)clocks / clocks_per_sec;
}