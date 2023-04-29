/*
SECTION 2
ROLL NO 22EC30035
NAME  MOHUL DUTTA
ASSIGNMENT No. 5

Description -
*/
#include<stdio.h>
#define N 100
int main(){
int n;
printf("enter a number");
scanf("%d",&n);
int a[N];
if(n>N){
    printf("Error:n>100");
}
else{
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Orginal Array:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    int g=n;
    int sub;
    while(g--){
        for(int i=n-1;i>0;i--){
            if(a[i]<0 && a[i-1]>0){
                    sub=a[i];
                    a[i]=a[i-1];
                    a[i-1]=sub;
            }
        }
    }
    printf("Rearranged Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

}
