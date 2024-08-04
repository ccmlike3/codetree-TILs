#include <stdio.h>

int main() {
    int     n;
    int     sum;
    int     count;
    double  average;

    sum = 0;
    count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &n);
        if (n == 0)
            break;
        sum += n;
        count++;
    }
    average = (double)sum / count;
    printf("%d %.1lf", sum, average);
    return 0;
}