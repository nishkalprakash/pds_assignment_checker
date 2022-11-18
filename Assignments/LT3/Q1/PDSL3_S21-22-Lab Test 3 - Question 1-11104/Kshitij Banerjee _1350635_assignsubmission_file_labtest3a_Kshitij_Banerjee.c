// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks


#include<stdio.h>
#include<stdlib.h>

/**
Sample Input 1

0 0 0 0 0 0 0 0 0 0
0 0 1 1 0 0 1 1 0 0
0 1 0 0 0 1 0 0 1 0
0 0 1 1 0 0 1 1 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 1 1 1 1 1 1 1 1 0
0 1 1 1 1 1 1 1 1 0
0 0 0 0 0 0 0 0 0 0

Sample Input 2

0 1 0 0 0
0 1 1 1 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
1 0 0 1 1

**/
int ** covertNegTo1(int m,int n, int **input_image);
int ** connect(int m,int n, int **input_image,int *num);

//Driver code
void main()
{
    int m,n; //m = no. of rows, n= no. of columns

    //Inputting m,n
    printf("Enter the image size: ");
    scanf("%d%d",&m,&n);

    //Declaring out image matrix
    int **input_image;

    //Allocating proper space to the image matrix
    input_image = (int ** )malloc( m *sizeof(int *));
    for(int i=0;i<m;i++){
        input_image[i]= (int * )malloc( n * sizeof(int) );
    }

    //Scanning the image matrix
    printf("Enter the image:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&input_image[i][j]);
        }
    }
    int num; //for storing no. of connections

    //Calling functions for conversion
    input_image=connect(m,n,input_image,&num);
    input_image=covertNegTo1(m,n,input_image);

    //printing the output matrix
    printf("\nOutput image with labelled connected components:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",input_image[i][j]);
        }
        printf("\n");
    }
    //printing the number of components
    printf("Number of connected components : %d\n",num);

    return;
}

//To convert 1st connect found back to 1
int ** covertNegTo1(int m,int n, int **input_image)
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(input_image[i][j]<0){
                input_image[i][j]=1;
            }
        }
    }
    return input_image;
}

int ** connect(int m,int n, int **input_image,int *num)
{
    int psbl_neigh[m*n] /* For storing all psbl neighbours(1,2....) */,no_of_connections=0,row,col; //no. of connections

    //finding the first 1 in the matrix and initializing it to some arbitrary negative value
    //as we find 1 we increase no. of connections by 1
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(input_image[i][j]==1){
                row=i;
                col=j;
                psbl_neigh[0]=-999; //the first connect will be initialized with -999
                input_image[i][j]=psbl_neigh[0];
                no_of_connections++;
                break;
            }
        }
        if(no_of_connections!=0){
            break;
        }
    }

    //if there is no. 1 in the matrix then returning the original matrix
    if(no_of_connections==0)
    {
        *num=0; //no. connections found
        return input_image;
    }

    //if there exists 1
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                //comparing each 1 after the 1st 1 we got in previously
            if(input_image[i][j]==1){
                int tempor=0;
                if(i==row && j==col){continue;}

                //if comparable then we are checking if it has a neighbor or not, if it has a neighbor then, making its value same as the neighbor
                if( (i-1)>=0 && (j-1)>=0 ){
                    for(int k=0;k<no_of_connections;k++){
                        if(input_image[i-1][j-1]==psbl_neigh[k]){
                            tempor=1;
                            input_image[i][j]=psbl_neigh[k];
                        }
                    }
                }
                if( (i-1)>=0 && (j+1)<n ){
                    for(int k=0;k<no_of_connections;k++){
                        if(input_image[i-1][j+1]==psbl_neigh[k]){
                            tempor=1;
                            input_image[i][j]=psbl_neigh[k];
                        }
                    }
                }
                if( (i-1)>=0 ){
                    for(int k=0;k<no_of_connections;k++){
                        if(input_image[i-1][j]==psbl_neigh[k]){
                            tempor=1;
                            input_image[i][j]=psbl_neigh[k];
                        }
                    }
                }
                if( (j-1)>=0 ){
                    for(int k=0;k<no_of_connections;k++){
                        if(input_image[i][j-1]==psbl_neigh[k]){
                            tempor=1;
                            input_image[i][j]=psbl_neigh[k];
                        }
                    }
                }
                if( (i+1)<m && (j-1)>=0 ){
                    for(int k=0;k<no_of_connections;k++){
                        if(input_image[i+1][j-1]==psbl_neigh[k]){
                            tempor=1;
                            input_image[i][j]=psbl_neigh[k];
                        }
                    }
                }
                if( (j+1)<n ){
                    for(int k=0;k<no_of_connections;k++){
                        if(input_image[i][j+1]==psbl_neigh[k]){
                            tempor=1;
                            input_image[i][j]=psbl_neigh[k];
                        }
                    }
                }
                if( (i+1)<m  ){
                    for(int k=0;k<no_of_connections;k++){
                        if(input_image[i+1][j]==psbl_neigh[k]){
                            tempor=1;
                            input_image[i][j]=psbl_neigh[k];
                        }
                    }
                }
                if( (i+1)<m && (j+1)<n ){
                    for(int k=0;k<no_of_connections;k++){
                        if(input_image[i+1][j+1]==psbl_neigh[k]){
                            tempor=1;
                            input_image[i][j]=psbl_neigh[k];
                        }
                    }
                }
                //if no neighbor is found then it must be a new connection
                if(tempor==0){
                    psbl_neigh[no_of_connections]=no_of_connections+1; //updating psbl neighbor matrix and no. of connections
                    input_image[i][j]=psbl_neigh[no_of_connections];
                    no_of_connections++;
                }

            }
        }
    }
    *num=no_of_connections; //making num equals to number of connections
    return input_image;
}
