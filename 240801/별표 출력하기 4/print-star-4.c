#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int k = n; k > 0; k--)
    {
        for (int l = k; l > 0; l--)
            printf("* ");
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j <= n - i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}