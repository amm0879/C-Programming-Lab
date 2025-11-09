#include<stdio.h>
int main(){
	int course;
	char grade;
	printf("Enter course name, 1 for Maths, 2 for English, 3 for Science\n");
	scanf("%d", &course);
	switch (course){
		case 1:
			printf("Enter your grade in Maths\n");
			scanf(" %c", &grade);
			switch (grade){
				case 'A':
					printf("Your grade in Maths is A");
					break;
				case 'B':
					printf("Your grade in Maths is B");
					break;
				case 'C':
					printf("Your grade in Maths is C");
					break;
				case 'D':
					printf("Your grade in Maths is D");
					break;
				case 'F':
					printf("You have failed in maths your grade is F");
					break;
				default:
					printf("Incorrect Grade");
					break;
			}
			break;
		case 2:
			printf("Enter your grade in English\n");
			scanf(" %c", &grade);
			switch (grade){
				case 'A':
					printf("Your grade in English is A");
					break;
				case 'B':
					printf("Your grade in English is B");
					break;
				case 'C':
					printf("Your grade in English is C");
					break;
				case 'D':
					printf("Your grade in English is D");
					break;
				case 'F':
					printf("You have failed in English your grade is F");
					break;
				default:
					printf("Incorrect Grade");
					break;
			}
			break;
		case 3:
			printf("Enter your grade in Science\n");
			scanf(" %c", &grade);
			switch (grade){
				case 'A':
					printf("Your grade in Science is A");
					break;
				case 'B':
					printf("Your grade in Science is B");
					break;
				case 'C':
					printf("Your grade in Science is C");
					break;
				case 'D':
					printf("Your grade in Science is D");
					break;
				case 'F':
					printf("You have failed in Science your grade is F");
					break;
				default:
					printf("Incorrect Grade");
					break;
			}
			break;
		default:
			printf("Invalid Choice");
			break;
	}
	return 0;
}
