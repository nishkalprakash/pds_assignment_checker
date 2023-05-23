#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *x,int *y){
        int temp = *x;
        *x = *y;
        *y = temp;
        return;
        }
int main(){//declared a pointer
    int **ptr,m,n,p;
    int **A,**B,**C;
    scanf("%d %d %d",&m,&n,&p);
    //allocated memory
    ptr = (int **) calloc(m,sizeof(int*));
    int k = 0;
    while(k<m){
        ptr[k] = (int *) calloc(n ,sizeof(int));
        k++;
        int j = 0;
        while(j<p){
        scanf("%d", &ptr[i][j]);
        j++;
        }}
        printf("Matrix A :\n")

    int i = 0;
    while(i<m){
        i++;
        int j = 0;
        while(j<n){
            printf("%d \n",ptr[i][j]);
            j++;
        }
        printf("\n");
           }
    for(int i = 0;i<n;i+=1){
        ptr[i]= (int *)calloc(n,sizeof(int));
        for(int j =0;j<p;j++){
            scanf("%d",&ptr[i][j]);
        }
    }
    printf("Matrix B : \n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<p;j++){
            printf("%d", ptr[i][j]);

        }
        printf("\n");
    }




}
