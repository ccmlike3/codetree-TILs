#include <stdio.h>

int main() {
    char    str[10];
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%c ", &str[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 1 || i == 4 || i == 7)
            printf("%c ", str[i]);
    }
    return 0;
}