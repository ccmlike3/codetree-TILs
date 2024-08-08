#include <stdio.h>

int main() {
    char    c;
    char    str[6] = {'L', 'E', 'B', 'R', 'O', 'S'};

    scanf("%c", &c);
    for (int i = 0; i < 6; i++)
    {
        if (c == str[i])
        {
            printf("%d", i);
            return (0);
        }
    }
    printf("None");
    return 0;
}