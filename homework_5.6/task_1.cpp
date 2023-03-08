#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[100][100];
    int n, m;

    printf("Enter the number of rows in the array:");
    scanf("%i", &n);

    printf("Enter the number of columns in the array:");
    scanf("%i", &m);

    srand(time(NULL));

    // заполняем массив n*m элементов псевдослучайными числами
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = rand() % 10;
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

    bool flag = true;

    // произведем сортировку пузырьком
    while (flag) {
        flag = false;
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m - 1; i++) {
                if (array[j][i] > array[j][i + 1]) {
                    int buffer = array[j][i];
                    array[j][i] = array[j][i + 1];
                    array[j][i + 1] = buffer;
                    flag = true;
                }
            }
        }
    }

    // выведем отсортированный массив
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%3i", array[i][j]);
        }
        printf("\n\n");
    }
}
