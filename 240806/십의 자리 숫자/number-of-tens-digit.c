#include <stdio.h>

int main() {
    int a;
    int arr[9];

    for (int i = 0; i < 9; i++)
    {
        arr[i] = 0;
    }
    while (1)
    {
        scanf("%d ", &a);
        if (a == 0)
            break;
        if (a / 10)
            arr[a / 10 - 1]++;
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d - %d\n", i + 1, arr[i]);
    }
    return 0;
}