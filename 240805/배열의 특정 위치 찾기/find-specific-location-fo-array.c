#include <stdio.h>

int main() {
    int n;
    int sum;
    int count;
    double average;

    sum = 0;
    count = 0;
    average = 0;
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        if (!(i % 2))
            sum += n;
        if (!(i % 3))
        {
            average += n;
            count++;
        }
    }
    average /= count;
    printf("%d %.1lf", sum, average);
    return 0;
}