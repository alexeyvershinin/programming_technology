#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int arr[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % size;
    }

    for (int j = 0; j < size; j++) {
        printf("%3i", arr[j]);
    }
    printf("\n\n");
}

int main() {
    int arr1[100];
    int arr2[100];

    int len1;
    int len2;

    printf("Enter the size of the first array:");
    scanf("%i", &len1);

    printf("Enter the size of the second array:");
    scanf("%i", &len2);

    fillArray(arr1, len1);
    fillArray(arr2, len2);

    return 1;
}
