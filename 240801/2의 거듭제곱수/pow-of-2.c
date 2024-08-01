#include <stdio.h>

int main() {
    int n;
    int x;

    scanf("%d", &n);
    x = 0;
    while (n != 1)
    {
        if (n / 2)
        {
            n /= 2;
            x++;
        }
    }
    printf("%d", x);
    return 0;
}