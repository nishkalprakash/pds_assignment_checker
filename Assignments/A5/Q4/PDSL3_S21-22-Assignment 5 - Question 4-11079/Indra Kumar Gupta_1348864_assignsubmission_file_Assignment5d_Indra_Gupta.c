/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 5(d)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mr, mc, kr, kc, i, j,k,l;
//taking input
    printf("Enter the row of input image matrix: ");
    scanf("%d", &mr);
    printf("Enter the column of input image matrix: ");
    scanf("%d", &mc);
    printf("Enter the row of kernel matrix: ");
    scanf("%d", &kr);
    printf("Enter the column of kernel matrix: ");
    scanf("%d", &kc);
//dynamic allocation
    int **img = (int**) malloc(mr*sizeof(int*));
    for(i=0; i<mr; i++)
    {
        img[i] = (int*)malloc(mc*sizeof(int));
    }

    int **krn = (int**) malloc(kr*sizeof(int*));
    for(i=0; i<kr; i++)
    {
        krn[i] = (int*)malloc(kc*sizeof(int));
    }
//taking input for image matrix
    printf("Enter elements of image matrix\n");
    for(i=0; i<mr; i++)
    {
        for(j=0; j<mc; j++)
        {
            printf("Image matrix[%d][%d]: ", i, j);
            scanf("%d", &img[i][j]);
        }
    }
//taking input for kernel matrix
    printf("Enter elements of kernel matrix\n");
    for(i=0; i<kr; i++)
    {
        for(j=0; j<kc; j++)
        {
            printf("Kernel matrix[%d][%d]: ", i, j);
            scanf("%d", &krn[i][j]);
        }
    }


    int newr, newc;
//calculating row and column for output matrix
    newr=(mr-kr)+1;
    newc=(mc-kc)+1;
//dynamic allocation
    int **nom = (int**) malloc(newr*sizeof(int*));
    for(i=0; i<newr; i++)
    {
        nom[i] = (int*)malloc(newc*sizeof(int));
    }
    printf("\nOutput matrix:\n");
//calculating and printing elements of output matrix
    for(i=0; i<newr; i++)
    {
        for(j=0; j<newc; j++)
        {

            nom[i][j]=0;
            for(k=0; k<kr; k++)
            {
                for(l=0; l<kc; l++)
                {
                    nom[i][j]+=img[i+k][j+l]*krn[k][l];
                }
            }
            printf("%d\t", nom[i][j]);
        }
        printf("\n");
    }




    return 0;
}
