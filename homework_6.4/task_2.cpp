#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    gets(str);
    puts(str);

    int l = strlen(str);
    char buffer[l+1];

    for (int i = l-1; i >= 0; i--) {
        buffer[l-i-1]=str[i];
    }
    buffer[l] = '\0';

    puts(buffer);
}
