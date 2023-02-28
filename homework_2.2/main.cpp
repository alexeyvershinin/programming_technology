#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the value A:");
    scanf("%i", &a);
    printf("Enter the value B:");
    scanf("%i", &b);
    if (a > b) {
        printf("A is more than B");
    } else {
        if (a == b) {
            printf("A equals B");
        } else {
            printf("B is more than A");
        }
    }
}
