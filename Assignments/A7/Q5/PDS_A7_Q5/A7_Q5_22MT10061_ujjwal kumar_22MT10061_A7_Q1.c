#include<stdio.h>
  
   int main()
{ //taking input array from user   
   int A[10];
   int n;
   scanf("%d", &n);
 	 for (int k=0; k<n; k++)
 	 {
   	scanf("%d", &A[k]);
      		 }
 int count=0;  
 for(int i=0;i<=n-1;i++)
    {  
       
        for(int j=i-1;j==0;j--)
              
           {   
                      
                     if (A[i]<A[j])
                         count=count+2;
                 
           }
       for(int l=i+1;l<=n-1;l++)
             {
              if (A[l]<A[i])
                     { 
                       count=count+2;
                      } 



              }  
    }
 printf("out of order:  %d\n",count);





   return 0;
}
