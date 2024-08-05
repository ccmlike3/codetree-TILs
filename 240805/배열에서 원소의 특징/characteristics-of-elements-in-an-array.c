#include <stdio.h>

int main() {
    int a;
    int n;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &n);
        if (!(n % 3))
        {
            printf("%d", a);
            break;
        }
        a = n;
    }
    return 0;
}