#include<stdio.h>
int main(){
	int transaction, wcount, dcount;
	int balance = 5000;
	printf("Enter positive amount to deposit and negative amount for withdrawal\n");
	scanf("%d", &transaction);
	while (transaction != 0){
		balance = balance + transaction;
		if (transaction > 0){
			dcount += 1;
		}
		else if (transaction < 0){
			wcount += 1;
		}
		printf("Enter positive amount to deposit and negative amount for withdrawal\n");
		scanf("%d", &transaction);
	}
	printf("Number of deposits are %d, and number of withdrawals are %d", dcount, wcount);
}
