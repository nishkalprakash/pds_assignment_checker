#include<stdio.h>

 int main()
 {
    int sum=0,n;
    printf("enter the number");
    scanf("%d",&n);             // input from th user
    if(n<=1){
    printf("invalid input");
    }
    else { 
        for(int N=2;N<n;N++)
        {
          for (int i=1;i<N;i++)     // use loop for find divisor
            {
             if (N%i==0){
             sum+=i;
             }
            
             if (sum==N){
              printf("%d",N);
              }
           }
          }
         }
    return 0;
 }
