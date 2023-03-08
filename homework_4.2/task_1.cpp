#include <stdio.h>

int main() {
    int mas[7];

    for (int i = 0; i < 7; i++) {
        printf("Enter the value of the array element:");
        scanf("%i", &mas[i]);
    }
    for (int i=0; i<7; i++) {
        printf("%2i", mas[i]);
    }
}
