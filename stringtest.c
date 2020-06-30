#include <stdlib.h>

int main() {
    char *helloPtr = "Hello";
    char helloStr[] = "Hello";

    printf("prt: %d\n", sizeof(helloPtr));
    printf("str: %d\n", sizeof(helloStr));

    helloStr[4] = 0;
    /* here we have an error */
    helloPtr[4] = 0;

    return 0;
}