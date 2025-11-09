#include<stdio.h>
int main(){
	int num[5], results[5];
	int result;
	
	for (int x = 0; x < 5; x++){
		printf("Enter the number for position %d\n", x);
		scanf("%d", &num[x]);
	}
	
	for (int i = 0; i < 5; i++){
		result = (((num[i] + 10) -5) *2);
		results[i] = result;
	}
	
	printf("Original Array\tResult after operations\n");
	for (int a = 0; a < 5; a++){
		printf("%d\t\t%d\n", num[a], results[a]);
		
	}
}
