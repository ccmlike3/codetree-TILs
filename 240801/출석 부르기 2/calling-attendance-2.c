#include <stdio.h>

int main() {
    int n;

    for (;;)
    {
        scanf("%d", &n);
        if (n == 1)
            printf("John\n");
        else if (n == 2)
            printf("Tom\n");
        else if (n == 3)
            printf("Paul\n");
        else if (n == 4)
            printf("Sam\n");
        else
        {
            printf("Vacancy\n");
            break;
        }
    }
    return 0;
}