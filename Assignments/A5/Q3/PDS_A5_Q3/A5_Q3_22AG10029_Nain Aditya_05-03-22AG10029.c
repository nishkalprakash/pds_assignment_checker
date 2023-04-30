#include <stdio.h>
/*
section 2
Name - Nain Aditya
roll no. - 22AG10029
LAB - 5 QUESTION 3 */
void swap(int p,int q){int c;
    c=p;
    p=q;
    q=c;
printf("after swap p and q are %d %d",p,q);
}
void reverse(int *a,int n){

    printf("%d ",a[n-1]);
    if (n>1) reverse(a,n-1);
}
void cyclicshift(int *a,int d){
}
int main(){
     int n,d;
     printf("enter the size of array and direction");
     scanf("%d%d",&n,&d);
     int ar[n];
     for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
     }printf("array in reverse");
     reverse(ar,n);
}


