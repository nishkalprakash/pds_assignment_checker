/* Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code Blocks
Q5d
*/


#include<stdio.h>
#include<stdlib.h>

int main() {

    int pho_row, pho_col;                                  //rows and columns

    printf("enter dimensions of photo matrix (rows and columns):");
    scanf("%d %d", &pho_row,&pho_col);

    int **arr=(int**)malloc(pho_row * sizeof(int*));

                                                            //if system is unable to allocate memory, then exit
        if  (arr == NULL){
		  printf ("\nError");
		  exit(0);
        }

                                                              //allocating memory for each row of 2-d array
        for(int i=0;i < pho_row;i++){
        arr[i]=(int*)malloc(pho_col*sizeof(int));

                                                               //if system is unable to allocate memory, then exit
        if  (arr[i] == NULL){
            printf ("\nMemory cannot be allocated");
            exit(0);
        }
    }

                                                               //reading the 2-d array from the user
    printf("\nEnter the photo matrix:\n");
    for(int i=0; i < pho_row; i++)
    {
        for(int j=0; j < pho_col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nThe entered photo matrix is:\n");
    for(int i=0; i < pho_row; i++){
        for(int j=0; j < pho_col; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    int n2;                      //kernel matrix
    printf("enter dimension for kernel matrix:"); scanf("%d", &n2); printf("\n");

    if (n2 / 2 != 0) {

        int **kernel = (int**)malloc(n2 * sizeof(int*));

                                                              //allocating memory for each row of 2-d array
        for(int i=0;i < n2;i++){
        kernel[i]=(int*)malloc(n2*sizeof(int));}

                                                                    //reading the 2-d array from the user
    printf("\nEnter the kernel:\n");
    for(int i=0; i < n2; i++)
    {
        for(int j=0; j < n2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nThe entered kernel is:\n");
    for(int i=0; i < n2; i++){
        for(int j=0; j < n2; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    int i, j, k, l;
    for(i=0;  i < pho_col-n2; i++) {
        for (l=0; l< pho_row -n2; l++){
            int sum=0;
            for (j=i; j < i+n2; j++) {
                for(k=i; k< i+n2; k++) {
                    sum  += arr[k][j] * kernel[k][j];
                }
        }
        printf("%d\t", sum);
    }
    printf("\n");
    }
    }
return 0;
}
