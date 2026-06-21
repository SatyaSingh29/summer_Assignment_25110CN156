#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for (int i = 0; i < len; i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    
    }
    printf("String in upper case: %s",str);
    return 0;
}