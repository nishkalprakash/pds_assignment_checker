/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 7
Question: 2
Description: Matrices*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int **a;
int **b;
int **c;
int m,n,p,temp;
int i,j;
scanf("%d%d%d",&m,&n,&p);
a = (int **) calloc(m, sizeof(int*));

for ( i = 0; i < m; i++)

     a[i] = (int *) calloc(n, sizeof(int));
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
b = (int **) calloc(n, sizeof(int*));

for ( i = 0; i < n; i++)

     b[i] = (int *) calloc(p, sizeof(int));
for(i=0;i<n;i++){
    for(j=0;j<p;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        temp=a[i][j];
        a[i][j]=b[i][j];
        b[i][j]=temp;
    }
}
printf("\n");
printf("Matrix A:-\n\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

printf("\nMatrix B:-\n\n");
for(i=0;i<n;i++){
    for(j=0;j<p;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
}
return 0;
}
