#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("The program will solve the equation in following manner, a + b * (a - b) / 2\n");
    printf("First program will perform (a - b) and will give output %d\n", a - b);
    printf("Then it will divide (a - b) by 2 and will give output %d\n", (a - b) / 2);
    printf("Then it will multiply (a - b)/2 from b and will output %d\n", b * (a - b) / 2);
    printf("Then it will add a to b * (a - b)/2 and will output %d\n", a + b * (a - b) / 2);
    printf("The final ans will be %d", a + b * (a - b) / 2);
}

