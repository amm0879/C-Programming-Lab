#include <stdio.h>

int main() {
    int n, i, j, k, num;
    printf("Enter the line number: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++){
        	printf(" ");
		}
        for(j = 0; j <= i; j++) {
            num = 1;
            for(k = 0; k < j; k++){
            	num = num * (i - k) / (k + 1);
			}
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}

