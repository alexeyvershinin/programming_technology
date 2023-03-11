int main() {
    char str[100];
    gets(str);

    for (int j = 0; j < strlen(str); j++) {
        str[j] = str[j + 1];
    }

    puts(str);
}
