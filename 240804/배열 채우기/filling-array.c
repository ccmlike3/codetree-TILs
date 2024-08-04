#include <stdio.h>

int main() {
    int count;
    int arr[10];

    count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
            break;
        count++;
    }
    for (int i = count - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}