#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *from, *to;
    int c;
    if (argc < 3) {
        fprintf(stderr, "Not enougth arguments\n");
        return 1;
    }

    from = fopen(argv[1], "r");
    if (!from) {
        perror(argv[1]);
    }
    to = fopen(argv[2], "w");
    if (!to) {
        perror(argv[2]);
    }

    while ((c = fgetc(from)) != EOF) {
        fputc(c, to);
    }

    fclose(from);
    fclose(to);
    
    return 0;
}