/* Name- Pushkaraj Jagtap
   Roll no.- 21MF3IM12
   Codeblock
   Question 1*/

#include<stdio.h>
int max_array_sum(int a[],int size){
     int i, b=0;
     for (i=0;i<size;i++){
        b=b+a[i];
        if(b<a[i]){
            b=a[i];
        }
        else{
          b=b;
        }

     }
     return b;
}

int main(){
   int a[20],n,sum;

   printf("Enter n:");
   scanf("%d",&n);

   printf("Enter the array elements");
    for(int k=0;k<n;k++){
      scanf("%d",a[k]);

      sum=max_array_sum(a,n);

      printf("Largest sum=%d",sum);
    }





}
