#include <stdio.h>

int main() {
    int a;
    int n;
    int sum[10];
    int count;

    count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a);
            sum[i] += a;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (sum[i] / 4 >= 60)
        {
            printf("pass\n");
            count++;
        }
        else
            printf("fail\n");
    }
    printf("%d", count);
    return 0;
}