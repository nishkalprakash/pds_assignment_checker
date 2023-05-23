/*
Name - Mohul Dutta
Roll No. - 22EC30035
question 1 - lab 7*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int *a;
    time_t t;
   /* srand(time(t));*/
    int n,p=2,q=1000;

    scanf("%d",&n);
    srand(time(0));
    int arr[n];
    a=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){

    int r=p+rand()%q;
    *(a+i)=r;
    }
    int s=0;
    int k=0;
    printf("%d-random number array: ",n);
    for(int i=0;i<n;i++)
            printf("%d ",*(a+i));
    for(int i=0;i<n;i++){
            s=0;
        for(int j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            s=s+j;
        }
    if(s==a[i])
        {

            arr[k]=a[i];
            k++;
        }
    }
    printf("\n");
    if(k>0){
    for(int i=0;i<k;i++)
        printf("%d,",arr[i]);
    printf(" are perfect numbers");
    }
    else
        printf("No perfect number found");
    free(a);
}
/*2 segementation faults*/
