#include <stdio.h>

int main() {
    int a;
    int n;
    
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        arr[i] = a;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (!(arr[i] % 2))
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}