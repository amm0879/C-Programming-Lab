#include <stdio.h>
int main() {
	int mat_a [3][3];
	int o_count = 0, e_count = 0, p_count = 0, n_count = 0, zeros = 0;
	int element;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3 ; j++){
			printf("Enter element for row %d and column %d: ", i, j);
			scanf("%d", &mat_a[i][j]);
		}
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3 ; j++){
			element = mat_a [i][j];
			if (element > 0){
				p_count += 1;
			}
			else if( element < 0){
				n_count += 1;
			}
			else if (element == 0){
				zeros += 1;
			}
			if ((element % 2) == 0){
				e_count += 1;
			}
			else if ((element %2) != 0){
				o_count += 1;
			}
		}
	}	
	printf("Number of positive numbers: %d\nNumber of negative numbers: %d\nNumber of zeros: %d\nNumber of odd numbers: %d\nNumber of even numbers: %d", p_count, n_count, zeros, o_count, e_count);
}
