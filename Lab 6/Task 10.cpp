#include<stdio.h>
int main(){
	int num, sum = 0;
	char choice;
	printf("Enter a number\n");
	scanf("%d", &num);
	sum = sum + num;
	printf("Total is: %d\n", sum);
	printf("Do you want to continue press y for yes or n for no\n");
	scanf(" %c", &choice);
	while (choice == 'y' || choice == 'Y'){
		printf("Enter a number\n");
		scanf("%d", &num);
		sum = sum + num;
		printf("Total is: %d\n" ,sum);
		printf("Do you want to continue press y for yes or n for no\n");
		scanf(" %c", &choice);			
	}
	printf("Total of all numbers is: %d\n" ,sum);
}
