#include <stdio.h>

void abc() {
    char str[1024];
    int numChars = 0, numSpecialChars = 0, numWords = 0, numVowels = 0, numConsonants = 0, numSentences = 0;
    int i = 0;
    int inWord = 0, inSentence = 0;

    printf("Enter a message:\n");
    scanf("%[^\n]%*c", str);

    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= '!' && str[i] <= '/')) {
            numSpecialChars++;
        }

        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            numChars++;

            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                numVowels++;
            } else {
                numConsonants++;
            }

            if (!inWord) {
                numWords++;
                inWord = 1;
            }
        } else if (str[i] == ' ' || str[i] == '\t') {
            inWord = 0;
        } else if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            numSentences++;
            inWord = 0;
            inSentence = 1;
        } else if (str[i] == '\n' && inSentence) {
            numSentences--;
            inSentence = 0;
        }

        i++;
    }

    printf("\nAnalysis of the message:\n");
    printf("Number of numeric characters: %d\n", numChars - numVowels - numConsonants);
    printf("Number of special printable characters: %d\n", numSpecialChars);
    printf("Number of words: %d\n", numWords);
    printf("Number of vowels: %d\n", numVowels);
    printf("Number of consonants: %d\n", numConsonants);
    printf("Number of sentences: %d\n", numSentences);
}

int main() {
    abc();
    return 0;
}
