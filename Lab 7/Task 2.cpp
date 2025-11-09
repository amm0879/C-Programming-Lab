#include<stdio.h>
int main(){
	int esum, osum, ecount, ocount;
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	for(int i = 0; i <10; i++){
		if ((arr[i]%2) == 0){
			esum = esum + arr[i];
			ecount += 1;
		}
		else{
			osum = osum + arr[i];
			ocount += 1;
		}
	}
	if (ecount == 0){
		printf("No even numbers\n");
	}
	else{
		printf("There are %d even numbers\n", ecount);
	}
	if (ocount == 0){
		printf("No odd numbers\n");
	}
	else{
		printf("There are %d odd numbers\n", ocount);
	}
	printf("Sum of even numbers is %d\n", esum);
	printf("Sum of odd numbers is %d\n", osum);
}

