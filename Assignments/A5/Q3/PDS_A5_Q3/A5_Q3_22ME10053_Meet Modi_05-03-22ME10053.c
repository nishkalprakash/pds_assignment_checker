//Name -Modi Meet
//Roll no-22ME10053
//Lab Ques-05-03
// Functions And Recursions Shifts And Swaps

#include<stdio.h>
#include<math.h>

void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

void reverse(int A[],int n,int a){
    int i;
    for(i=n-1;i>a;i--){
        swap(&A[i],&A[i-1]);
    }
    if(a==n-1) return;
    else reverse(A,n,a+1);

}

void cyclicShift(int A[],int n,int dir,int b,int c,int d){
    if(dir != 1){
        if(b==0) A[0]=A[n];
        else{
            A[b]=A[b-1];
            cyclicShift(A,n,dir,b-1,c,d);
        }
    }
    else{

        if(c==n) A[n-1]=d;
        else{
            A[c]=A[c+1];
            cyclicShift(A,n,dir,b,c+1,d);
        }
    }
}

int main(){

    int A[100];
    int n,dir;
    printf("Enter the size of array and direction:");
    scanf("%d%d",&n,&dir);
    int i,j,k;
    printf("Enter %d integers :",n);
    for(i=0;i<n;i++) scanf("%d",&A[i]);

    printf("The original array is :");
    for(i=0;i<n;i++) printf("%d ",A[i]);

    reverse(A,n,0);

    printf("\n The array after reverse is :");
    for(i=0;i<n;i++) printf("%d ",A[i]);

    if(dir==1) printf("\n Array after the left cyclic shift : \n");
    else printf("\n Array after the right cyclic shift : \n");

    cyclicShift(A,n,dir,n,0,A[0]);

    for(i=0;i<n;i++) printf("%d ",A[i]);

    return 0;
}
