
#include<stdio.h>
#define N 100
int main()
{
    int n,temp,i,l=0;

    printf("Enter the size of array(<100)\n");
    scanf("%d", &n);
     int a[n];
     if(n>100){
        printf("ERROR : n>100");
     }
   else{printf("Enter %d numbers: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Original array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
     for(int i=0;i<n;i++){
     if(a[i]<0){
            int t = a[l];
            a[l]=a[i];
            a[i]=t;
            l+=1;
    }

    }

     printf("\n");
    printf("Rearranged array: ");
for( int i=0;i<n;i++){
    printf("%d ",a[i]);
}
}

    return 0;}
