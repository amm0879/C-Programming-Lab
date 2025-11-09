#include<stdio.h>
int main(){
	int group1[5];
	int group2[5];
	
	printf("Enter 5 responses of group 1\n");
	for (int i = 0; i < 5; i++){
		scanf("%d", &group1[i]);
	}
	
	printf("Enter 5 responses of group2\n");
	for (int j = 0; j < 5; j++){
		scanf("%d", &group2[j]);
	}
	
	int merged[10];
	
	for (int x = 0; x < 5; x++){
		merged[x] = group1[x];
		merged[x+5] = group2[x];
	}
	
	printf("\nMerged Survey Responses: \n");
	for (int a = 0; a < 10; a++){
		printf("%d\t", merged[a]);
	}
	
}
