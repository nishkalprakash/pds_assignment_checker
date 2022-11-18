#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the image size: ");
    scanf("%d %d", &a, &b);
    int* img[a];
    for (int i = 0; i < a; i++)
        img[i] = (int*)malloc(b * sizeof(int));
    int res[a][b], cnt = 1;
    printf("Enter the image: ");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &img[i][j]);

        }
    }
    int neighbourSet = 0, neighbourState = 0, state;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (img[i - 1][j - 1] == 1 && i > 0 && j > 0) {
                neighbourState = res[i - 1][j - 1];
            } else if (img[i - 1][j] == 1 && i > 0) {
                neighbourState = res[i - 1][j];
            } else if (img[i - 1][j + 1] == 1 && i > 0 && j < b) {
                neighbourState = res[i - 1][j + 1];
            } else if (img[i][j - 1] == 1 && j > 0) {
                neighbourState = res[i][j - 1];
            } else if (img[i][j + 1] == 1 && j < b) {
                neighbourState = res[i][j + 1];
            } else if (img[i + 1][j - 1] == 1 && j > 0 && i < a) {
                neighbourState = res[i + 1][j - 1];
            } else if (img[i + 1][j] == 1 && i < a) {
                neighbourState = res[i + 1][j];
            } else if (img[i + 1][j + 1] == 1 && j < b && i < a) {
                neighbourState = res[i + 1][j + 1];
            }
            if (neighbourState == 0 && img[i][j] == 1) {
                res[i][j] = cnt++;
            } else if (img[i][j] == 1) {
                res[i][j] = neighbourState;
            }
            neighbourState = 0;
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
