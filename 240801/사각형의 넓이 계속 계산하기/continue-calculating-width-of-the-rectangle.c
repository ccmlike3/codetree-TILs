#include <stdio.h>

int main() {
    int     row;
    int     col;
    char    end;

    while (1)
    {
        scanf("%d %d %c", &col, &row, &end);
        printf("%d\n", col * row);
        if (end == 'C')
            break;
    }
    return 0;
}