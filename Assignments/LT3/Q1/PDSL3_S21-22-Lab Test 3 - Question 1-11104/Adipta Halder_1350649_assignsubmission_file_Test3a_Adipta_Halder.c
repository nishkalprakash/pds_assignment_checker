/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Test number: 3a
*/
#include<stdio.h>
//checking if element is valid
int within(int **im,int r,int c){
    if(i>=0&&j>=0&&i<r&&j<c){
    return 1;
}
    else{
    return 0;
}
}
void label(int **im,int **ou,int r,int c){

}
int main(){
    int r,c,i,j,count=0;
    int **im,**ou;
    printf("Enter the image size: ");
    scanf("%d%d",&r,&c);
    im=(int **)malloc(r*sizeof(int *));
    for(i=0;i<r;i++){
        im[i]=(int *)malloc(c*sizeof(int));
    }
    ou=(int **)malloc(r*sizeof(int *));
    for(i=0;i<r;i++){
        ou[i]=(int *)malloc(c*sizeof(int));
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&im[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            ou[i][j]=0;
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(im[i][j]==0){
                ou[i][j]=0;
            }
            else{

            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",ou[i][j]);
        }
    }
 return 0;
}
