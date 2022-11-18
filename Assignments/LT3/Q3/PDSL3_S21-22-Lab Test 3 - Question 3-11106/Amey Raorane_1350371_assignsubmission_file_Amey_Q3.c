# include <stdio.h>

int isValidNum(int num, int c, int d);

int main(void) {
    int c, d;
    printf("Enter two digits: ");
    scanf("%d%d", &c, &d);

    printf("Numbers:\n");
    for (int i = 10000; i < 100000; i++) { // Get all the 5-digit numbers and check them
        if (i%(c+d) == 0) continue;
        // Print the number if it is valid
        if (isValidNum(i, c, d)) printf("%d ", i);
    }
    printf("\n");
}

int isValidNum(int num, int c, int d) {
    // Function to check whether num contains only c and d
    while (num) {
        if (num%10 != c && num%10 != d) return 0;
        num /= 10;
    }
    return 1;
}