/*Name- KRISHNA GUPTA
  Roll n0. - 22GG10024
  Section - 14
  Assignment - 5
  Question - NUMBER GUESSING GAME
*/

#include <stdio.h>   // MAIN FUNCTION
int main()
  {

      int f=1,x,n,i,t;
      float sum=0.0;
      int power(int x,int n);
      int fact(int n);
      printf("Enter the vaue of x :");    // INPUTING X
      scanf("%d",&x);
      printf("Enter the vaue of n :");   // INPUTING N
      scanf("%d",&n);
         for(i=0;i<=n-1;i++)
            {
                f=fact(i);      // CALLING fact() function
                t=power(x,i);    //CALLING POWER() FUNCTION
                sum =sum + ((float)t)/f ;    // COMPUTING SUM
            }
          printf("%f",sum);
   } 
     int power(int x,int n)    //  POWER () FUNCTION
     {
        int t,i;
        for(i=0;i<=n-1;i++)
         {
      
        t=x*x;
          }
        return t;
     }
        int fact(int n)       // FACT () FUNCTION
     {
       int f=1,i;
        for(i=1;i<=n-1;i++)
          {
        f=f*i;
         }
       return f;
} 

