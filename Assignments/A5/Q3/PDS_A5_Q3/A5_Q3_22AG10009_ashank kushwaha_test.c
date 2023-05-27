#include<stdio.h>

#define P 100

void swap(int *p,int *q){

    int t;

    t=*p;

    *p=*q;

    *q=t;

}

void reverse(int *a,int l){

    int t;

    if (l>=0){

        swap(&a[0],&a[l-1]);

        reverse(&a[1],l-2);

    }



}

void cyclicShift(int *a,int l,int n){

    int t;

    if ((l==1)&&(n>1)){

        t=a[0];

        a[0]=a[1];

        a[1]=t;

        cyclicShift(&a[1],1,n-1);

    }

    else if (((l==-1)&&(n>1))){

        t=a[n];

        a[n]=a[n-1];

        a[n-1]=t;

        cyclicShift(&a[n-1],-1,n-1);

    }



}

int main(){

    int n,a[100],b[100],i;

    scanf("%d",&n);

    /*a=(int *) malloc(n*4);*/

    for (i=0;i<n;i++){

        scanf("%d",&a[i]);

    }

    reverse(a,n);

    for (i=0;i<n;i++){

        printf("%d ",*(a+i));

    }

    printf("\n");

    for (i=0;i<n;i++){

        a[i]=b[i];

    }

    cyclicShift(a,1,n);

    for (i=0;i<n;i++){

        printf("%d ",*(a+i));

    }





}