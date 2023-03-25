#include<stdio.h>
int main()
{
    int a,b,c,d,e,a1,b1,c1,d1,e1,r,max;
    printf("Enter five numbers : ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    a1 = a%2;
    b1 = b%2;
    c1 = c%2;
    d1 = d%2;
    e1 = e%2;
    r = a1+b1+c1+d1+e1;
    if(r == 2)
    {
      if(a>b)
      {
          max = a;
      }
      else
      {
          max = b;
      }
      if(c>max)
      {
          max = c;
      }
      if(d>max)
      {
          max =d;
      }
      if(e>max)
      {
          max = e;
      }
      printf("Largest number :\n");
      printf("%d",max);

    }


}
