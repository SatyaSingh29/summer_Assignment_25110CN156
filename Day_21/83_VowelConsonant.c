#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vow = 0, cons = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for (int i = 0; i < len; i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        if (str[i] >= 'a' && str[i] <= 'z'){
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u'){
                vow++;
            } else {
                cons++;
            }
        }
    }

    printf("Vowels: %d\n", vow);
    printf("Consonants: %d\n", cons);

    return 0;
}