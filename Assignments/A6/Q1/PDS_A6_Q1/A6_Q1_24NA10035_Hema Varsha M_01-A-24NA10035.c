#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 5 
#define A 2
#define B 1
int main()
{
  // creating array
  float filter[N];
  int  bin_a[A];
  int  bin_b[B];
  int x,i,j,l,m=0,n=0;// i,j,m,n  are looping variables
  float y; 
  srand(42);
  // filling array filter
  for(i=0;i<N;i++) // loop n times
   {
   //generating random number in the range 1 to 100
   int randnum=rand() % 100 +1;
   x=randnum;
   //computing y
   float t,sum=0.0;
   for(j=1;j<=x;j++)//calcuting summation
   {
    t=((pow(-1,j+1)*(j*j))/((2*j)+1));
    sum+=t;
   }
   y=sum+cos(x/2); 
   filter[i]=y;
   }
  
  //filling bin_a and bin_b
  //while(1)
  {
   if(m<=A ||n<=B)
  {
   /**if(m>A-1|| n>B-1)
      break;
   else**/
  { //generating random number in the range 1 to 100
   int randnum=rand() % 100 +1;
   x=randnum;
   //printf("\n%d",x);
   //computing y
   float t,sum=0.0;
   for(j=1;j<=x;j++)//calcuting summation
   {
    t=((pow(-1,j+1)*(j*j))/((2*j)+1));
    sum+=t;
   }
   y=sum+cos(x/2);
  // printf("\n%f",y);   
  // comparing value of y with filter
   for(l=0;l<n;l++)
   { 
     if(y>filter[l]) // filling bin_a
       {
          
        bin_a[m]=x;
        m++;
    
        }
     if(y<filter[l]) // filling bini_b
     {
        
        bin_b[n]=x;
        n++;
        
        }

   }
   //if(m==A ||n==B)
    //break;
   
  }
  }
    }
  // displaying the arrays
  printf("\nFILTER\n");
  for(i=0;i<N;i++)
     printf("%f, ",filter[i]);
  
  printf("\nBIN_A\n");
  for(i=0;i<m;i++)
     printf("%d, ",bin_a[i]);
     
  printf("\nBIN_B\n");
  for(i=0;i<n;i++)
     printf("%d, ",bin_b[i]);
     
  return 0;
  }


