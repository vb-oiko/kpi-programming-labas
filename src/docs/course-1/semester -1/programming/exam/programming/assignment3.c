#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    size_t st, count;
    char string[1024];

    printf("Input string:");
    gets(string);

    printf("Input start position:");
    scanf("%ld", &st);

    printf("Input chars count to delete:");
    scanf("%ld", &count);

    size_t len = strlen(string);

    printf("\nstr len = %ld\n", len);

    memcpy(string + st, string + st + count, len - st - count + 1);
    len = strlen(string);
    printf("\nstr len = %ld\n", len);

    printf("\n%s\n", string);
}