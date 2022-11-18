/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int r,c,n,i,j,l,x,y,sum,m;
    printf("Enter the dimension of the input image matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter the input image matrix:\n");
    int *a = (int *)malloc(r*c*sizeof(int));
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",a+i*r+j);
        }
    }
    printf("Enter the kernel size: ");
    scanf("%d",&n);
    int *k = (int *)malloc(n*n*sizeof(int));
    printf("Enter the kernel elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",k+i*n+j);
        }
    }
    x=r-n+1;
    y=c-n+1;
    int *im = (int *)malloc(x*y*sizeof(int));
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            sum=0;
            for(l=0;l<n;l++){             //Sliding kernel
                for(m=0;m<n;m++)
                    sum+=*(k+n*i+m);      //Sum calculated and later stored in im
            }
            *(im+x*i+j)=sum;
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++)
            printf("%d ",*(im+x*i+y));      //im printed
        printf("\n");
    }
    return 0;
}
