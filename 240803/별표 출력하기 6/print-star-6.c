#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
                printf("  ");
        for (int j = (2 * n - 1) - (2 * i); j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = n - 1 - i; k > 1; k--)
            printf("  ");
        for (int j = 3 + 2 * i; j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}