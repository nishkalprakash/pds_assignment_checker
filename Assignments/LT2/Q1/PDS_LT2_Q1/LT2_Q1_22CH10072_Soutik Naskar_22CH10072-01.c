/*
name-soutik naskar
roll-22CH10072
sec-2*/
#include<stdio.h>
#include<stdlib.h>
float mean(int *a,int n){
    if(n==1)
        return 1;
        if(n==0)
        return 0;
        int sum=0;
        for( int i=0;i<n;i++){
sum=sum+a[i];
        }
        return sum/n;
    
}

int main(){
    int n;
    int *p;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
scanf("%d",&p[i]);
    }
    printf("list=[");
    for(int j=0;j<n;j++){
        printf("%d,",p[j]);

    }
    printf("]");
    printf("mean=%f",mean(p,n));
return 0;
}