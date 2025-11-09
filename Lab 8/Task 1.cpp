#include<stdio.h>
int main(){
	int arr[3][3];
	int arr2[3][3];
	int c;
	for(int i = 0; i < 3; i++){
		for (int j =0; j < 3; j++){
			printf("Enter element for row %d and column %d\n", i, j);
			scanf("%d", &arr[i][j]);
		}
		
	}
	for(int x = 0; x < 3; x++){
		for (int y =0; y < 3; y++){
			arr2[y][x]= arr[x][y];
		}
		
	}
	
	for(int x = 0; x < 3; x++){
		for (int y =0; y < 3; y++){
			if (arr2[x][y] == arr[x][y]){
				c++;
			}
			else{
				printf("Not Symmetric\n");
				break;
			}
		}
	}
	
	if (c==9){
		printf("Symmetric");
	}
}

