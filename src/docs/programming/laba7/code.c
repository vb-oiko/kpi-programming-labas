
#include <stdio.h>
#include <math.h>

#define PREC 0.01

double arctan(double x);
double xn(double x, int n);
void printFuncValues(double (*pf)(double), double start, double end, double step);

int main(void)
{
    double start;
    double end;
    double step;

    do
    {
        printf("please input following values dividing them by a space\n");
        printf("left limit of the range (-1 <= l <= 1)\n");
        printf("right limit of the range (l < r <= 1)\n");
        printf("step (st <= r-l)\n");
        scanf("%lf", &start);
        scanf("%lf", &end);
        scanf("%lf", &step);
        printf("\n\n");
    } while (!((start >= -1) && (start <= 1) && (end > start) && (end <= 1) && (step < end - start) && (step != 0)));

    printFuncValues(arctan, start, end, step);

    printf("\n\n");
}

double arctan(double x)
{
    double result = 0;
    double y;
    int n = 0;

    do
    {
        y = xn(x, n);
        result += y;
        n += 1;
    } while (fabs(y) > PREC);

    return result;
}

double xn(double x, int n)
{
    double y = pow(-1, n) * pow(x, 2 * n + 1) / (2 * n + 1);
    return y;
}

void printFuncValues(double (*pf)(double), double start, double end, double step)
{
    printf("range = [%f, %f], step = %f\n\n", start, end, step);
    double y;
    double x = start;

    while (x <= end)
    {
        y = pf(x);
        printf("x =%10f, y =%10f\n", x, y);
        x = x + step;
    }
}
