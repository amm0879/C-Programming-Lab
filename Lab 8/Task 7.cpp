#include<stdio.h>
int main(){
	int size;
	printf("Enter the size if the matrix: ");
	scanf("%d", &size);
	int mat_1[size][size], mat_2[size][size];
	int mat_r[size][size] = {0};
	
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			printf("Enter element for matrix 1, row %d and column %d: ", i, j);
			scanf("%d", &mat_1[i][j]);
			
			printf("Enter element for matrix 2, row %d and column %d: ", i, j);
			scanf("%d", &mat_2[i][j]);
		}
	}
	
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			for (int k = 0; k < size; k++){
				mat_r[i][j] += (mat_1[i][k] * mat_2[k][j]);
			}
		}
	}
	
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			printf("%d ", mat_r[i][j]);
		}
		printf("\n");
	}
}
