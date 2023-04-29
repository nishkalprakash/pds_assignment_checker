/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 5
* Description :
*/
#include<stdio.h>
#define N 100
int main(){
   int a[N],n,temp,ctr=0,i;
   printf("enter value of n\n");
   scanf("%d",&n);

   if(n>100 || n<0){
    printf("error : n is beyond it's range\n");
   }

   else{
     for( i=0;i<n;i++){               //taking input from user and storing them in array
     printf("Enter element %d : ",i+1);
     scanf("%d",&a[i]);
    }

    printf("Original array is : ");
    for( i=0;i<n;i++){
        printf("%d, ",a[i]);
    }

    printf("\n");

    for(int i=0;i<n;i++){
        if(a[i]<0){        //detecting negative number
            temp=a[i];
            for(int t=i;t>=ctr;t--){  //loop for shifting negative number to the left
                a[t]=a[t-1];
             }
                a[ctr]=temp;
                ctr++;
         }


    }

   printf("Rearranged array is:");

   for(int i=0;i<n;i++){
    printf("%d, ",a[i]);
   }
  }

return 0;
}
