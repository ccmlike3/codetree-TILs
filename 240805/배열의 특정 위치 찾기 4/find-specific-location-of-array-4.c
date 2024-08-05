#include <stdio.h>

int main() {
    int n;
    int sum;
    int count;

    sum = 0;
    count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        if (!(n % 2))
        {
            sum += n;
            count++;
        }
    }
    printf("%d %d", count, sum);
    return 0;
}