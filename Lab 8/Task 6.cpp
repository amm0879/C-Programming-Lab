#include <stdio.h>
int main() {
	int mat_a [3][3], mat_at[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3 ; j++){
			printf("Enter element for row %d and column %d: ", i, j);
			scanf("%d", &mat_a[i][j]);
		}
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3 ; j++){
			mat_at[j][i] = mat_a[i][j];
		}
	}
	printf("Original Matix\tTranspose Matrix\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3 ; j++){
			printf("%d ", mat_a[i][j]);
		}
		
		printf("\t\t");
		
		for(int j = 0; j < 3; j++){
			printf("%d ", mat_at[i][j]);
		}
		
		printf("\n");
	}
}
