#include <stdio.h>

int main() {
    int a;
    int n;
    int arr[9];

    for (int i = 0; i < 9; i++)
        arr[i] = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a);
        arr[a - 1]++;
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}