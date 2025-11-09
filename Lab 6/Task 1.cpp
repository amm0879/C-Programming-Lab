#include <stdio.h>
int main() {
    int num;
    int evenCount = 0, oddCount = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            printf("%d is Even.\n", num);
            evenCount++;
        } else {
            printf("%d is Odd.\n", num);
            oddCount++;
        }
        printf("Do you want to continue? (y for yes / n for no): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Total Even numbers entered: %d\n", evenCount);
    printf("Total Odd numbers entered: %d\n", oddCount);

    return 0;
}

