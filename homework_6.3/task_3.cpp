#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = {'H', 'e', 'l', 'l', 'o', '\0'};
    puts(str);
    
    int i;
    printf("Enter the number of the line character to delete:");
    scanf("%i", &i);

    if ((i > 0) && (i <= strlen(str))) {
        for (int j = i - 1; j < strlen(str); j++) {
            str[j] = str[j + 1];
        }
        puts(str);
    } else {
        printf("Enter a value from 1 to 5\n");
    }
}
