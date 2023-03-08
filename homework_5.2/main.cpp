#include <stdio.h>

int main() {
    int array[100][100];
    int n, m;

    printf("Enter the number of rows in the array:");
    scanf("%i", &n);

    printf("Enter the number of columns in the array:");
    scanf("%i", &m);

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            scanf("%i", &array[j][i]);
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%3i", array[j][i]);
        }
        printf("\n\n");
    }
}
