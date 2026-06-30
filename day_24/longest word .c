// Write a program to Find longest word.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0, max = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if (len > max) {
                max = len;
                strncpy(longest, &str[i - len], len);
                longest[len] = '\0';
            }
            len = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}
