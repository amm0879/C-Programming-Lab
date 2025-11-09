#include <stdio.h>
	int main() {
	    int i, j, n=0;
	    printf("Enter number of rows\n");
	    scanf("%d", &n);
	    for (i = 1; i <= n; i++) { 
	        for (j = i; j <n; j++) { 
	            printf("  ");
	        }
	        for(int k =1; k<=i; k++){
	        	printf("%d ", k);
			}
	        printf("\n");
	    }
	    return 0;
	}

