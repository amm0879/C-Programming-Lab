#include<stdio.h>
int main(){
	int num;
	printf("Enter any number\n");
	scanf("%d", &num);
	if (num > 0){
		printf("You entered positive number\n");
	}
	else if (num < 0){
		printf("You entered negative number\n");
	}
	else{
		printf("You enterd zero\n");
	}
}
