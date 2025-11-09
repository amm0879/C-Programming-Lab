#include<stdio.h>
int main(){
	int x, y, z;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d", &x, &y, &z);
	x > y?x > z?printf("X is greater"):printf("Z is greater"):y > z?printf("Y is greater"):printf("Z is greater");
}
