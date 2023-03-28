#include<stdio.h>
int main()
{
    int x,y,X,Y,r1,r2,r3=1000,X1,k1,k2,k3;
    printf("Enter the pair of numbers:");
    scanf("%d%d",&x,&y);
    if(x>=-999&&x<=999&&y>=-999&&y<=999)
    {

    printf("X=%d,Y=%d\n(X,Y)=(%d,%d)",x,y,x,y);
    r1=X%10;
  r2=(r1*10)+((X/10)%10);
  r3=(r2*10)+((X/10)/10);
}
  if(Y==r3)
    printf("Perfect pair");
    else
       {

       if(X<0)
        {X1=(-1)*X;
     k1=X1%10;
  k2=(k1*10)+((X1/10)%10);
  k3=(k2*10)+((X1/10)/10);}
  if (Y==k3)

      printf("prefect pair");
      else
        printf("perfect pair");

      }}








