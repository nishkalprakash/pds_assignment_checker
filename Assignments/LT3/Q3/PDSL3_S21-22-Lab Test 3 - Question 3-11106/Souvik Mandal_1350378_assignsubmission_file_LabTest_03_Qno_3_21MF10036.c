/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows
*/



#include <stdio.h>
#include <math.h>
int v[32];
int k;
void func(int c,int d,int n,int digit,int p)
{
  if(digit==5)
  {
    v[k]=n;
    k++;
    return;
  }
  func(c,d,n+c*pow(10,p),digit+1,p+1);
  func(c,d,n+d*pow(10,p),digit+1,p+1);
}

int main()
{
  int c,d;
  printf("Enter two digits : ");
  scanf("%d%d",&c,&d);
  k=0;
  printf("Numbers :\n");
  func(c,d,0,0,0);
  int i;
  for(i=0;i<32;i++)
  {
    if(v[i]%(c+d)!=0)
    {
      printf("%d ",v[i]);
    }
  }
  return 0;
}