#include <stdio.h>

int main() {
    int i = 26;
    float f = 2.64;
    char c = 'v';
    void *ptr;

    ptr = &i;
    printf("Integer: %d\n", *(int *)ptr);

    ptr = &f;
    printf("Float: %.2f\n", *(float *)ptr);

    ptr = &c;
    printf("Char: %c\n", *(char *)ptr);

    return 0;
}

