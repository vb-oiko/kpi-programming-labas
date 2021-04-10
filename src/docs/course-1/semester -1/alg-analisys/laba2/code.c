#include <stdio.h>
#include <string.h>
#include <regex.h>
#include <stdlib.h>
#include <sys/times.h> // for times
#include <unistd.h>    // for sysconf

#define ARRAY_SIZE(arr) (sizeof((arr)) / sizeof((arr)[0]))
#define MAX_STR_LEN (2lu << 20) - 1
#define TEST_STR_LEN 80
#define MESURE_COUNT 5
#define PASS_COUNT 5000
#define TEST_CASES_NUM 4
#define WORD_LEN 6
typedef enum
{
    FIRST,
    MIDDLE,
    LAST,
    NOT_PRESENT
} caseType;

char caseName[TEST_CASES_NUM][13] = {
    "Best",
    "Middle",
    "Worst",
    "Non existent",
};

char caseWord[TEST_CASES_NUM + 1][WORD_LEN + 1] = {
    "AAAAAA",
    "BBBBBB",
    "CCCCCC",
    "DDDDDD",
    "EEEEEE",
};

int curLength = 0;
const char *STR_END = "\0";

int push(char **arr, char *word);
void printStrArray(char **arr, int arrLength);
void splitStrToArray(char **arr, char *string);
char *newString(size_t length);
char **newStringArray(size_t maxLength);
void freeStrArray(char **arr, int arrLength);
void checkTestDataGeneration();
int quickLinearSearch(const char *searchedWord, char **arr, int arrLen);
void generateTestString(char *string, size_t strLen);
double getExecutionTime(char *searchWord, char **arr);

int main(void)
{
    printf("Testing the algorithm...\n\n");
    checkTestDataGeneration();

    printf("Generating string...\n");
    char *string = newString(MAX_STR_LEN);
    generateTestString(string, MAX_STR_LEN);
    printf("Generated string length: %d\n\n", strlen(string));

    printf("Splitting string into array...\n");
    char **arr = newStringArray(MAX_STR_LEN / (WORD_LEN + 1) + 1);
    curLength = 0;
    splitStrToArray(arr, string);
    printf("Array size: %d\n\n", curLength);

    printf("Starting to search through array...n");
    printf("Number of iterations in each pass: %d\n\n", PASS_COUNT);

    printf("!-------------------------------------------------------------------------------------------------!\n");
    printf("!                   !                                     Time, sec                               !\n");
    printf("!     Test case     !-----------------------------------------------------------------------------!\n");
    printf("!                   !   Pass 1   !   Pass 2   !   Pass 3   !   Pass 4   !   Pass 5   !   Average  !\n");
    printf("!-------------------------------------------------------------------------------------------------!\n");
    fflush(stdout);

    for (caseType testCase = FIRST; testCase <= NOT_PRESENT; testCase++)
    {
        printf("! %12s      !", caseName[testCase]);
        fflush(stdout);

        float totalTime = 0;

        for (int j = 1; j <= MESURE_COUNT; j += 1)
        {
            float time = getExecutionTime(caseWord[testCase], arr);
            printf(" % 8lf  !", time);
            fflush(stdout);
            totalTime += time;
        }
        printf(" % 8lf  !", totalTime / MESURE_COUNT);

        printf("\n");
    }

    printf("!-------------------------------------------------------------------------------------------------!\n");
    printf("\n\n");

    return 0;
}

double getExecutionTime(char *searchWord, char **arr)
{
    struct tms start, end;
    long clocks_per_sec = sysconf(_SC_CLK_TCK);
    long clocks;

    times(&start);
    for (size_t i = 0; i < PASS_COUNT; i++)
    {
        quickLinearSearch(searchWord, arr, curLength);
    }
    times(&end);

    clocks = end.tms_utime - start.tms_utime;
    return (double)clocks / clocks_per_sec;
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

    char *string = newString(TEST_STR_LEN);
    char **arr = newStringArray(TEST_STR_LEN / (WORD_LEN + 1) + 1);
    curLength = 0;
    generateTestString(string, TEST_STR_LEN);
    splitStrToArray(arr, string);

    for (caseType testCase = FIRST; testCase <= NOT_PRESENT; testCase++)
    {

        printf("Test Case %d:\n", testCase);
        printf("String: %s\n\n", string);
        printf("Array:\n");
        printStrArray(arr, curLength);
        printf("Searched word: %s\n", caseWord[testCase]);

        int ind = quickLinearSearch(caseWord[testCase], arr, curLength);
        printf("Index of the searched word in array (or -1 if the word is not found) is: %d\n", ind);
    }

    printf("\n\n");
    freeStrArray(arr, curLength);
    free(string);
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

void generateTestString(char *string, size_t strLen)
{
    const char *SPACE = " ";

    size_t wordCount = (strLen - 2) / (WORD_LEN + 1);
    size_t target;
    size_t curPos = 0;
    char *sourceWord;

    for (size_t i = 0; i < wordCount; i++)
    {

        sourceWord = caseWord[TEST_CASES_NUM]; //default word

        if (i == 0)
        {
            sourceWord = caseWord[FIRST];
        }

        if (i == wordCount / 2)
        {
            sourceWord = caseWord[MIDDLE];
        }

        if (i == wordCount - 1)
        {
            sourceWord = caseWord[LAST];
        }

        memcpy(string + curPos, sourceWord, WORD_LEN);
        curPos += WORD_LEN;
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