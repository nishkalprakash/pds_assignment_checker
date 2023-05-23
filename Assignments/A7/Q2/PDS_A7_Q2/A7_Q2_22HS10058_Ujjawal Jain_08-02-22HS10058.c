/*sec2
Assignment no.8
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 2
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int min(int x, int y){
if(x>y){
    return y;
}
else{
    return x;
}
}

int main(){
    int n,m,p;
    scanf("%d %d %d",&m,&n,&p);
    int **a;
    a = (int **) malloc(m*sizeof(int*));

for (int i = 0; i < m; i++){

     a[i] = (int *) malloc(n*sizeof(int));
}
for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            scanf("%d",&a[i][j]);

        }
    }


    int **b;
    b = (int **) malloc(n*sizeof(int*));

for (int i = 0; i < n; i++){

     b[i] = (int *) malloc(p*sizeof(int));
}
for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){

            scanf("%d",&b[i][j]);

        }
    }



int row = min(m,n);
int col = min(n,p);
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        a[i][j] = a[i][j] + b[i][j];
        b[i][j] = a[i][j] - b[i][j];
        a[i][j] = a[i][j]- b[i][j];

    }
}
printf("Matrix A:-\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",a[i][j]);

    }
    printf("\n");
}
printf("Matrix B:-\n");
for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
        printf("%d ",b[i][j]);

    }
    printf("\n");
}


int **c;
    c = (int **) malloc(m*sizeof(int*));

for (int i = 0; i < m; i++){

     c[i] = (int *) calloc(p,sizeof(int));
}

for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){

       for(int k=0; k<n;k++){
        c[i][j] = c[i][j] + a[i][k]*b[k][j];
       }

    }

}
printf("Matrix C:-\n");
for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
        printf("%d ",c[i][j]);

    }
    printf("\n");
}





return 0;
}

