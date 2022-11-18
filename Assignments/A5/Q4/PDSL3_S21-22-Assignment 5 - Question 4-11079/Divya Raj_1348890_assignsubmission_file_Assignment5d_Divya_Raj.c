/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/
#include<stdio.h>

int main(){
    int irow, icol, kern;
    printf("Enter the dimension of the input image matrix: ");
    scanf("%d %d", &irow, &icol);
    int image[irow][icol];
    printf("Enter the input image matrix:\n");
    for(int i=0; i<irow; i++){
        for(int j=0; j<icol; j++){
            scanf("%d", &image[i][j]);
        }
    }

    printf("Enter the kernel size: ");
    scanf("%d", &kern);
    int kernel[kern][kern];

    printf("Enter the kernel elements:\n");
    for(int i=0; i<kern; i++){
        for(int j=0; j<kern; j++){
            scanf("%d", &kernel[i][j]);
        }
    }
    int A[irow-kern+1][icol-kern+1], term ,sum=0;
    for(int x=0; x<(irow-kern+1); x++){
        for(int y=0; y<(icol-kern+1); y++){
            for(int i=0; i<kern; kern++){
                for(int j=0; j<kern; kern++){
                    term = image[i+x][j+y]*kernel[i][j];
                    sum += term;
                }
            }
            A[x][y] = sum;
            sum=0;
        }
    }
    printf("Output image matrix is:\n");
    for(int i=0; i<(irow-kern+1); i++){
        for(int j=0; j<(icol-kern+1); j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}