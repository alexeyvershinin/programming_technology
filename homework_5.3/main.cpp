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

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            array[j][i] = rand() % 10 - 2;
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%3i", array[j][i]); //генерируем случайное число в диапазоне от -2 до 7
        }
        printf("\n\n");
    }
}
