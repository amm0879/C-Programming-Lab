#include<stdio.h>
int main(){
	int len;
	printf("Enter the size of matrix:  ");
	scanf("%d", &len);
	
	int arr[len][len];
	int mds, sds, total_sum;
	for(int i = 0; i < len; i++){
		for (int j =0; j < len; j++){
			printf("Enter element for row %d and column %d\n", i, j);
			scanf("%d", &arr[i][j]);
		}
    }
	
	for(int x = 0; x < len; x++){
		for (int y = 0; y < len; y++){
			if ( x == y){
				mds += arr[x][y];
			}
			else if (x + y == len - 1){
				sds += arr[x][y];
			}
		}	
	}
	
	total_sum = mds + sds;
	
	if ((len % 2) != 0){
		total_sum -= arr[len/2][len/2];
	}
	printf("%d\n%d\n%d", mds, sds, total_sum);
}

