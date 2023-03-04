#include <stdio.h>

int main() {
    int i = 5;
    int sum = 0;
    while (i < 15) {
        sum += i;
        printf("%i+", i);
        i++;
    }
    sum += i;

    printf("%i=%i", i, sum);
}
