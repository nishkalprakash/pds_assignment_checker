#include<stdio.h>
# define N 100
int main{
int n,i,a[N],k,j;
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter %d elements(<=100) : ",n);
for(i=0;i<n;i++){
    scanf("%d",&a[100]);
}
printf("Original array : ");
for(i=0;i<n;i++)
printf("%d ",a[100]);
printf("\n");
for(i=0;i<n;i++){
    if(a[i]>0){
        for(j=i+1;j<n;j++){
            if (a[j]<0){
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
            break;
        }
    }
}
printf("Rearranged array : ");
for(i=0;i<n;i++) printf("%d ",a[100]);
return 0;
}
