#include <stdio.h>
int main() {
    char letter;
    int vCount = 0, cCount = 0;
    char choice;

    do {
        printf("Enter a letter: ");
        scanf(" %c", &letter);
        if (letter == 'a' ||letter == 'A' || letter =='e' || letter =='E' ||letter == 'i' ||letter == 'I'  ||letter == 'o' ||letter == 'O' ||letter == 'u' ||letter == 'U'){
        	vCount ++;
		}
		else{
			cCount ++;
		}
        printf("Do you want to continue? (y for yes / n for no): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Total vowels entered: %d\n", vCount);
    printf("Total consonants entered: %d\n", cCount);

    return 0;
}
