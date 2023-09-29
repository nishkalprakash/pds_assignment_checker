//Roll No: 23CE10045
//Name: PRIYANSHU VERMA

#include<stdio.h>
#include<math.h>
int main ()
{
  int d1,d2,d3,d4, n, n1, digit=1,sum=0,checksum=0;
  printf("Enter positive integer: ");
  scanf("%d",&n);
  n1=n;
  
  if((n<=0) || (n>=10000))
    {
    printf("\nEntered number is not valid:");
    return 0;
    }
  
 while(n1/10 != 0)
   {
    n1 /= 10;
    digit++;
   }

 switch(digit)         // (a) part of question 1
   {
   case 1:
     d1 = n % 10;
     d1++;
     sum = d1;
     checksum = 10*d1+d1;
     
     printf("encoded %d", d1);

   case 2:
      d1 = n % 10;
      d2 = (n % 100)/10;

      d1++;
      d2++;
      sum = (d1+d2)%100;
      checksum = %d%d%d,d2,d1,sum;
      
      printf("encoded %d%d", d2,d1);
      printf("with checksum %d",checksum );

   case 3:
     d1 =  n % 10;
     d2 = (n % 100)/10;
     d3 = (n % 1000)/100;

     d1++;
     d2++;
     d3++;
     sum = (d1+d2+d3)%100;
     checksum = %d%d%d,d3,d2,d1,sum;
     printf("encoded %d%d%d\n", d3,d2,d1);
     printf("with checksum %d",checksum );

    case 4:
     d1 =  n % 10;
     d2 = (n % 100)/10;
     d3 = (n % 1000)/100;
     d4 = (n % 10000)/1000;

     d1++;
     d2++;
     d3++;
     d4++;
      sum = (d1+d2+d3+d4)%100;
      checksum = %d%d%d%d,d4,d3,d2,d1,sum;
       printf("encoded %d%d%d%d", d4,d3,d2,d1);
       printf("with checksum %d",checksum );
   }
 
 return 0;
   }

    
