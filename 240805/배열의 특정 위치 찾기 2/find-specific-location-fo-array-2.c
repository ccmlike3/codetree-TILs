#include <stdio.h>

int main() {
    int n;
    int sum1;
    int sum2;
    int arr[10];

    sum1 = 0;
    sum2 = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &n);
        arr[i] = n;
        if (i % 2)
            sum1 += n;
        if (!(i % 2))
            sum2 += n;
    }
    if (sum1 > sum2)
        printf("%d", sum1 - sum2);
    else
        printf("%d", sum2 - sum1);
    return 0;
}