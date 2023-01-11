#include<stdio.h>

  int main()
{

      int n;
     printf("no. of elements in a row "); 
       scanf("%d",&n);
    int array[n][n];
   int i,j;
  for(i=0;i<n;i++) 
     {
        for(j=0;j<n;j++)
            {
                  scanf("%d",&array[i][j]);
                                      } 
   		for(i=0;i<n;i++) 
    	 {
        		for(j=0;j<n;j++)
            	{
                  scanf("%d",&array[i][j]);
                 	} 
	
                 		} 
                 			} 

                 
   
 
 printf("column major order %d",array[j][i]);
 
  
          
      
   




   return 0;
}
