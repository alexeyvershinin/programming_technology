#include <stdio.h>

int main() {
    int n;
    int min, max, sum, input;
    float average;

    // просим пользователя ввести количество элементов
    printf("Enter the number of elements:");
    scanf("%i", &n);

    if (n == 0) {
        printf("Sum=0 Min=0 Max=0");
    } else {
        // инициализируем переменные
        min = 2147483647; // максимальное значение для int
        max = -2147483648; // минимальное значение для int
        sum = 0;

        // вводим элементы и одновременно находим минимум, максимум и сумму
        for (int i = 0; i < n; i++) {
            printf("Enter the value of element #%i:", i + 1);
            scanf("%i", &input);

            if (input < min) {
                min = input;
            }
            if (input > max) {
                max = input;
            }
            sum += input;
        }

        // находим среднее арифметическое
        average = (float) sum / (float) n;

        // выводим результаты
        printf("Sum=%i Average=%f Min=%i Max=%i", sum, average, min, max);
    }
}
