#include<stdio.h>
int main(){
	int index;
	printf("Enter the number of elements you want in an array\n");
	scanf("%d", &index);
	
	int arr[index] = {};
	for (int i = 0; i < index; i++){
		printf("Enter number for index %d\n", i);
		scanf("%d", &arr[i]);
	} 
	int change;
	char choice;
	do{
		printf("Enter the index which you want to modify\n");
		scanf("%d", &change);
		printf("Enter the updated element\n");
		scanf("%d", &arr[change]);
		printf("Do you want to change more elements, y for yes, n for no\n");
		scanf(" %c", &choice);
	}
	while (choice == 'Y' || choice == 'y');
	
	for (int i = 0; i < index; i++){
		printf("%d\t", arr[i]);
	}
}
