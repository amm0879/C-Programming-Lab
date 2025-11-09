#include<stdio.h>
int main(){
	int previous_term = 0, current_term = 1;
	int next_term, last_term;
	printf("Enter the last term of fibonacci series\n");
	scanf("%d", &last_term);
	printf("Here is your fibonacci series\n");
	while(current_term < last_term){
		next_term = current_term + previous_term;
		previous_term = current_term;
		current_term = next_term;
		printf("%d\n", next_term);
	}
	
}
