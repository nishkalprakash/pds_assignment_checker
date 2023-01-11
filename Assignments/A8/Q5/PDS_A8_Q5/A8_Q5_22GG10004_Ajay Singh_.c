#include <stdio.h>
#include <string.h>
int isPalindrome(char* str, int start, int end) {
    int i;
    for (i = 0; i < (end-start+1)/2; i++) {
        if (str[start + i] != str[end - i]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str[100];
    int i, j, n;
    printf("Enter a string: ");
    scanf("%s", str);
    n = strlen(str);
    printf("Palindrome substrings are: ");
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (isPalindrome(str, i, j)) {
                printf("%.*s, ", j-i+1, str+i);
            }
        }
    }
    return 0;
}