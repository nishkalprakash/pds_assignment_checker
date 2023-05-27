#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,s,d,b,l1,j1,l2,j2,a,l3,j3,j4,l4 ;
    printf("Enter the integer : ");
    scanf("%d",&n);


    b = n;
    for(i = 0; n != 0 ;i++)
    {
        n = n/10;
    }
    a = i;
    n = b;
    i = i-1;


    if ((n%2) == 0)
    {
      for(j1 = a;  j1 > 1 ; j1--)
      {
          n = n/10;
      }
      l1 = n;


       n = b;
      for(j2 = a;  j2 > 2 ; j2--)
      {
          n = n/10;
      }
      l2 = n;


      n = b;
      for(j3 = a;  j3 > 3 ; j3--)
      {
          n = n/10;
      }
      l3 = n;


      n = b;
      for(j4 = a;  j4 > 4 ; j4--)
      {
          n = n/10;
      }
      l4 = n;


      printf("%d,%d,%d,%d",l1,l2,l3,l4);
    }
    else
    {
         for(j1 = a;  j1 > 1 ; j1--)
      {
          n = n/10;
      }
      l1 = n;


       n = b;
      for(j2 = a;  j2 > 2 ; j2--)
      {
          n = n/10;
      }
      l2 = n;


      n = b;
      for(j3 = a;  j3 > 3 ; j3--)
      {
          n = n/10;
      }
      l3 = n;


      n = b;
      for(j4 = a;  j4 > 4 ; j4--)
      {
          n = n/10;
      }
      l4 = n;


      printf("%d,%d,%d,%d",l4,l3,l2,l1);
    }


    n = b;
    for (s = 0 ; i > 0 ; i--)
    {

        s = s + (n%10)*(pow(10,i));
        n = n/10;
    }
    printf("\nReverse number = %d",s);
    n = b;
    d = n - s;
    if ( d < 0)
    {
        d = -d;
    }
    printf("\nDifference between Reverse and original number =  %d",d);
    return 0;
}