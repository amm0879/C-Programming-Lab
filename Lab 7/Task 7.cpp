#include<stdio.h>
int main(){
	int products[] = {101, 111, 222, 999, 666, 111, 555, 888, 111, 777};
	int to_remove, count = 0;
	
	printf("Enter a 3 digit id of product to remove from inventory\n");
	scanf("%d", &to_remove);
	
	for (int i = 0; i < 10; i++){
		if (products[i] == to_remove){
			count += 1;
			for (int j = i; j < 9; j++) {
                products[j] = products[j + 1];
        }
		}
	}
	
	printf("Number of occurences removed %d\n", count);
	for (int i = 0; i < 10 - count; i++){
		printf("%d\t", products[i]);
	}
}
