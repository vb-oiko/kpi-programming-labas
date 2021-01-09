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
char *getTestString(size_t len);
char **splitStrToArray(char *string);
size_t getWordCount(size_t len);

int verbose = 0;

int main(void)
{
    srand(times(NULL));
    char *s = getTestString(100);
    size_t wordCount = getWordCount(strlen(s));
    printf("%s\n%zu\n", s, wordCount);

    free(s);
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

char *getTestString(size_t len)
{
    char *str = newString(len + 1);

    const char *SPACE = " ";

    size_t wordCount = getWordCount(len);
    size_t pos = 0;
    char word[WORD_LEN + 1];

    for (size_t i = 0; i < wordCount; i++)
    {
        getWord(word, (long)i);
        memcpy(str + pos, word, WORD_LEN);
        pos += WORD_LEN;
        memcpy(str + pos, SPACE, 1);
        pos++;
    }

    return str;
}

char **splitStrToArray(char *string)
{
    char *pattern = "\\w+";
    regex_t regex;
    size_t len = strlen(string);
    size_t wordCount = getWordCount(len);

    char **arr = newStringArray(wordCount);

    if (regcomp(&regex, pattern, REG_EXTENDED))
    {
        printf("Failed to compile regex pattern\n");
        exit(EXIT_FAILURE);
    }

    regmatch_t pmatch[1];
    char *st;
    char *s = string;

    for (int i = 0;; i++)
    {
        if (regexec(&regex, s, ARRAY_SIZE(pmatch), pmatch, 0))
            break;

        st = s + pmatch[0].rm_so;
        len = pmatch[0].rm_eo - pmatch[0].rm_so;

        char *word = malloc((len + 1) * sizeof(char));
        memcpy(word, st, len);
        word[len + 1] = '\0';
        arr[i] = word;
        int eo = pmatch[0].rm_eo;
        s += (eo + 1);
    }

    return arr;
}

size_t getWordCount(size_t len)
{
    return (len - 2) / (WORD_LEN + 1);
}