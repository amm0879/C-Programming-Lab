#include<stdio.h>
int main(){
	int Num1, Num2;
	int operation;
	float answer;
	printf("Enter two Numbers(second number should not be zero)\n");
	scanf("%d%d", &Num1, &Num2);
	printf("Enter 1 for +, 2 for -, 3 for *, 4 for /\n");
	scanf("%d", &operation);
	switch(operation){
		case 1:
			answer = Num1 + Num2;
			printf("%.0f", answer);
			break;
		case 2:
			answer = Num1 - Num2;
			printf("%.0f", answer);
			break;
		case 3:
			answer = Num1 * Num2;
			printf("%.0f", answer);
			break;
		case 4:
			answer = Num1/Num2;
			printf("%.2f", answer);
			break;
		default:
			printf("Invalid operator");
	}
	return 0;
}
