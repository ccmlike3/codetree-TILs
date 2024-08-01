#include <stdio.h>

int main() {
    int n;
    int cnt;

    scanf("%d", &n);
    cnt = 0;
    while (n < 1000)
    {
        if (!(n % 2))
            n = n * 3 + 1;
        else
            n = n * 2 + 2;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}