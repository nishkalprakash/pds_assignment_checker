/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Assignment-5
*Description- Goldbach's conjecture
*/

#include<stdio.h>

void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;

}

void reverse(int *a,int i){
    if(i<=n/2){
        a[i]=temp;
        a[i]=a[n-1-i];
        a[n-i-1]=temp;
    }
    else return 0;
    reverse(int *a.int i+1);

}

int main(){
    int p,q,arr;
    printf("Enter the values of p and q: ");
    scanf("%d %d", &p,&q);
    swap(&p,&q);
    printf("%d %d",p,q);

    for(i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    reverse(*arr,0);

    for(i=0;i<n;i++){
        printf("%d: ",arr[i+1]);

    }

    return 0;




}
