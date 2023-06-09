#include<stdio.h>
#include<stdlib.h>

int max(int *a,int n){
    if (n==1)
    return a[0];
    int mid,m1,m2;
    mid=n/2;
    m1=max(a,mid);
    m2=max(a+mid,n-mid);
    if (m1>m2) return m1;
    else return m2;
}

int main(int argc, char const *argv[])
{
    int i,n,randint,p,q,*a;
    printf("enter n\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("enter p\n");
    scanf("%d",&p);
    printf("enter q\n");
    scanf("%d",&q);
    if(n==0) {
        printf( "Invalid value of n\n");
        goto end;
    }
    if(p>q){
        printf(" value of p should be more than q\n");
        goto end;
    }
    for(i=0;i<n;i++){
        randint=rand()%(q-p+1)+p;
        a[i]=randint;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Max=%d ",max(a,n));
    end:
    return 0;
}
