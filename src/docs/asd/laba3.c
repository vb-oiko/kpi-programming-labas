#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define N 20

int *readIntArray(FILE *fptr, int n);
char **split_string(char *str);
char *readline(FILE *fptr);
FILE *openFile(const char *filename);
void printIntArray(int *arr, int n);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Please provide the name of the file with data as a command line parameter\n\n");
        exit(EXIT_FAILURE);
    }

    const char *filename = argv[1];

    FILE *file = openFile(filename);
    int *arr = readIntArray(file, N);
    printf("Source data:\n");
    printIntArray(arr, N);


    printf("\n");
    printf("\n");

    fclose(file);
    free(arr);
    exit(EXIT_SUCCESS);
}

int *readIntArray(FILE *fptr, int n)
{
    char **c_temp = split_string(readline(fptr));

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n; i++)
    {
        char *c_item_endptr;
        char *c_item_str = *(c_temp + i);
        int c_item = strtol(c_item_str, &c_item_endptr, 10);

        if (c_item_endptr == c_item_str || *c_item_endptr != '\0')
        {
            exit(EXIT_FAILURE);
        }

        *(arr + i) = c_item;
    }

    return arr;
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

char *readline(FILE *fptr)
{
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char *data = malloc(alloc_length);

    while (1)
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

FILE *openFile(const char *filename)
{
    FILE *fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("Error! opening file: %s\n\n", filename);
        exit(EXIT_FAILURE);
    }

    return fptr;
}

void printIntArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");
}
