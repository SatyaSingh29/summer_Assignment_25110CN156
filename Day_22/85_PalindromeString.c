#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    
    if (str[j] == '\n') {
        str[j] = '\0';
        j--;
    }

    while (i < j) {
        if (str[i] != str[j]) {
            return 0; 
        }
        i++;
        j--;
    }

    return 1; 
}

int main() {
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    if (isPalindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}