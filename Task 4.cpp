#include<stdio.h>
main(){
	int score;
	printf("Enter your score between 0 and 100\n");
	scanf("%d", &score);
	
	if (score >= 90 and score <= 100){
		printf("A");
	}
	else if (score >= 80 and score < 90){
		printf("B");
	}
	else if (score >= 70 and score < 80){
		printf("C");
	}
	else if (score >= 60 and score < 70){
		printf("D");
	}
	else if (score >= 0 and score < 60){
		printf("F");
	}
	else{
		printf("Invalid score");
	}
}
