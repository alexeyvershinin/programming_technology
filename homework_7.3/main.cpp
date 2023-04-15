#include <stdio.h>

// Функция проверяет является ли натуральное число квадратом какого-либо другого целого числа
bool isSquare(int number) {
    for (int i = 1; i <= number; i++) {
        if (i * i == number) {
            return true;
        }
    }
    return false;
}

// Перегруженная функция isSquare, возвращающая искомое значение через дополнительный аргумент - ссылку
void isSquare(int number, bool& result) {
    result = false;
    for (int i = 1; i <= number; i++) {
        if (i * i == number) {
            result = true;
            return;
        }
    }
}

// Функция проверяет является ли введенное число натуральным
bool isNatural(int number) {
    if (number > 0 && number == (int) number) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a, b, c;
    int numberArray[3];

    printf("Enter the first natural number: ");
    scanf("%d", &a);
    numberArray[0] = a;

    printf("Enter the second natural number: ");
    scanf("%d", &b);
    numberArray[1] = b;

    printf("Enter the third natural number: ");
    scanf("%d", &c);
    numberArray[2] = c;

    // Проверка являются ли все введенные числа натуральными
    int countNatural = 0;
    for (int j = 0; j < 3; j++) {
        if (isNatural(numberArray[j])) {
            countNatural++;
        }
    }

    if (countNatural == 3) {
        int countSquare = 0;
        for (int i = 0; i < 3; i++) {
            if (isSquare(numberArray[i])) {
                countSquare++;
            }
        }
        printf("The number of entered numbers that are squares of any other natural numbers is equal to: %d",
               countSquare);
    } else {
        printf("Error, you have to enter only natural numbers");
    }

    return 1;
}
