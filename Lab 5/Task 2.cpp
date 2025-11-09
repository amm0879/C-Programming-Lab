#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);
    printf("%d\n", (x > 5) && (y < 10));
    printf("%d\n", (x == 10) || (y == 5));
    printf("%d\n", !(x == y));
}

