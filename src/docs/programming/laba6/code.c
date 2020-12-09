#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <ctype.h>

#define ARRAY_SIZE(arr) (sizeof((arr)) / sizeof((arr)[0]))

char *capitalizeSentences(char *source);

int main(void)
{
    char *string = " sed ut perspiciatis unde! omnis iste natus error sit? voluptatem accusantium.doloremque laudantium, totam rem aperiam.    eaque ipsa quae ab illo!voluptas nulla pariatur?";
    char *result = capitalizeSentences(string);

    printf("source string:\n");
    printf("%s\n\n", string);
    printf("result string:\n");
    printf("%s\n\n", result);

    free(result);
    return 0;
}

char *capitalizeSentences(char *source)
{
    char *startPattern = "^\\W*\\w";
    char *restPattern = "([.!?])\\W*(\\w)";
    char *string = " sed ut perspiciatis unde! omnis iste natus error sit? voluptatem accusantium.doloremque laudantium, totam rem aperiam.    eaque ipsa quae ab illo!voluptas nulla pariatur?";
    regex_t startRegex;
    regex_t restRegex;

    char *result = malloc(strlen(source) * sizeof(char) + 1);
    strcpy(result, source);

    if (regcomp(&startRegex, startPattern, REG_EXTENDED) || regcomp(&restRegex, restPattern, REG_EXTENDED))
    {
        printf("Failed to compile regex pattern\n");
        exit(EXIT_FAILURE);
    }

    regmatch_t pmatch[1];
    size_t pos;
    char *s = string;

    if (!regexec(&startRegex, s, ARRAY_SIZE(pmatch), pmatch, 0))
    {
        pos = (s - string) + pmatch[0].rm_eo - 1;
        result[pos] = toupper(string[pos]);
    }

    for (int i = 0;; i++)
    {
        if (regexec(&restRegex, s, ARRAY_SIZE(pmatch), pmatch, 0))
            break;

        pos = (s - string) + pmatch[0].rm_eo - 1;
        result[pos] = toupper(string[pos]);
        s += pmatch[0].rm_eo;
    }

    return result;
}
