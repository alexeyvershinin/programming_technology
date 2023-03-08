#include <stdio.h>

int main() {
    int i = 1;
    int sum = 0;
    for (; i < 100; i++) {
        sum += i;
        printf("%i+", i);
    }
    sum += i;
    printf("%i=%i", i, sum);
}
