/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Test No: 3
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int r,c,k,i,j;
    printf("Enter the image size: ");
    scanf("%d%d",&r,&c);
    printf("Enter the image:\n");
    int *a = (int *)malloc(r*c*sizeof(int));
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",a+i*r+j);
        }
    }
    printf("Output:\n");
    k=1;
    int *b = (int *)malloc(r*c*sizeof(int));
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a+i*r+j==0)                //Change adjacent cells to 0
                *(b+i*r+j)=0;
            else{
                if((*(a+i*r+(j+1))==1||(*(a+i*r+j-1)==1)||(*(a+(i+1)*r+j+1)==1)||(*(a+(i-1)*r+j+1)==1)||(*(a+(i-1)*r+j-1)==1)||(*(a+(i+1)*r+j-1)==1)||*(a+(i-1)*r+j)==1)||(*(a+(i+1)*r+j)==1)){
                    *(b+i*r+j)=k;
                }
                else{
                    *(b+i*+j)=k;
                    k++;
                }
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",b+i*r+j);
        }
        printf("\n");
    }
    return 0;
}
