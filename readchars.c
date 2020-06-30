#include <stdio.h>

int main()
{
    printf("EOF = %d\n", EOF);
    int c;
    int n = 0;
    while((c = getchar()) != EOF)
    {
        if (c == '\n') {
            printf("%d\n", n);
            n = 0;
        } else {
            n++;
        }
    }
    return 0;
}