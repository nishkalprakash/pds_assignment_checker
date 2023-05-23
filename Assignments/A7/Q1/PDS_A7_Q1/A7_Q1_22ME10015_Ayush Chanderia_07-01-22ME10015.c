#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int perfectNumber( int n){
 int d;
 int sum=0;
 for(int i=1;i<n;i++){
    if(n%i==0){
        sum=sum+i;
    }

 }
 if(sum==n) return 1;
 else return 0;
}
int main(){
    int *A,no,rn,check;
    int stor;
    int count =0;
    printf("Enter the number of elements you want:");
    scanf("%d",&no);
    int arr[no];
    A= (int*)malloc(no * sizeof(int));
    time_t t;
    srand(time(0));
    for(int r=0;r<no;r++){
        rn= 2 + rand()%1000;
        printf("%d ",rn);
        A[r]=rn;
    }
    printf("%d random number array:\t",no);
    for(int i=0;i<no;i++){
        printf("%d\t",A[i]);

    }
    printf("\n");
    for(int j=0;j<no;j++){
        stor=A[j];
        check=perfectNumber(stor);
        if(check==1){
           arr[count]=stor;
           count++;
        }
    }
    if(count==0)
    {
        printf("No perfect number found");
    }
    else if(count==1){
        printf("%d is a perfect number.",arr[count]);
    }
    else{
        for(int h=0;h<count;h++){
        printf("%d,",arr[h]);
    }
    printf("\t are perfect numbers.\n");
    }





return 0;
}

