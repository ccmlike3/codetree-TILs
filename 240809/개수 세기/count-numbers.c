#include <stdio.h>

int main() {
    int n;
    int m;
    int count;
    int arr[100];

    count = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
        if (arr[i] == m)
            count++;
    }
    printf("%d", count);
    return 0;
}