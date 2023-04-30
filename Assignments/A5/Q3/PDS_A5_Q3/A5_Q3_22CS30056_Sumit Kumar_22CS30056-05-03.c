#include <stdio.h>
/*Name-Sumit Kumar
Roll No.-22CS30056
Section-2
Description-  */
// defining a global variable as n
int n;
void swap (int *x, int *y){

int t;
t = *x; *x = *y; *y = t;
}
 void reverse(int *a,int k){
      if(k>n/2) return;
      else {
            swap(&a[k],&a[n-1-k]);
             reverse(a,k+1);
             return;
      }

}
 void cyclicshift( int *a,int z){
     if (z==1){
     int k=a[0];
     for(int k=0;k<n-1;k++){
            a[k]=a[k+1];

     }
     a[n-1]=k;
     }
     else {
        int l=a[n-1];
        for (int k=n-1;k<=1;k--){
               a[k]=a[k-1];
        }
        a[0]=l;
     }
 }
int main(){

    int p,q;
    printf("enter the first number:");
    scanf("%d",&p);
    printf("enter the second number:");
    scanf("%d",&q);
    printf("the original numbers %d,%d\n",p,q);
    swap (&p,&q);
    printf("the sawpped numbers %d,%d\n",p,q);
    printf("enter the limit for the array:");
    scanf("%d",&n);
    printf("\n");
    int a[n];
    for(int k=0;k<n;k++){
        scanf("%d",&a[k]);
    }
    printf("the array you have entered is:");
    for(int p=0;p<n;p++){
        printf("%d ",a[p]);
    }
    printf("\n");
    reverse(&a,0);
    printf("the reversed array is");
    for(int p=0;p<n;p++){
        printf("%d ",a[p]);
    }
    printf("\n");
    int z;
    printf("enter the direction:");
    scanf("%d",&z);
    cyclicshift(&a,z);
    printf("the new array is");
    for(int p=0;p<n;p++){
        printf("%d ",a[p]);
    }
    printf("\n");


   return 0;
}
