#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three integers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n----before function call-----\n\n");
    //printing address and values before calling fun.
    printf("address of a:%d\naddress of b:%d\naddress of c:%d",&a,&b,&c);
    printf("\nvalues in a,b,c:%d,%d,%d\n",a,b,c);
    rearrange(&a,&b,&c); //CALLING FUNCTION(CALL BY REFRENCE).
    //printing address and values after calling fun.
    printf("\n----after function call-----\n\n");
    printf("\n\naddress of a:%d\naddress of b:%d\naddress of c:%d",&a,&b,&c);
    printf("\nvalues in a,b,c:%d,%d,%d",a,b,c);
    getch();

}
void rearrange(int*x,int*y,int*z)//function to rearrange values in non decreasing order.
{
    int k;
  if(*x<=*y&&*x<=*z)//checking value of a for smallest.
  {
      k=*z;
      *z=*x;
      *x=k;
      if(*x<=*y)
       {
          k=*y;
          *y=*x;
          *x=k;
       }
       return;

  }
  if(*y<=*x&&*y<=*z)//checking value of b for smallest
  {
      k=*z;
      *z=*y;
      *y=k;
      if(*x<=*y)
      {
          k=*x;
          *x=*y;
          *y=k;
      }
      return;
  }
  if(*z<=*x&&*z<=*y)//checking value of c for smallest.
  {
      if(*x<=*y)
      {
          k=*y;
          *y=*x;
          *x=k;
      }
      return;
  }

}
