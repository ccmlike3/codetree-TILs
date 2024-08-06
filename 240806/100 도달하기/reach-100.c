#include <stdio.h>

int main() {
    int n;
    int count;
    int arr[100];

    count = 2;
    scanf("%d", &n);
    arr[0] = 1;
    arr[1] = n;
    for (int i = 2; i < 100; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        if (arr[i] >= 100)
            break;
        count++;
    }
    for (int i = 0; i <= count; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}