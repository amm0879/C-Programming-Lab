#include<stdio.h>
int main(){
	int grades[] = {60, 64, 87, 93, 54, 72, 81, 76, 91, 42};
	int size = sizeof(grades)/sizeof(grades[0]);
	int temp, sum, max_grade, min_grade;
	
	for (int j = 0; j < size-1; j++){
		for (int i = 0; i < size -1-j; i++){
			if (grades[i] > grades[i+1]){
				temp = grades[i];
				grades[i] = grades[i+1];
				grades[i+1] = temp;
			}
		}
	}
	
	for (int i = 0; i < 10; i++){
		printf("%d\t", grades[i]);
	}
	
	for (int i = 0; i < 10; i++){
		sum += grades[i];
	}
	printf("\nAverage grade of class is %d\n", sum/size);
	printf("Maximum grade is %d which is on position %d\n", grades[size-1], size-1);
	printf("Minimun grade is %d which is on position %d\n", grades[0], 0);
	
	
}
