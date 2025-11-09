#include<stdio.h>
int main(){
	int n;
	int factorial = 1;
	printf("Enter a number for factorial\n");
	scanf("%d", &n);
	while (n > 0){
		factorial = factorial * n;
		n = n-1;
	}
	printf("The factorial is %d", factorial);
}
