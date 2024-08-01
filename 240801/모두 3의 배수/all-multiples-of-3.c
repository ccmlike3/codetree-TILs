#include <stdio.h>

int main() {
    int n;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if (!(n % 3))
            continue;
        else
        {
            printf("0");
            return (0);
        }
    }
    printf("1");
    return 0;
}