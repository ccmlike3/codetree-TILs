#include <stdio.h>

int main() {
    int count;
    int arr[10];

    count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
        if (arr[i] == 0)
            break;
        else if (arr[i] % 2)
            arr[i] += 3;
        else if (!(arr[i] % 2))
            arr[i] /= 2;
        count++;
    }
    for (int i = 0; i < count; i++)
        printf("%d ", arr[i]);
    return 0;
}