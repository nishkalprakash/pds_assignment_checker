#include <stdio.h>
/*Name-Sumit Kumar
Roll No.-22CS30056
Section-2
Description- arranging the positive and negative elements in the array */
#define N 100
int main(){
    int n;
    printf("enter the limit:");
    scanf("%d",&n);
    if (n<=100){
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("original array:");
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        for(int k=0;k<n;k++){
            for(int j=0;j<=k;j++){
                if((a[j]>0)&&a[j+1]<0){
                  int s=a[j];
                  a[j]=a[j+1];
                  a[j+1]=s;
                }


            }
        }
        for(int k=0;k<n;k++){
            for(int j=0;j<=k;j++){
                if((a[j]>0)&&a[j+1]<0){
                  int s=a[j];
                  a[j]=a[j+1];
                  a[j+1]=s;
                }


            }
        }
         printf("Rearranged Array:");
         for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
    else printf("Error");



   return 0;
}
