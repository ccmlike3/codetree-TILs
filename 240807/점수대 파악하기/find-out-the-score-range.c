#include <stdio.h>

int main() {
    int n;
    int arr[10];

    for (int i = 0; i < 10; i++)
        arr[i] = 0;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d ", &n);
        if (n == 0)
            break;
        else if (10 - (n / 10) >= 0)
            arr[10 - (n / 10)]++;
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d - %d\n", (10 - i) * 10, arr[i]);
    }
    return 0;
}