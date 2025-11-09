#include<stdio.h>
int main(){
	int maxnum;
	printf("Enter number till where you want prime numbers\n");
	scanf("%d", &maxnum);
	printf("Prime numbers up to %d are:\n", maxnum);
	for(int i = 2;i < maxnum + 1; i++ ){
		int j = 2;
		int isPrime = 1;
		while(j < i){
			if ((i%j) == 0){
				isPrime = 0;
				break;
			}
			j ++;
		}
		if (isPrime){
			printf("%d is a prime number\n", i);
		}
		
	}
}
