/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Lab Test :: 2
Question :: 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float sum=0;
float mean(int *a, int n){
    if ((n-1)>0) {
        sum+=a[n-1];
        return sum + mean(a,n-1);
    }
    else{
        return sum;
    }
}

int main(){
    int *a;
    int n;
    float Mean;
    scanf("%d",&n);
    a = (int *)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("List = [");
    for (int j=0;j<n;j++){
        printf("%d,",a[j]);
    }
    printf("]");
    Mean = (mean(a,n))/n;
    printf("\nMean = %.2f",Mean);
    return 0;
}

