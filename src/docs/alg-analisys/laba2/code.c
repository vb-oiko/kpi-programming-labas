#include <stdio.h>
#include <string.h>
#include <regex.h>
#include <stdlib.h>

#define ARRAY_SIZE(arr) (sizeof((arr)) / sizeof((arr)[0]))
#define MAX_STR_LEN (2lu << 21) - 1
#define TEST_STR_LEN 160

typedef enum
{
    FIRST,
    MIDDLE,
    LAST,
    NOT_PRESENT
} caseType;

int curLength = 0;
const char *WORD_DEFAULT = "AAAAAA";
const char *WORD_TO_SEARCH = "BBBBBB";
const char *STR_END = "\0";
const int minWordLen = 7;

int push(char **arr, char *word);
void printStrArray(char **arr, int arrLength);
void splitStrToArray(char **arr, char *string);
void geterateTestString(char *string, const char *defaultWord, const char *searchWord, size_t strLen, caseType testCase);
char *newString(size_t length);
char **newStringArray(size_t maxLength);
void freeStrArray(char **arr, int arrLength);
void checkTestDataGeneration();
int quickLinearSearch(const char *searchedWord, char **arr, int arrLen);

int main(void)
{
    // checkTestDataGeneration();

    char *string = newString(MAX_STR_LEN);
    char **arr = newStringArray(MAX_STR_LEN / minWordLen + 1);
    curLength = 0;

    printf("Test Case %d:\n", LAST);

    geterateTestString(string, WORD_DEFAULT, WORD_TO_SEARCH, MAX_STR_LEN, LAST);
    splitStrToArray(arr, string);

    int ind = quickLinearSearch(WORD_TO_SEARCH, arr, curLength);
    printf("Index of the searched word in array (or -1 if the word is not found) is: %d\n", ind);

    printf("\n\n");
    freeStrArray(arr, curLength);
    free(string);
}

int quickLinearSearch(const char *searchedWord, char **arr, int arrLen)
{
    int res = -1;

    for (int i = 0; i < arrLen; i++)
    {
        if (strcmp(searchedWord, arr[i]) == 0)
        {
            res = i;
            break;
        }
    }

    return res;
}

void checkTestDataGeneration()
{

    for (caseType testCase = FIRST; testCase <= NOT_PRESENT; testCase++)
    {
        char *string = newString(TEST_STR_LEN);
        char **arr = newStringArray(TEST_STR_LEN / minWordLen + 1);
        curLength = 0;

        printf("Test Case %d:\n", testCase);

        geterateTestString(string, WORD_DEFAULT, WORD_TO_SEARCH, TEST_STR_LEN, testCase);
        printf("String: %s\n\n", string);

        splitStrToArray(arr, string);
        printf("Array:\n");
        printStrArray(arr, curLength);

        int ind = quickLinearSearch(WORD_TO_SEARCH, arr, curLength);
        printf("Index of the searched word in array (or -1 if the word is not found) is: %d\n", ind);

        printf("\n\n");
        freeStrArray(arr, curLength);
        free(string);
    }
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

char **newStringArray(size_t maxLength)
{
    char **arr = malloc(maxLength * sizeof(char *));
    if (arr == NULL)
    {
        printf("Failed to allocate memory for the array");
        exit(EXIT_FAILURE);
    }

    return arr;
}

void geterateTestString(char *string, const char *defaultWord, const char *searchWord, size_t strLen, caseType testCase)
{
    const char *SPACE = " ";

    size_t wordLen = strlen(defaultWord) + 1;
    size_t wordCount = (strLen - 2) / wordLen;
    size_t target;

    switch (testCase)
    {
    case FIRST:
        target = 0;
        break;
    case MIDDLE:
        target = wordCount / 2;
        break;
    case LAST:
        target = wordCount - 1;
        break;
    case NOT_PRESENT:
        target = wordCount + 1;
        break;

    default:
        printf("Wrong test case type");
        exit(EXIT_FAILURE);
        break;
    }

    size_t curPos = 0;
    size_t defaultWordLen = strlen(defaultWord);
    size_t searchWordLen = strlen(searchWord);

    for (size_t i = 0; i < wordCount; i++)
    {

        if (i == target)
        {
            memcpy(string + curPos, searchWord, searchWordLen);
            curPos += searchWordLen;
        }
        else
        {
            memcpy(string + curPos, defaultWord, defaultWordLen);
            curPos += defaultWordLen;
        }

        memcpy(string + curPos, SPACE, 1);
        curPos += 1;
    }

    memcpy(string + curPos, STR_END, 1);
}

void splitStrToArray(char **arr, char *string)
{
    char *pattern = "\\w+";
    regex_t regex;

    if (regcomp(&regex, pattern, REG_EXTENDED))
    {
        printf("Failed to compile regex pattern\n");
        exit(EXIT_FAILURE);
    }

    regmatch_t pmatch[1];
    char *st;
    size_t len;
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
        arr[curLength] = word;
        curLength++;
        int eo = pmatch[0].rm_eo;
        s += (eo + 1);
    }
}

void freeStrArray(char **arr, int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        free(arr[i]);
    }
}

void printStrArray(char **arr, int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        printf("%s\n", arr[i]);
    }
}