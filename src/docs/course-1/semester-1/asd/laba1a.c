/*
Є символи S1,...,Sn. Відомо, що серед символів S2,S3,...Sn є кілька
знаків питання. Визначити кількість символів пробілу серед Si,...,Sn, що
йдуть перед другим знаком питання.
*/

#include <string.h>
#include <stdio.h>

const char *str = " wrthr thtw 45h4255 ?e5t ? ere5ty ? qw54trq5yt";
size_t countSpacesBeforeSecondQuestionMark(const char *str);

int main(void)
{
    size_t c = countSpacesBeforeSecondQuestionMark(str);

    printf("Source string:\n%s\n", str);
    printf("Number of spaces before the second question mark: %zu\n\n", c);
    return 0;
}

size_t countSpacesBeforeSecondQuestionMark(const char *str)
{
    int spaces = 0;
    int questions = 0;
    int len = strlen(str);

    for (size_t i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }

        if (str[i] == '?')
        {
            questions++;
            if (questions == 2)
            {
                break;
            }
        }
    }

    return spaces;
}