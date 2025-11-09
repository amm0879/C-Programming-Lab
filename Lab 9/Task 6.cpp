#include <stdio.h>

void calculate(int a, int b, int *sum, float *avg) {
    *sum = a + b;
    *avg = (a + b) / 2.0;
}

int main() {
    int x = 6;
    int y = 18;
    int result_sum;
    float result_avg;
    calculate(x, y, &result_sum, &result_avg);
    printf("Sum = %d\n", result_sum);
    printf("Average = %.2f\n", result_avg);
    return 0;
}

