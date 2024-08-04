#include <stdio.h>

int main() {
    double  a;
    double  sum;
    double  average;

    sum = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &a);
        sum += a;
    }
    average = sum / 8;
    printf("%.1lf", average);
    return 0;
}