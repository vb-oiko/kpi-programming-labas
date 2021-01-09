#include <stdio.h>
#include <string.h>
#include <regex.h>
#include <stdlib.h>
#include <sys/times.h> // for times
#include <unistd.h>    // for sysconf

#define ARRAY_SIZE(arr) (sizeof((arr)) / sizeof((arr)[0]))
#define MAX_STR_LEN (2lu << 20) - 1
#define TEST_STR_LEN 80
#define MEASURE_COUNT 5
#define PASS_COUNT 1
#define TEST_CASES_NUM 4
#define WORD_LEN 6
typedef enum
{
    BEST,
    MIDDLE,
    WORST,
} caseType;

const char caseName[TEST_CASES_NUM][7] = {
    "Best",
    "Middle",
    "Worst",
};

void getWord(char *str, long i);
char **newStringArray(size_t len);
char *newString(size_t length);
char *getTestString(size_t len, size_t *wordCount);

int verbose = 0;

int main(void)
{
    srand(times(NULL));
    size_t wordCount = 0;
    char *s = getTestString(100, &wordCount);
    printf("%s\n%zu\n", s, wordCount);

    return 0;
}

void getWord(char *str, long n)
{
    sprintf(str, "%06lX", (long)n);
}

char **newStringArray(size_t len)
{
    char **arr = malloc(len * sizeof(char *));
    if (arr == NULL)
    {
        printf("Failed to allocate memory for the array");
        exit(EXIT_FAILURE);
    }

    return arr;
}

char *newString(size_t length)
{
    char *string = malloc(length * sizeof(char));
    if (string == NULL)
    {
        printf("Failed to allocate memory for the test string");
        exit(EXIT_FAILURE);
    }

    return string;
}

char *getTestString(size_t len, size_t *wordCount)
{
    char *str = newString(len + 1);

    const char *SPACE = " ";

    *wordCount = (len - 2) / (WORD_LEN + 1);
    size_t pos = 0;
    char word[WORD_LEN + 1];

    for (size_t i = 0; i < *wordCount; i++)
    {
        getWord(word, (long)i);
        memcpy(str + pos, word, WORD_LEN);
        pos += WORD_LEN;
        memcpy(str + pos, SPACE, 1);
        pos++;
    }

    return str;
}