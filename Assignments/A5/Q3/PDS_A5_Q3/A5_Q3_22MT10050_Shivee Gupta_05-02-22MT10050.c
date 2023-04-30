#include<stdio.h>
void swap(int p,int q){
int a = p;
p = q;
q = a;
}

int main(){
    int n,i,s,k,j,arr[50];
 printf("Enter the size of array and direction : ");
 scanf("%d %d",&n,&s);
 printf("Enter %d integers : ",n);
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 printf("Original Array : ");
 for(i=0;i<n;i++) printf("%d ",arr[i]);
 printf("\n");
 printf("Reversed Array : ");
 for(i=n-1;i>=0;i--) printf("%d ",arr[i]);
 printf("\n");


 if(s==1){
k = arr[0];
    for(i=1;i<n;i++) {
        arr[i-1]=arr[i];
    }
    arr[n-1] = k;
    printf("Array after left cyclic shift is : ");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
 }
 else { j=arr[n-1];
 for(i=0;i<n;i++){
    arr[i+1] = arr[i];
 }

 printf("Array after right cyclic shift is : ");
 for(i=1;i<n+1;i++)  printf("%d ",arr[i]);
 }
 return 0;
 }
