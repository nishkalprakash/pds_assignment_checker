//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <math.h>
int main()
{
  int n,n1=0,n2=0,num3=0,digit=1,copy=0,rev1=0,rev2=0,sum=0;   // Initiallising Variables
  printf("Enter a positive integer ");
  while(1)                   //  accepting value between 0 and 9999
    {
      scanf("%d", &n);
      if(n<9999 && n>0)
         break;
    }
  copy = n;
  while(copy>0)
    {
      rev1 = rev1*10 + copy%10;
      copy /= 10;
    }
  while(rev1>0)         // Finding encoded value
    {
      n1 = n1*10+ rev1%10+1;
      rev1 /= 10;
    }
  printf("Encoded: %d\n",n1);

  copy = n1;
  while(copy>0)        // Finding Checksum
    {
      sum = sum + copy%10;
      copy /= 10;
    }
  if(sum>9)sum = sum%100;
  n2 = n1*100+sum;
  printf("With Checksum: %d\n",n2);
  digit = n2; 
  while(n2>0)
    {
      rev2 = rev2*10 + n2%10;
      n2 /= 10;
      }
  printf("Double Encode: ");
  while(rev2 > 0)     // Finding double encode
    {
      num3 = rev2%10;
      rev2 = rev2/10;
      printf("%d0",num3);
    }
  if(digit%10 == 0)printf("00\n");
  else printf("\n");
  return 0;
    
      
}
  
  
  
