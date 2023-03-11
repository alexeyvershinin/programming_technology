#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    gets(str);
    int q = strlen(str);

    printf("The last element of the string: %c\n", str[q-1]);

    int buffer = str[0];
    str[0] = str[q-1];
    str[q-1] = buffer;

    puts(str);
}
