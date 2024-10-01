#include<stdio.h>
void gcd(int a,int b)
int temp;

 int gcd,p1,p2, temp;
 p1=a;
 p2=b;
 
 while (b%a!=0){
 temp=b%a;
 b=a;
 a=b%a;
 }
 
 gcd=a;
  
  return gcd;
  }
  { 
  printf("%d %d are coprime numbers:"p1,p2); // giving coprime output 
  }
   int gcd;
   
   int main()
   {
    
    int a[10],j,i;
    for (i=0;i<=4;i++)
    {
     scanf("%d",&a[i]);
     }
     for (i=0;i<=4;i++)
     for (j=0;j<=i;j++)
     gcd=a[j][i];
     
      if (a[0]==a[1]==a[2]==a[3]==a[4]) // condition check for not coprime
      {
      printf("No co-prime numbers found\n");
      }
      }
      
     
     
     
     
     
   
