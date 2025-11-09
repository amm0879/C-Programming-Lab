#include <stdio.h>

int main() {
    int mat[3][3], i, j;
    int upper = 1, lower = 1;
    
    for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3 ; j++){
			printf("Enter element for row %d and column %d: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i > j && mat[i][j] != 0)
                upper = 0;
            if(i < j && mat[i][j] != 0)
                lower = 0;
        }
    }
    
    if(upper && !lower)
        printf("Upper triangular matrix\n");
    else if(lower && !upper)
        printf("Lower triangular matrix\n");
    else if(upper && lower)
        printf("Diagonal matrix\n");
    else
        printf("Neither\n");
    return 0;
}

