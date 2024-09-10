#include <stdio.h>
#include <math.h>
#include <time.h>
   int main()
   {
   srand(42);
   //defining values of N,A,B as constants
   int N=10,A=5,B=6,x,k,i,j;
   float Filter[N],y,sum=0,t;
   int Bin_A[A],Bin_B[B];
   for(i=0;i<N;i++) //storing in values of y in filter//
   {
        int randomNumber=rand()%100+1;
        printf("Random number:%d\n",randomNumber);
   //genearting x as a random number between 1 & 100 and calculating the sum (sigma ((-1)^(k+!)*K^2)/2K+1 and storng this in sum
         x=randomNumber;
         for(k=1;k<=x;k++)
            {if((k+1)%2==0)
             {t=(k*k)/(2*k+1);}
             else
               {t=(-k*k)/(2*k+1);}
           sum=sum+t;
         }
           y=sum+cos(x/2);
           Filter[i]=y;
   }
   //generating a random number x in the range [1 to 100]
   for (i=0;i<A||i<B;i++)
         {int randomNumber=rand()%100+1;
        printf("Random number:%d\n",randomNumber);
        x=randomNumber;
            for(k=1;k<=x;k++)
            {if((k+1)%2==0)
             {t=(k*k)/(2*k+1);}
             else
               {t=(-k*k)/(2*k+1);}
           sum=sum+t;
         }
        y=sum+cos(x/2);
       //checking value of y is greater then any value in filter or smaller then any values in filter,storing accordingly
            if(y>Filter[i])
            {Bin_A[i]=x;}
            if(y<Filter[i])
              {Bin_B[i]=x;}
        }
        //displaying the values in arrays
       printf("Bin_A:");
           for(i=0;i<A;i++)
           {printf(" %d ",Bin_A[i]);}
            printf("\n");
       printf("Bin_B:");
           for(i=0;i<B;i++)
           {printf(" %d ",Bin_B[i]);}
            printf("\n");
       printf("Filter:");
           for(i=0;i<A;i++)
           {printf(" %f ",Filter[i]);}
           //all values are allocated
           return 0;
           }
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
           
       
