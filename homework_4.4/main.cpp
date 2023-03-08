#include <stdio.h>

int main() {
    int array[100];
    int n;

    // просим пользователя ввести количество элементов массива
    printf("Enter the number of array elements:");
    scanf("%i", &n);

    if (n == 0) {
        printf("Sum=0 Min=0 Max=0");
    } else {
        // просим пользователя ввести элементы массива
        for (int i = 0; i < n; i++) {
            printf("Enter the value of the array element #%i:", i + 1);
            scanf("%i", &array[i]);
        }

        int min, max;
        min = max = array[0];
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
            }
            if (array[i] < min) {
                min = array[i];
            }
            sum += array[i];
        }

        float average = (float) sum / (float) n;

        printf("Sum=%i Average=%f Min=%i Max=%i", sum, average, min, max);
    }
}
