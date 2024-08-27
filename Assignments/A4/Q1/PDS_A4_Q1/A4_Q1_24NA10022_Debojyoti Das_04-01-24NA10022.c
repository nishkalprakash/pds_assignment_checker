#include<stdio.h>
int main ()

   { 
      int n,i,sum1=1,sum2=-1,sum3=0;
      printf("Enter numbers of terms N:\n");
      scanf("%d",&n);
      if(n>0)
           
           {
             printf("Series is: \n %d,%d,",sum1,sum2);
             for(i=0;i<(n-3);i++)
                 
                 {
                     sum3=sum1-sum2;
                     printf("%d,",sum3);
                     sum1=sum2;
                     sum2=sum3;
                   
                 } 
             sum3=sum1-sum2;
             printf("%d \n",sum3);
                
            }
      else
             printf(" N is invalid. \n");
             
    }     
           
