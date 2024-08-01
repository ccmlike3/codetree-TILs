#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);
    for (int i = a; i <= b; i++)
    {
        if (!(i % c))
        {
            printf("NO");
            return (0);
        }
    }
    printf("YES");
    return 0;
}