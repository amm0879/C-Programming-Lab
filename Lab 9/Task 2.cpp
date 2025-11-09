#include<stdio.h>

int main(){    
	int arr[5];
	int *p = arr;
	for (int x = 0; x < 5; x++){
		printf("Enter element for index %d\n", x);
		scanf("%d", &arr[x]);
	}
	for (int i = 0; i < 5; i++){
		printf("Value at arr[%d] is %d and its address is %d\n",i, *(p+i), (p+i));
	}
}

