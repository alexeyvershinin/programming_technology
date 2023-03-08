#include <stdio.h>

int main() {
    int a = 0;
    while (a != 7) {
        printf("Enter number:");
        scanf("%i", &a);
        if (a > 7) {
            printf("The entered number is greater than 7\n");
        } else {
            if (a < 7) {
                printf("The entered number is less than 7\n");
            }
        }
        if (a > 10) {
            printf("The entered number is greater than 10\n");
        } else {
            if (a < 10) {
                printf("The entered number is less than 10\n");
            }
        }
        if (a % 2 == 0) {
            printf("The entered number is divisible by 2\n");
        } else {
            printf("The entered number is not divisible by 2\n");
        }
        if (a % 3 == 0) {
            printf("The entered number is divisible by 3\n");
        } else {
            printf("The entered number is not divisible by 3\n");
        }
    }
    printf("Congratulations, you guessed it!");
}
