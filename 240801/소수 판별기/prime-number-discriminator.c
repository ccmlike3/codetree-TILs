#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    if (n <= 3)
    {
        printf("P");
        return (0);
    }
    for (int i = 4; i < n; i++)
    {
        if (!(n % i))
        {
            printf("C");
            return (0);
        }
    }
    printf("P");
    return 0;
}