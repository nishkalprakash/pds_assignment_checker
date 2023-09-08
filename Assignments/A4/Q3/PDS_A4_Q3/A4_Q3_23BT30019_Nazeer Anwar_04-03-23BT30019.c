//ROLL NO.:23BT30019
//NAME:NAZEER ANWAR

#include<stdio.h>
int main()
{ int n,r,rev=0;
  printf("Enter a number to be check for pelindrom: ");
  scanf("%d",&n);
  int s=n;
  while(s>0)
    {
      r=s%10;
      rev=rev*10 + r;
      s=s/10;
    }
  if(n==rev)
    printf("It is a pelindrom number  ");
  else
    printf("It is not a pelindrom number  ");

    
}
