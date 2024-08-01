#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (!(n % i))
        {
            printf("C");
            return (0);
        }
    }
    printf("N");
    return 0;
}