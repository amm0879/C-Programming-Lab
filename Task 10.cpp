#include<stdio.h>
main(){
	int pin = 1010;
	int user_pin;
	printf("Enter a 4 digit pin\n");
	scanf("%d", &user_pin);
	if (user_pin == pin){
		printf("Access Granted");
	}
	else {
		printf("Wrong pin");
	}
}
