#include <stdio.h>

int main() {
    int pin1, pin2;
    printf("Enter the pin1:");
    scanf("%i", &pin1);
    printf("Enter the pin2:");
    scanf("%i", &pin2);

    if (((pin1 == 1111) && (pin2 == 0000)) || ((pin1 == 2222) && (pin2 == 9999)) ||
        ((pin1 == 3333) && (pin2 == 8888))) {
        printf("You are logged in");
    } else {
        printf("You entered an incorrect value, which led to an error!");
    }
}
