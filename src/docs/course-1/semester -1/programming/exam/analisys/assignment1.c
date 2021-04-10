#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *digits = "01234567890ABCDEFGHIJKLMNOPQRSTVWXYZ";
void addDigit(int *rest, int base, char *target);

int main(void)
{

    int source;
    int base;
    char target[1024] = "\0";

    printf("\n\nPlease input an integer: ");
    scanf("%d", &source);
    printf("Please input base: ");
    scanf("%d", &base);

    int rest = source;

    addDigit(&rest, base, target);

    printf("Number %d in base %d: %s\n\n", source, base, target);

    return (0);
}

void addDigit(int *rest, int base, char *target)
{
    if (*rest == 0)
    {
        return;
    }

    size_t strLen = strlen(target);

    for (int i = strLen; i >= 0; i -= 1)
    {
        target[i + 1] = target[i];
    }

    int remainder = *rest % base;
    target[0] = digits[remainder];

    *rest /= base;

    addDigit(rest, base, target);
}
