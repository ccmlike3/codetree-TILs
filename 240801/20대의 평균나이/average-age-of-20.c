#include <stdio.h>

int main() {
    int n;
    int sum;
    double count;

    sum = 0;
    count = 0;
    while (1)
    {
        scanf("%d", &n);
        if (!(n >= 20 && n <= 29))
            break;
        sum += n;
        count++;
    }
    printf("%.2lf", sum / count);
    return 0;
}