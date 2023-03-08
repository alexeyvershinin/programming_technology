#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of array elements:");
    scanf("%i", &n);

    int array[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the value of the array element #%i:", i+1);
        scanf("%i", &array[i]);
    }
    for (int i=0; i<n; i++) {
        printf("%2i", array[i]);
    }
}
