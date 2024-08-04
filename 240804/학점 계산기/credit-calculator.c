#include <stdio.h>

int main() {
    int n;
    double a;
    double sum;
    double average;

    sum = 0;
    average = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a);
        sum += a;
    }
    average = (double)sum / n;
    printf("%.1lf\n", average);
    if (average >= 4.0)
        printf("Perfect");
    else if (average >= 3.0)
        printf("Good");
    else
        printf("Poor");
    return 0;
}