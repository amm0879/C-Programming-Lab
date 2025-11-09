#include<stdio.h>
int main(){
	int num, max, min;
	char choice;
	printf("Enter a number\n");
	scanf("%d", &num);
	max = num;
	min = num;
	printf("Max number is %d\n", max);
	printf("Min number is %d\n", min);
	printf("Do you want to continue press y for yes or n for no\n");
	scanf(" %c", &choice);
	while (choice == 'y' || choice == 'Y'){
		printf("Enter a number\n");
		scanf("%d", &num);
		if (num > max){
			max = num;
		}
		else if (num < min) {
			min = num;
		}
		printf("Max number is %d\n", max);
		printf("Min number is %d\n", min);
		printf("Do you want to continue press y for yes or n for no\n");
		scanf(" %c", &choice);
	}
	printf("Maximum number you entered is %d\n", max);
	printf("Minimum number you entered is %d\n", min);
}
