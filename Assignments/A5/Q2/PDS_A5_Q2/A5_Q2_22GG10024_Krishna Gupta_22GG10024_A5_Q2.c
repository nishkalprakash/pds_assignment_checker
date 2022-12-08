/*Name- KRISHNA GUPTA
  Roll n0. - 22GG10024
  Section - 14
  Assignment - 5
  Question - FINDING CO-PRIME PAIRS IN AN ARRAY
*/

#include <stdio.h>   // MAIN FUNCTION
int main()
{
  int a,b,i,t,A[5];
void coPrime(int a,int b);
     printf("Enter 5 numbers :");
        for(i=0;i<5;i++)
     {
   scanf("%d",&A[i]);
     }
   coPrime(a, b);     // CALLING COPRIME() FUNCTION FOR FINDING CO PRIME NUMBERS
}
void coPrime(int a,int b)
    {
     int t,i,j,A[5];
 

       for (i=0;i<=4;i++)
         {
           for (j=i+1;j<=4;j++)
            {                           // PAIRING NUMBERS OF ARRAY
              a= A[i];
              b =A[j];    
     if (a>b)
       {
         t=a;                           // MAKING B>A
         a=b;
         b=t;
       }  
     while((a%b)!=0)
      {                                     //EVALUATING GCD
      t= b%a;
      b=a;
      a=t;

      } 
     if (a==1)
     {
       printf("%d and %d are Co-Prime\n ",a,b);
     }
    else
    {
      printf("No Co-Prime found\n");
    }
    }
     }

     }




     


