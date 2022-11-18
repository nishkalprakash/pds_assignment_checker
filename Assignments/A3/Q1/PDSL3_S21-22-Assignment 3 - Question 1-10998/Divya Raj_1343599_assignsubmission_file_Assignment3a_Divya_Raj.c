#include <stdio.h>
#include <math.h>

int main()
{
    char uname[100], passwd[100];
    int i, lc, uc, count, temp;
    i = lc = uc = count = 0;
    int ca[127] = {0};
    printf("username: ");
    scanf("%s", uname);
    printf("pasword: ");
    scanf("%s", passwd);
    while (passwd[i] != '\0') {
        temp = passwd[i];
        if (temp >= 97 && temp <= 122) {
            lc++;
        }
        else if (temp >= 65 && temp <= 90) {
            uc++;
        }
        ca[temp]++;
        count++;
        i++;
    }
    if (count < 8 || count > 15) {
        printf("Not acceptable\n");
    }
    if (lc < 1 || uc < 1) {
        printf("Not acceptable\n");
    }
    for (int i = 0; i < 127; i++) {
        if (ca[i] > 5) {
            printf("Not acceptable\n");
        }
    }
    printf("Acceptable\n");
    return 0;
}