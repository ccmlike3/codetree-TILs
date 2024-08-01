#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int l = 0; l < i; l++)
        {
            printf("  ");
        }
        for (int j = i; j < n; j++)
        {
            printf("* ");
        }
        for (int k = i; k < n - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}