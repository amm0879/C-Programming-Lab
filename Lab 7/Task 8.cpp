#include<stdio.h>
int main(){
	char characters[100];
	
	printf("Enter any sentence\n");
	fgets(characters, sizeof(characters), stdin);
	
	for (int i = 0; i < sizeof(characters); i++){
		switch(characters[i]){
			case 'a':
				characters[i] = 'A';
				break;
			case 'e':
				characters[i] = 'E';
				break;
			case 'i':
				characters[i] = 'I';
				break;
			case 'o':
				characters[i] = 'O';
				break;
			case 'u':
				characters[i] = 'U';
				break;
			default:
				break;
		}
	}
	
	printf("%s", characters);	
}
