//Creator:Madhav Gupta
//Roll no.: 24NA10038
//Topic: To make a system with defined arrays
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N 9
#define A 4
#define B 3
int main()
{
 //Random number generator with a fixed seed (42) to check the test cases
         srand(42);
     int  i, countA, countB, m, n, s, count, Filter[N];
     double x, y, k, Bin_A[A], Bin_B[B];
     countA=0;
     countB=0;
     for(i=0 ;i<N ;i++) //To fill the filter array
     {
        
         int randomNumber = rand() % 100 + 1;
         printf("Random Number:%d\n", randomNumber);
         x=randomNumber;
         for(k=1, y=0 ;k<=x ;k++)
         {for(count=1, s=1;count<=k; count++){
            s=s*(-1);}
           y=y+((k*k)/(2*k+1))-(s*k);
         }
         y=y+sin(x/3);
         Filter[i]=y;
         }
         for( ; countB<=B || countA<=A ; ) //To fill the other arrays
     {
         
         int randomNumber = rand() % 100 + 1;
         printf("Random Number: %d\n", randomNumber);
         x=randomNumber;
         for(k=1, y=0 ;k<=x ;k++)
         {for(count=1, s=1;count<=k; count++){
            s=s*(-1);}
           y=y+((k*k)/(2*k+1))-(s*k);
         }
         y=y+sin(x/3);
         m=0;
         n=0;
         for(i=0 ; countB<=B || countA<=A ; i++)
         {
            if(y>Filter[i] && countA<=A && m==0)
            { 
              Bin_A[countA]=x;
              countA++;
              m++;
              }
            else if(y<Filter[i] && countB<=B && n==0)
            { 
              Bin_B[countB]=x;
              countB++;
              n++;
              }
            else if(y==Filter[i])
            {
              continue;
              }
            else if(m>0 && n>0)
            break;
            }
            }
            printf("\nFilter array");
            for(i=0; i<N ;i++){
            printf("%d   ",Filter[i]);
            }
            printf("\nBin_A array");
            for(i=0; i<A ;i++)
            {
            printf("%lf   ",Bin_A[i]);
            }
            printf("\nBin_B array");
            for(i=0; i<B ;i++){
            printf("%lf  ",Bin_B[i]);
            }
            
            return 0;
            }
            
         
         
         
           
