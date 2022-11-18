/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 5c
*/
#include<stdio.h>
//find if an element is unique in a row
int uniquer(int **a,int x,int c,int key){
    int k,count=0;
    for(k=0;k<c;k++){
        if(a[x][k]==key){
            count++;
        }
    }
    if(count>1){
        return 0;
    }
    else{
        return 1;
    }
}
//find if an element is unique in a column
int uniquec(int **a,int r,int x,int key){
    int k,count=0;
    for(k=0;k<r;k++){
        if(a[k][x]==key){
            count++;
        }
    }
    if(count>1){
        return 0;
    }
    else{
        return 1;
    }
}
//find maximum in a row
int maxr(int **a,int x,int c){
    int k,max;
    max=a[x][0];
    for(k=0;k<c;k++){
        if(a[x][k]>max){
            max=a[x][k];
        }
    }
    return max;
}
//find minimum in a row
int minr(int **a,int x,int c){
    int k,min;
    min=a[x][0];
    for(k=0;k<c;k++){
        if(a[x][k]<min){
            min=a[x][k];
        }
    }
    return min;
}
//find maximum in a column
int maxc(int **a,int r,int x){
    int k,max;
    max=a[0][x];
    for(k=0;k<r;k++){
        if(a[k][x]>max){
            max=a[k][x];
        }
    }
    return max;
}
//find minimum in a column
int minc(int **a,int r,int x){
    int k,min;
    min=a[0][x];
    for(k=0;k<r;k++){
        if(a[k][x]<min){
            min=a[k][x];
        }
    }
    return min;
}
//checking saddle points and returning number of them
int saddle(int **a,int r,int c,int store[][3]){
    int i,j,k=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if((uniquer(a,i,c,a[i][j])==1)&&(uniquec(a,r,j,a[i][j])==1)){//checking if unique
                if((a[i][j]==minc(a,r,j)&&a[i][j]==maxr(a,i,c))||(a[i][j]==maxc(a,r,j)&&a[i][j]==minr(a,i,c))){//final condition
                    store[k][0]=a[i][j];
                    store[k][1]=i;
                    store[k][2]=j;
                    k++;
                }
            }
        }
    }
    return k;
}
int main(){
    int **a,r,c,i,j,k;
    printf("Enter row and column numbers: ");
    scanf("%d%d",&r,&c);
    int store[r*c][3];//2d array to store saddle point outputs from the function saddle
    //dyanamically allocated array a
    a=(int **)malloc(r*sizeof(int *));
    for(i=0;i<r;i++){
        a[i]=(int *)malloc(c*sizeof(int));
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    k=saddle(a,r,c,store);
    printf("\nThe saddle points are: \n");
    for(i=0;i<k;i++){
        printf("a[%d][%d]=%d \n",store[i][1],store[i][2],store[i][0]);
    }

 return 0;
}


