#include<stdio.h>
int findMax(int arr[], int size){
	int max = arr[0];
	for (int i = 0; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int size = 5;
	printf("Max number is %d", findMax(arr, size));
}

