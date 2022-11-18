/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include <stdio.h>
#include <stdlib.h>

//this program is implemented with prior knowledge in computer vision algorithms by the programmer

int **img, **res, dirx[8] = {1, 0, -1, 0, 1, 1, -1, -1}, diry[8] = {0, 1, 0, -1, 1, -1, 1, -1};
//img is user input,res is resultant image, dirx and diry are defined as per a computer vision algorithm..

void depth(int row, int col, int currow, int curcol, int curlabel) {//recursive algorithm to find matches

    if (currow < 0 || currow == row) return;//recursion termination

    if (curcol < 0 || curcol == col) return;//recursion termination

    if (res[currow][curcol] || !img[currow][curcol]) return;//recursion termination

    res[currow][curcol] = curlabel;

    for (int dir = 0; dir < 8; ++dir) {

        depth(row, col, currow + dirx[dir], curcol + diry[dir], curlabel);//recursive call
    }
}

int find(int row, int col) {

    int label = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {

            if (!res[i][j] && img[i][j]) {

                depth(row, col, i, j, ++label);
            }
        }
    }

    return label;
}


int main() {

    int m, n, num;

    printf("Enter image size as m n: ");
    scanf("%d%d", &m, &n);
    //img is user input,res is resultant image

    img = (int **) malloc(sizeof(int *) * m);//dynamically allocating the matrix
    res = (int **) malloc(sizeof(int *) * m);//dynamically allocating the matrix

    for (int i = 0; i < m; i ++) {

        img[i] = (int *) malloc(sizeof(int) * n);//dynamically allocating the matrix
        res[i] = (int *) malloc(sizeof(int) * n);//dynamically allocating the matrix
    }

    printf("\nEnter the image: \n");

    for (int i = 0; i < m; i++) {//obtaining the matrix as user input
        for (int j = 0; j < n; j++) {
            scanf("%d", &img[i][j]);
            if(img[i][j]!= 1 && img[i][j]!= 0){//ensuring user input is a binary image
                printf("Enter binary image only. terminating!!");
                return 0;
            }
            res[i][j] = 0;
        }
    }
    printf("\nThe input image is:\n");//printing the original matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", img[i][j]);
        }
        printf("\n");
    }

    num = find(m, n);
    printf("\n\nThe output image is: \n");

    for (int i = 0; i < m; i++) {//printing the resultant array
        for (int j = 0; j < n; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    printf("\nThe number of connected components is: %d\n", num);
    return 0;
}
