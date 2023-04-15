#include <stdio.h>
#include <string.h>

// функция заменяет первый и последний элемент в строке пользователя
void getString() {
    char str[100], ch;

    printf("Enter the line:\n");
    fgets(str, 100, stdin);

    printf("Enter the character you want to replace the first and last element of the string with: ");
    scanf(" %c", &ch);

    // проверяем, что пользователь ввел только один символ
    if (getchar() != '\n') {
        printf("Error: Please enter only one character for replacement.\n");
        return;
    }

    // удаляем символ новой строки, если есть
    str[strcspn(str, "\n")] = '\0';

    // определим длину строки
    int lenStr = strlen(str);

    // заменим первый символ
    if (lenStr > 0) {
        str[0] = ch;
    }

    // если строка состоит больше чем из одного символа, заменяем последний
    if (lenStr > 1) {
        str[lenStr - 1] = ch;
    }

    printf("Modified string:\n");
    puts(str);
}

// функция удаляет пробелы в начале и конце строки
void removeSpace() {
    char str[100];
    int i = 0, j = 0;

    printf("Enter the line:\n");
    fgets(str, 100, stdin);

    // определим количество пробелов в начале строки
    while (str[i] == ' ') {
        i++;
    }

    // перемещаем остальную часть строки в начало
    while (str[i] != '\0') {
        str[j] = str[i];
        j++;
        i++;
    }

    // устанавливаем конец строки на новое место
    str[j] = '\0';

    // удаляем пробелы в конце строки
    i = strlen(str) - 1;
    while (i >= 0 && str[i] == ' ') {
        str[i] = '\0';
        i--;
    }

    puts(str);
}

int main() {

    getString();
    removeSpace();

    return 1;
}
