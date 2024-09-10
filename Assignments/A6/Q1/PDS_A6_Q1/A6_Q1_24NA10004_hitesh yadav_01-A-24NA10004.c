#include<stdio.h>
#include<math.h>
#include<time.h>
int main()

{
     // CODE 1
            
        
       
       
       //Defining three 1-D Arrays and variables
       const int N=10,A=5,B=5;
       float Filter[N];
       int Bin_A[A],Bin_B[B],y,k,x,i;
       srand(42);
       
       
       // FILLING OF Filter
       
       while(i<N)
       {
       x=rand()%100+1; 
       }
       for(k>1;k<x)
       {
       y=(k*k/2*k+1)*(-1)pow(k+1)+cos(x/2);
       k++;
       y=Filter[i];
       i++;
       
       // flling of Bin_A
       
       while(i<A)
       {
       x=rand()%100+1;
       if(y<Filter[i])  
      { Bin_A=y}
       { 
       Bin_B[i]=y};
       Filter[i]=y;
       
       
       
       // filling of Bin_B
       while(i<B)
       int x=rand()%100+1;
    
       
       printf("\n  %d Bin_B[i]);
       
       }
   // DISPLAY OF THE VALUES
   printf("Filter\n");
   while(i<N)
   printf("%f",Filter[i]);
   
   if(i>Filter[i])
   {y=Filter[i]}
   
  
    return 0;
    
       
}
