#include <stdio.h>

int main() {
    int sum;
    int count;
    int arr[10];
    double average;

    sum = 0;
    count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= 250)
        {
            break;
        }
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    average = (double)sum / count;
    printf("%d %.1lf", sum, average);
    return 0;
}