#include <stdio.h>

int main() {
    int n;
    int flag;
    int arr[10];

    scanf("%d", &n);
    flag = 0;
    for (int i = 1; i <= 10; i++)
    {
        arr[i - 1] = i * n;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
        if (!(arr[i] % 5))
            flag++;
        if (flag == 2)
            break;
    }
    return 0;
}