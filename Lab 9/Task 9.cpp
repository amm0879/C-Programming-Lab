#include <stdio.h>

int add(int a, int b) { 
	return a + b;
}
int subtract(int a, int b) { 
	return a - b; 
}
int multiply(int a, int b) { 
	return a * b; 
}
int divide(int a, int b) { 
	return a / b; 
}

int main() {
    int x, y, choice;
    int (*func_ptr)(int, int);

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Choose operation: 1-Add 2-Subtract 3-Multiply 4-Divide\n");
    scanf("%d", &choice);

    if (choice == 1)
        func_ptr = add;
    else if (choice == 2)
        func_ptr = subtract;
    else if (choice == 3)
        func_ptr = multiply;
    else if (choice == 4)
        func_ptr = divide;
    else
        return 1;

    printf("Result: %d\n", func_ptr(x, y));
    return 0;
}

