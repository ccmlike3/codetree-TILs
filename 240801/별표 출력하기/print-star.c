#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
            printf("* ");
        printf("\n");
    }
    for (int k = n - 1; k > 0; k--)
    {
        for (int l = k; l > 0; l--)
            printf("* ");
        printf("\n");
    }
    
    return 0;
}