#include<stdio.h>
int main(){
	int arr[10];
	int sum = 0;
	int j = 9;
	int temp;
	for (int i = 0; i < 10; i++){
		printf("Enter a number\n");
		scanf("%d", &arr[i]);
	}
	printf("Original Array\n");
	for (int i = 0; i < 10; i++){
		printf("%d\t", arr[i]);
	}
	
	
	for (int i = 0; i <5; i++){
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
		j--;
	}
	printf("\nReversed Array\n");
	for (int i = 0; i < 10; i++){
		printf("%d\t", arr[i]);
		sum += arr[i];
	}
	printf("\n%d", sum);
}

