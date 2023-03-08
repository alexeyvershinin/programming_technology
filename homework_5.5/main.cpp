#include <stdio.h>

int main() {
    int array[100][100];
    int n, m;

    printf("Enter the number of rows in the array:");
    scanf("%i", &n);

    printf("Enter the number of columns in the array:");
    scanf("%i", &m);


    // заполняем массив n*m элементами с клавиатуры
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter the value of the array element:");
            scanf("%i", &array[i][j]);
        }
    }

    // выведем оригинальный массив
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%3i", array[i][j]);
        }
        printf("\n\n");
    }

    // выполним инверсию по главной диагонали
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < m; j++) {
            int buffer = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = buffer;
        }
    }

    // выведем инвертированный массив
    printf("Inverted array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%3i", array[i][j]);
        }
        printf("\n\n");
    }
}
