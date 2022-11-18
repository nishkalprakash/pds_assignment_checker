/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 5d
*/
#include<stdio.h>

void pixel(int **im,int **ke,int **ou,int m,int n,int f){
    int i,j,k,product,x,y;
    /*limit is m-f and n-f as it cannot go beyond that
    product is to temporarily store for each entry
    using x and y i multiply element by element of kernel with image and assign product to output*/
    for(i=0;i<=(m-f);i++){
        for(j=0;j<=(n-f);j++){
            product=0;
            for(x=i;x<i+f;x++){
                for(y=j;y<j+f;y++){
                    product=product+im[x][y]*ke[x-i][y-j];
                }
            }
            ou[i+(f/2)][j+(f/2)]=product;
        }
    }
    //I can print wherever I want in function or in main .here i am printing in main and commenting same part out in function
    /*for(i=(f/2);i<=(m-f+1);i++){
            printf("\n");
        for(j=(f/2);j<=(n-f+1);j++){
                printf("%d ",ou[i][j]);
        }
    }*/
}
int main(){
    int m,n,f,i,j;//m-row,n-column,f-size of kernel
    int **im,**ke,**ou;//im is image matrix, ke is kernel , ou is output
    printf("Enter the dimension of the input image matrix: ");
    scanf("%d%d",&m,&n);
    //dyanamically allocating image
    im=(int **)malloc(m*sizeof(int *));
    for(i=0;i<m;i++){
        im[i]=(int *)malloc(n*sizeof(int));
    }
    printf("Enter the input image matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&im[i][j]);
        }
    }
    printf("Enter the kernel size: ");
    scanf("%d",&f);
    //dyanamically allocating kernel
    ke=(int **)malloc(f*sizeof(int *));
    for(i=0;i<f;i++){
        ke[i]=(int *)malloc(f*sizeof(int));
    }
    printf("Enter the kernel elements:\n");
    for(i=0;i<f;i++){
        for(j=0;j<f;j++){
            scanf("%d",&ke[i][j]);
        }
    }
    //dyanamically allocating output. Outer margins are left out so size of out put is modified as below
    ou=(int **)malloc((m-f+1)*sizeof(int *));
    for(i=0;i<f;i++){
        ou[i]=(int *)malloc((n-f+1)*sizeof(int));
    }
    printf("Output image matrix is: ");
    pixel(im,ke,ou,m,n,f);
    for(i=(f/2);i<=(m-f+1);i++){
            printf("\n");
        for(j=(f/2);j<=(n-f+1);j++){
                printf("%d ",ou[i][j]);
        }
    }
 return 0;
}

