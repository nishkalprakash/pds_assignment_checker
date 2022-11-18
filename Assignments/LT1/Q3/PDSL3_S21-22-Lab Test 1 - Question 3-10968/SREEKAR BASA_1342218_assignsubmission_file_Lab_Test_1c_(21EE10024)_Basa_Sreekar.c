/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Lab Test_1
Question    : 3
*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int a,b,c,p,q,r,m,n,i,s1,s2,n1,n2,num1,num2,b1,b2,k ;
    int c1=0,c2=0 ; // for badge counting //
    srand(time(0));
    printf(" Enter no.of rounds : ");
    scanf("%d",&k);

    for(i=1,m=0,n=0;i<=k;i++)
    {
      printf(" Round--> %d \n",i);
      num1 = (rand() % (1000 - 5 + 1)) + 5 ;
      num2 = (rand() % (1000 - 5 + 1)) + 5 ;
      printf(" A's number : %d , B's number : %d \n",num1,num2);
      a = num1/100 ;
      p = num2/100 ;
      b = (num1/10)%10 ;
      q = (num2/10)%10 ;
      c = num1%10 ;
      r = num2%10 ;
      s1 = a+b+c ; // sum of digits//
      s2 = p+q+r ;

      if(a!=0) n1=3;       // Small algorithm for no.of digits in A //
      else if(a==0)
      {
          if(b!=0) n1=2;
          else if(b==0) n1=1;
      }

      if(p!=0) n2=3;      // Small algorithm for no.of digits in B //
      else if(p==0)
      {
          if(q!=0) n2=2;
          else if(q==0) n2=1;
      }

      printf(" No.of digits of A & B respectively : %d , %d \n",n1,n2);

      if(n1>n2) // no.of digits in A > B //
      {
          printf(" A's point : %d , B's point : %d \n",n1,n2);
          printf(" A's Badge : 1 , B's Badge : 0 \n");
          m = m+n1 ;
          n = n+n2 ;
          c1++ ;
          printf(" ---- A wins Round%d----\n",i);
      }
      else if(n1<n2) // no.of digits in A < B //
      {
          printf(" A's point : %d , B's point : %d \n",n1,n2);
          printf(" A's Badge : 0 , B's Badge : 1 \n");
          m = m+n1 ;
          n = n+n2 ;
          c2++;
          printf(" ---- B wins Round%d----\n",i);
      }

      else if(n1==n2) // no.of digits in A = B //
      {
          if(s1>s2) //// sum of digits in A > B //
          {
              printf(" A's point : %d , B's point : %d\n",s1,s2);
              printf(" A's Badge : 1 , B's Badge : 0 \n");
              m = m+s1 ;
              n = n+s2 ;
              c1++ ;
              printf(" ---- A wins Round%d----\n",i);
          }
          else if(s1<s2) // sum of digits in A < B //
          {
              printf(" A's point : %d , B's point : %d \n",s1,s2);
              printf(" A's Badge : 0 , B's Badge : 1 \n");
              m = m+s1 ;
              n = n+s2 ;
              c2++ ;
              printf(" ---- B wins Round%d----\n",i);
          }
          else if(s1==s2) // I have added this extra point that if sum of digits are same then A&B get 1 badge each //
          {
              printf(" A's point : %d , B's point : %d \n",s1,s2);
              printf(" A's Badge : 1 , B's Badge : 1 \n");
              m = m+s1 ;
              n = n+s2 ;
              c1++ ;
              c2++ ;
              printf(" ---- A wins Round%d----\n",i);
          }

     }
    }
    s1 = m*c1; // using s1 & s2 to calculate total scores //
    s2 = n*c2;
    printf(" \n A's total score is : %d , B's total score is : %d\n",s1,s2);
    if(s1>s2) printf("---A wins the Game--");
    else if(s1<s2) printf("---B wins the Game--");
    else if(s1==s2) printf("---A and B wins the Game--");
    return 0;
    }



