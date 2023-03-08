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

    // поменяем местами первый и последний столбец
    for (int i = 0; i < n; i++) {
        int buffer = array[i][0];
        array[i][0] = array[i][m-1];
        array[i][m-1] = buffer;
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
