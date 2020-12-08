#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define INPUT_FILE "/src/docs/programming/laba5/input.txt"

char *readline();
char **split_string(char *);
FILE *openFile(void);
int readInt(FILE *fptr);
int *readIntArray(FILE *fptr, int n);
int *printIntArray(int *arr, int n);
int **readIntMatrix(FILE *fptr, int m, int n);
int **printIntMatrix(int **A, int m, int n);
void freeMatrix(int **A, int m, int n);

int main()
{
    FILE *fptr = openFile();
    int m = readInt(fptr);
    int n = readInt(fptr);
    int k = readInt(fptr);
    printf("rows count: %d\n", m);
    printf("columns count: %d\n", n);
    printf("row to sort: %d\n", k);

    int **A = readIntMatrix(fptr, m, n);

    printf("matrix:\n");
    printIntMatrix(A, m, n);

    freeMatrix(A, m, n);
    fclose(fptr);
    printf("\n\n");
    return 0;
}

char *readline(FILE *fptr)
{
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char *data = malloc(alloc_length);

    while (true)
    {
        char *cursor = data + data_length;
        char *line = fgets(cursor, alloc_length - data_length, fptr);

        if (!line)
        {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n')
        {
            break;
        }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data)
        {
            break;
        }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n')
    {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char **split_string(char *str)
{
    char **splits = NULL;
    char *token = strtok(str, " ");

    int spaces = 0;

    while (token)
    {
        splits = realloc(splits, sizeof(char *) * ++spaces);
        if (!splits)
        {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

FILE *openFile(void)
{
    char inputFilePath[1024];
    getcwd(inputFilePath, sizeof(inputFilePath));
    strcat(inputFilePath, INPUT_FILE);

    // printf("input file with the path: %s\n", inputFilePath);

    FILE *fptr = fopen(inputFilePath, "r");

    if (fptr == NULL)
    {
        printf("Error! opening file\n\n");
        exit(1);
    }

    return fptr;
}

int readInt(FILE *fptr)
{
    char *n_endptr;
    char *n_str = readline(fptr);
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0')
    {
        exit(EXIT_FAILURE);
    }

    return n;
}

int *readIntArray(FILE *fptr, int n)
{
    char **c_temp = split_string(readline(fptr));

    int *c = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        char *c_item_endptr;
        char *c_item_str = *(c_temp + i);
        int c_item = strtol(c_item_str, &c_item_endptr, 10);

        if (c_item_endptr == c_item_str || *c_item_endptr != '\0')
        {
            exit(EXIT_FAILURE);
        }

        *(c + i) = c_item;
    }

    return c;
}

int *printIntArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");
}

int **readIntMatrix(FILE *fptr, int m, int n)
{
    int **A = (int **)malloc(m * sizeof(int));

    for (int i = 0; i < m; i++)
    {
        A[i] = readIntArray(fptr, n);
    }
    return A;
}

int **printIntMatrix(int **A, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        printIntArray(A[i], n);
    }
    return A;
}

void freeMatrix(int **A, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        free(A[i]);
    }

    free(A);
}