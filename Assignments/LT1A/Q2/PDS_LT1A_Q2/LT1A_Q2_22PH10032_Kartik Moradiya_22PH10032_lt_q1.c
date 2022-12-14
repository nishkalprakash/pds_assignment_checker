#include<stdio.h>
#include<math.h>
   int main()
   {
     int i,j,n,k;
     printf("enter the number between 2 to 10");
     scanf("%d",&n);         //input from user
     for(i=1;i<=n;i++)       //use  loop in loop 
     { 
       for(j=1;j<=i;j++)
        {
        
         printf("%d",j+i-1);
        }
       printf("\n");      // for next term print in new line
       }
      return 0; 
       
     }
   
