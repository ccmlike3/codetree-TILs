#include <stdio.h>

int main() {
    int     count;
    int     t[3];
    int     center[4];
    char    a[3];

    count = 0;
    for (int i = 0; i < 4; i++)
    {
        center[i] = 0;
    }
    for (int i = 0; i < 3; i++)
    {
        scanf("%c %d\n", &a[i], &t[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == 'Y' && t[i] >= 37)
        {
            center[0]++;
            count++;
        }
        else if (a[i] == 'N' && t[i] >= 37)
            center[1]++;
        else if (a[i] == 'Y' && t[i] < 37)
            center[2]++;
        else 
            center[3]++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", center[i]);
    }
    if (count >= 2)
        printf("E ");
    return 0;
}