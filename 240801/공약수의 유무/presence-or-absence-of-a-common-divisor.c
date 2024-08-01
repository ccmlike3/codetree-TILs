#include <stdio.h>

int main() {
    int a;
    int b;

    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (!(1920 % i) && !(2880 % i))
            {
                printf("1");
                return (0);
            }
    }
    printf("0");
    return 0;
}