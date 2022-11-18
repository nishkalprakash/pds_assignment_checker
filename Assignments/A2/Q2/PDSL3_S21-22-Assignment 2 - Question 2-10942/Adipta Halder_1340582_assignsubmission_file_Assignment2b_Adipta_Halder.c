/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Assignment number: 2b
*/
#include<stdio.h>
#include<time.h>
 #include<stdlib.h>
 #include<math.h>

int main(){
    srand(time(NULL));
    int p,dn=0,i,j,n,k;
    double De,D=0;
    printf("n= ");
    scanf("%d",&n);
    printf("k= ");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=1;j<=n;j++){
            p = rand() & 1?-1:1;
            dn=dn+p;
        }
        D=D+dn*dn;
        dn=0;
    }
    De=sqrt(D/k);
    printf("Output: %lf",De);
 return 0;
}

