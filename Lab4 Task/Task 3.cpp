#include<stdio.h>
int main(){
	int Num1, Num2, Num3;
	
	printf("Enter your first number\n");
	scanf("%d", &Num1);
	
	printf("Enter your second number\n");
	scanf("%d", &Num2);
	
	printf("Enter your third number\n");
	scanf("%d", &Num3);
	
	if ((Num1 > Num2) && (Num1 > Num3)){
		printf("First Number is greatest");
	}
	else if ((Num2 > Num3) && (Num2 > Num1)){
		printf("Second Number is greatest");
	}
	else {
		printf("Third Number is greatest");
	}
}
