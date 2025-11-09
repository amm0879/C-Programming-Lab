#include <stdio.h>

int main() {
    int *ptr = NULL;
    if (ptr == NULL) {
        printf("Pointer does not reference any valid memory.\n");
    }
    return 0;
}

