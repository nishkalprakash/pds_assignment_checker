#include <stdio.h>


int reverse(int num) {
    int rev_num = 0;
    while (num != 0) {
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }
    return rev_num;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

   
    if (x < -999 || x > 999 || y < -999 || y > 999) {
        printf("Wrong Input\n");
        return 0;
    }

   
    if (x == reverse(y) && y == reverse(x)) {
        printf("Perfect Pair\n");
    } else {
        printf("Not a Perfect Pair\n");
    }
    return 0;
}
