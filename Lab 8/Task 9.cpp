#include <stdio.h>

int main() {
    int mat[3][3], transpose[3][3], rotated[3][3], i, j, same = 1;

    for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3 ; j++){
			printf("Enter element for row %d and column %d: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
        

    printf("Original Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++){
        	printf("%d ", mat[i][j]);
		}
        printf("\n");
    }

    for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
    		transpose[j][i] = mat[i][j];
		}
	}

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            rotated[i][j] = transpose[i][2-j];

    printf("Rotated Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", rotated[i][j]);
        printf("\n");
    }

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            if(rotated[i][j] != mat[i][j])
                same = 0;

    if(same)
        printf("The rotated matrix is the same as the original.\n");
    else
        printf("The rotated matrix is different from the original.\n");

    return 0;
}

