/* name K.SRISAI
   Roll no 22EC30055
   LAB NO 5
   question no 1(1D arrays)*/
#include<stdio.h>
#define N 100
int main()
{
int a[N],n,k=0 ;
printf("enter number of elements \n");
scanf("%d",&n);
if(n>100){
    printf("Error: n>100");
    return 0 ;
}
for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("original array: ");
        for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int v=0;v<n;v++){
        int f=v ;
        while((k==0)&&(f>0)){
         if(((a[f]*a[f-1])<=0)&&(a[f]<0)){
           int c=a[f-1] ;
           a[f-1]=a[f] ;
            a[f]=c ;
            f-- ;
         } else k=1 ;
        }
        f=v ;
        k=0 ;
    }
    printf("rearranged Array:  ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
     return 0 ;
}
