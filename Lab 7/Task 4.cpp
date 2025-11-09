#include<stdio.h>
int main(){
	int scores[] = {2, 5, 9, 7, 4, 10, 5, 1, 8, 3};
	int size = sizeof(scores)/sizeof(scores[0]);
	int temp, median, middle;
	
	for (int j = 0; j < size-1; j++){
		for (int i = 0; i < size -1-j; i++){
			if (scores[i] > scores[i+1]){
				temp = scores[i];
				scores[i] = scores[i+1];
				scores[i+1] = temp;
			}
		}
	}

	
	if ((size%2) == 0){
		middle = (size-1)/2;
		median = (scores[middle] + scores[middle + 1])/2;
	}
	else{
		middle = (size-1)/2;
		median = scores[middle];
	}
	
	printf("The Array after sorting\n");
	for (int i = 0; i < size; i++){
		printf("%d\t", scores[i]);
	}
	
	printf("\n%d", median);
}

