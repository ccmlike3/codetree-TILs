#include <stdio.h>

int main() {
    int i;
    int n;

    i = 0;
    while (i != 3)
    {
        scanf("%d", &n);
        if (n % 2 || i == 3)
            continue;
        else
        {
            printf("%d\n", n / 2);
            i++;
        }
    }
    return 0;
}