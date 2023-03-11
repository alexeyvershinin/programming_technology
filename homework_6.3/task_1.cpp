#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    gets(str);
    printf("The second character of the string: %c", str[1]);
}
