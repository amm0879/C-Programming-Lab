#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two Numbers\n");
	scanf("%d%d", &a, &b);
	printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a >> b: %d\n", a >> b);
    printf("a << b: %d\n", a << b);
}

