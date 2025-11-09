#include<stdio.h>
int square(int a){
	printf("%d", a*a);
}
int main(){
	int x;
	printf("Enter a number\n");
	scanf("%d", &x);
	square(x);

}

