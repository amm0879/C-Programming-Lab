#include<stdio.h>
int main(){
	int num;
	printf("Enter a number to print it's multiplication table\n");
	scanf("%d", &num);
	for (int i =1; i < 11; i++){
		printf("%d x %d = %d\n", num, i, num*i);
	}
}
