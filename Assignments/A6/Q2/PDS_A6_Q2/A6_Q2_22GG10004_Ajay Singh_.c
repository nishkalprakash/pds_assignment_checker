#include <stdio.h>
int i,x;
int gcd(int m,int n){
    for(i=1;i<=m;i++){
        if(m%i==0 && n%i==0){
            x=i;
        }
    }
    return x;
}

int main() {
    int n,A[100],y,j,u=0;
    while(1){
        printf("Enter n: ");
        scanf("%d",&n);
        printf("The given value of n is %d \n",n);
    
        for(i=0;i<n;i++){
            printf("Enter value ");
            scanf("%d",&A[i]);
            if(A[i]<0){
                printf("Invalid Entries:All entries shold be positive");
                continue;
            }
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                //y= gcd(A[i],A[j]);
                if(gcd(A[i],A[j])==1){
                    if(u==0){
                        u=0;
                        printf("Co-Primes Pairs: ");
                    }
                    u++;
                    printf("(%d,%d);",A[i],A[j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}