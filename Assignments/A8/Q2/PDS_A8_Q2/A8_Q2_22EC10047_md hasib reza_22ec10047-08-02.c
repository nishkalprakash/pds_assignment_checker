#include<stdio.h>
struct mattrix{
int A[][];
int B[][];
int C[][];
};



int main(){
int**A,int**B;
int m,n,p,q;
printf("enter number of rows for mattrix A :");
scanf("%d",&m);
printf("\n enter number of colm for mattrix A :");
scanf("%d",&n);
printf("\n enter number of rows for mattrix B :");
scanf("%d",&p);
printf("\n enter number of colm for mattrix B :");
scanf("%d",&q);

A*=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        A[i]=(int*)malloc(n*sizeof(int));
    }
B*=(int**)malloc(p*sizeof(int*));
    for(int i=0;i<p;i++){
        B[i]=(int*)malloc(q*sizeof(int));
    }
printf("enter the values for mattrix A\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&A[i][j]);
    }
}
printf("\n");
printf("enter the values for mattrix B\n");
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        scanf("%d",&B[i][j]);
    }
}
printf("\n");

if(n==p){
    int**C;

C*=(int**)malloc(m*sizeof(int*));
    for(int i=0;i<m;i++){
        C[i]=(int*)malloc(q*sizeof(int));
    }
for (int i=0;i<m;i++){     // MULTIPLICATION PROGAMME
    for(int j=0;j<q;j++){
        for(int k=0;k<n;k++){
            C[i][j]=A[i][k]*B[k][j];
        }
    }
}
}

if(n!=p)printf("multiplication not possible");

printf("mattrix after multiplicatin \n");
printf("A\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d",A[i][j]);
    }
}
printf("B\n");
for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        printf("%d",B[i][j]);
    }
}
printf("C\n");
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        printf("%d",C[i][j]);

    }}
return 0;
}

