#include<stdio.h>
#include<string.h>
int main(){
	char arr[100];
	char string, character;
	int count;
	printf("Enter a string\n");
//	scanf("%s", &string);
	fgets(arr, sizeof(arr), stdin);
	printf("Enter the character to search for\n");
	scanf(" %c", &character);
	for (int i = 0; i < sizeof(arr); i++ ){
		if (character == arr[i]){
			count += 1;
		}
	}
	if (count == 0){
		printf("No character found you are searching for\n");
	}
	printf("%d", count);
}

