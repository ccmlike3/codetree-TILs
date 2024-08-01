#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j - i> 0; j--)
        {
            for (int k = n; k - i > 0; k--)
                printf("*");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}