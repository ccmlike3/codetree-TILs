#include <stdio.h>

int main() {
    int n;
    int count;

    scanf("%d", &n);
    count = 0;
    while (n != 1)
    {
        if (!(n % 2))
            n /= 2;
        else
            n = n * 3 + 1;
        count++;
    }
    printf("%d", count);
    return 0;
}