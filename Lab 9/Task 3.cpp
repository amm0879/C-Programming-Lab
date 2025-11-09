#include<stdio.h>
int mat [2][3];
int sum = 0;

void displayMatrix(int mat[2][3]){
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

int calculateSum(int arr[2][3], int sum){
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			sum += mat[i][j];
		}
	}
	return sum;
}

float calculateaverage(int mat[2][3], int det){
	
	float average = det/6;
	return average;
}

int findMax(int mat[2][3]){
	int max = mat[0][0];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			if (mat[i][j] > max){
				max = mat[i][j];
			}
		}
	}
	return max;
}
int main(){
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("Enter element for row %d and column %d\n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	displayMatrix(mat);
	int total =calculateSum(mat, sum);
	printf("%d\n", total);
	float avg = calculateaverage(mat, total);
	printf("%f\n", avg);
	int maximum = findMax(mat);
	printf("%d\n", maximum);
	
}

