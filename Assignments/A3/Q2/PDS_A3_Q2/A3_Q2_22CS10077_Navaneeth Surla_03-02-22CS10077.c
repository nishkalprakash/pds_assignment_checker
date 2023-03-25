#include<stdio.h>
int main()
{
  int a,b,a1,a2,a3,b1,b2,b3,A1,B1;
  printf("Enter two numbers in the range [-999,999] : ");
  scanf("%d %d",&a,&b);
  if(a>=1000 || b>=1000 || a<=-1000 || b<=-1000)
  {
      printf("Numbers are not in given range");
  }

  a1 = a/100;
  A1 = a%100;
  a2 = A1/10;
  a3 = A1%10;
  b1 = b/100;
  B1 = b%100;
  b2 = B1/10;
  b3 = B1%10;
  if(a<=999 && a>=-999 && b<=999 && b>=-999)
  {


  if( a1 == 0 && b1 == 0 )
  {
    if( a2 == b3 && a3 == b2 )
   {
      printf("Perfect pair");
   }
  else
   {
      printf("Not a Perfect pair");
   }
  }
  else if ( a1 != 0 && b1 != 0 )
  {
      if( a1 == b3 && a2 == b2 && a3 == b1)
      {
          printf("Perfect pair");
      }
      else
      {
          printf("Not a Perfect pair");
      }
  }
  else if ( ( a1 != 0 && b1 == 0 ) || ( a1 == 0 && b1 != 0) )
  {
      printf("Wrong Input");
  }
  }
}
