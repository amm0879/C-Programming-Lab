#include<stdio.h>
int main(){
	int x, y, z;
	printf("Enter three numbers to check the greatest\n");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y){
		if (x > z){
			printf("x is greatest");
		}
		else{
			printf("z is greatest");
		}
	}
	else{
		if (y > z){
			printf("y is greatest");
		}
		else{
			printf("z is greatest");
		}
	}
}

