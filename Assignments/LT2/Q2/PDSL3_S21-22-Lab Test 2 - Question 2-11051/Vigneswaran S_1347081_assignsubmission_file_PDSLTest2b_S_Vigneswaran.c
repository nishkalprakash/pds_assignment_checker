/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include <stdio.h>

int maxAlphaValue(int S[]) {// function to find max alpha

    int max = 0, count = 0;

    for (int i = 1; S[i] != '\0'/*end of num array*/; i++) {
        count = 0;
        for (int j = 0; j < i; j++) {
            if (S[j] % S[i] == 0) {//divisibility check
                count++;// increase count by 1
            }
        }

        if (count > max) {//this may be the max alpha value at any time
            max = count;// the current max value is updated
        }
    }

    return max;
}

int main() {

    int S[100], i;

    printf("Enter the array numbers, separated by spaces: ");
    for (i = 0; i < 100; i++) {
        char temp;
        scanf("%d%c", &S[i], &temp);
        if (temp == '\n') {
            break;
        }
    }

    S[i + 1] = '\0';//giving an end to array

    printf("Maximum Alpha Value: %d", maxAlphaValue(S));

    return 0;
}
