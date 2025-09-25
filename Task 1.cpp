#include<stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	if (age > 17)
	{
		printf("You are eligible for casting vote");
	}
	else{
		printf("You are not eligible");
	}
}
