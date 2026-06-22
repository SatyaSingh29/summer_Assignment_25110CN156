#include <stdio.h>

int main() {
    char str[200];
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            i++;
        }

        if (str[i] != '\0') {
            count++;

            while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n' && str[i] != '\t') {
                i++;
            }
        }
    }

    printf("Word count = %d\n", count);

    return 0;
}