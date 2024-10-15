#include<stdio.h>

void main(){
int n,m;
printf("n = ");
scanf("%d",&n);
int A[n+1];
printf("A[n] = ");
for(int i=0;i<n;++i){
    scanf("%d",&A[i]);
}
printf("m = ");
scanf("%d",&m);
A[n]=m;

// sorting 
for(int i=0; i<n+1;i++){
   for(int j=0;j<n-i;j++){
       if(A[j]>A[j+1]){
           //swaping
           int temp=A[j];
           A[j]=A[j+1];
           A[j+1]=temp;
        }
    }
}

printf("Output Array:\n[");
for(int i=0;i<n+1;i++){
    
    if(i==n){printf("%d]",A[i]);
    }
    else{
    printf("%d,",A[i]);}
}
}
