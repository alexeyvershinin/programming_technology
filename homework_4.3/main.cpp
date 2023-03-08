#include <stdio.h>

int main() {
    int array[100];
    int n;

    printf("Enter the number of array elements:");
    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the value of the array element #%i:", i + 1);
        scanf("%i", &array[i]);
    }

    printf("\n");

    bool flag = true;

    while (flag) {
        flag = false;
        for (int i = 0; i < n - 1; i++) {
            if (array[i] > array[i + 1]) {
                int buffer = array[i];
                array[i] = array[i + 1];
                array[i + 1] = buffer;
                flag = true;
            }
        }
    }

    printf("Sorted array:");
    for (int i = 0; i < n; i++) {
        printf("%4i", array[i]);
    }
}
