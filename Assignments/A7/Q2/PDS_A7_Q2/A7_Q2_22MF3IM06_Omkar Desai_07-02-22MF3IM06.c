
/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-02
description- swaping array element and product  */

#include<stdio.h>
#include<stdlib.h>


int main(){

int **a;
int **b;
int **c;
int m,n,p;
int term;


printf("enter the value of m,n,p \n");
scanf("%d%d%d",&m,&n,&p);

a=(int**)calloc(m,sizeof(int*));

for(int i=0;i<m;i++){
    a[i]=(int*)calloc(n,sizeof(int));
}

printf("Enter the value of element in matrix a \n");

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}


/*for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d  ",a[i][j]);
    }
    printf("\n");
}*/



b=(int**)calloc(n,sizeof(int*));

for(int i=0;i<n;i++){
    b[i]=(int*)calloc(p,sizeof(int));
}

printf("Enter the value of element in matrix b  \n");

for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
        scanf("%d",&b[i][j]);
    }
}


c=(int**)calloc(m,sizeof(int*));

for(int i=0;i<m;i++){
    c[i]=(int*)calloc(p,sizeof(int));
}






for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        term=a[i][j];
        a[i][j]=b[i][j];
        b[i][j]=term;

    }
}

printf("A   \n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d    ",a[i][j]);
    }
    printf("\n");
    printf("\n");
}
printf("B    \n");
for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
        printf("%d   ",b[i][j]);
    }
    printf("\n");
    printf("\n");
}

/*for(int i=0;i<m;i++){

    for(int j=0;j<(p-1);j++){
        c[i][j]=a[i][j]*b[j][i]+a[i][j+1]*b[j+1][i];
    }
}*/


/*for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
        printf("%d  ",c[i][j]);
    }
    printf("%d ");
}*/







return 0;
}
