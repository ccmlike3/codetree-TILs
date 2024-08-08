#include <stdio.h>

int main() {
    int a;
    int b;
    int i;
    int sum;
    int mod[1000] = {0};

    i = 0;
    sum = 0;
    scanf("%d %d", &a, &b);
    while (a > 1)
    {
        mod[a % b]++;
        a = a / b;
    }
    while (i < 1000)
    {
        sum += mod[i] * mod[i];
        i++;
    }
    printf("%d", sum);
    return 0;
}