#include <stdio.h>

int main() {
    int n;
    int arr[10];

    for (int i = 0; i < 6; i++)
        arr[i] = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &n);
        arr[n - 1]++;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d - %d\n", i + 1, arr[i]);
    }    
    return 0;
}