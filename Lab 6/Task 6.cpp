#include<stdio.h>
int main(){
	int grades, count1, count2, count3;
	printf("Enter your grade between 0 to 100\n");
	scanf("%d", &grades);
	while(grades > -1 || grades <= 100){
		if (grades > 70){
			count1 += 1;
		}
		else if (grades > 50 && grades <= 70){
			count2 += 1;
		}
		else if (grades <= 50){
			count3 += 1;
		}
		printf("Enter your grade between 0 to 100\n");
		scanf("%d", &grades);
	}
	printf("Grades above 70 are %d, and grades between 50 and 70 are %d, and grades below 50 are %d", count1, count2, count3);
	if (count1 == 0 && count2 == 0 && count3 == 0){
		printf("Invalid grades entered");
	}
	return 0;
}
