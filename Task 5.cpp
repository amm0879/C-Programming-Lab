#include<stdio.h>
main(){
	int state;
	printf("Enter 1 for Red, 2 for Yellow, 3 for Green\n");
	scanf("%d", &state);
	switch(state){
		case 1:
			printf("Stop\n");
			break;
		case 2:
			printf("Ready\n");
			break;
		case 3:
			printf("Go\n");
			break;
		default:
			printf("Invalid State\n");
	}
	return 0;
}
