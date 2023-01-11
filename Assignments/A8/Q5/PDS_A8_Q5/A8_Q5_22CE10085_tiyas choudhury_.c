#include <stdio.h>
#include <string.h>

void palindrome_substrings(const char *word) {
    int n = strlen(word);
    for (int i = 0; i < n; i++) {
        // Odd length palindromes
        int left = i, right = i;
        while (left >= 0 && right < n && word[left] == word[right]) {
            printf("%.*s\n", right - left + 1, word + left);
            left--;
            right++;
        }
        // Even length palindromes
        left = i, right = i + 1;
        while (left >= 0 && right < n && word[left] == word[right]) {
            printf("%.*s\n", right - left + 1, word + left);
            left--;
            right++;
        }
    }
}

int main() {
    char word[] = "aabbbaa";
    palindrome_substrings(word);
    return 0;
}