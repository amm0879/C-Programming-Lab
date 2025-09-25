#include<stdio.h>
int main(){
	int Num;
	printf("Enter any number:\n");
	scanf("%d", &Num);
	if ((Num % 2) == 0){
		printf("Number is even");
	}
	else{
		printf("Number is odd");
	}
	
}
