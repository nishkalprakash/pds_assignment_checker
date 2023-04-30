/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO:5
DESCRIPTION:rearranging array
*/
#include<stdio.h>
#define P 100
int main(){
    int a[100],n,i,j,t1,t2,t;
    printf("enter number of elements");
    while (1){
        scanf("%d",&n);
        if (n>100){
        printf("error n>100");
    }
    break;
    }
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Original Array : ");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    j=(n-1);
    for (i=n-1;i>=0;i--){
        while (j>=0){
            t1=a[i];
            t2=a[j];
            if ((t1<0)&&(t2>=0)){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                j--;
                break;}
            j--;

        }

    }
    printf("Rearranged array : ");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
