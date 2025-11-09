#include <stdio.h>

float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int x;
    int y;
    int z;
    printf("Enter three values\n");
    scanf("%d%d%d", &x, &y, &z);
    float result = average(x, y, z);
    printf("Average = %.2f\n", result);
    return 0;
}

