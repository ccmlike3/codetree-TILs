#include <stdio.h>

int main() {
    int a;
    int n;
    int j;
    int arr[100];
    int even[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a);
        arr[i] = a;
    }
    j = 0;
    for (int i = 0; i < n; i++)
    {
        if (!(arr[i] % 2))
        {
            even[j] = arr[i];
            j++;
        } 
    }
    for (int i = 0; i < j; i++)
        printf("%d ", even[i]);
    return 0;
}