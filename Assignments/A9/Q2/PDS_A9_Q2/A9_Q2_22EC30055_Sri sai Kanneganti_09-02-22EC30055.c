#include<stdio.h>
#include<stdlib.h>
typedef struct v {
  int *a ;
} vector ;
int comp(vector a1,int n,vector b1);
vector read(int n);
int main()
{
 int n,n1,r;
 scanf("%d",&n);
 vector a1,b1 ;
 a1.a=(int*)malloc(n*sizeof(int));
 a1=read(n);
 scanf("%d",&n1);
 b1.a=(int*)malloc(n1*sizeof(int));
 b1=read(n1);
 if(n==n1){
 r=comp(a1,n,b1);
 } else {
  printf("\n size of vectors are not same ");
  return 0 ;
 }
 if(r==0)
    {
      printf("\n orthogonal vectors");
    }
 if(r==1)
    {
     printf("\n idential vectors");
    }
 if(r==2)
    {
      printf("not identical not orthogonal");
    }
    return 0 ;
}
vector read(int n)
{
    vector v ;
v.a=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
{
  scanf("%d",&v.a[i]);
}
 return v ;
}
int comp(vector a1,int n,vector b1)
{
    int s=0,s1=0,s2=0 ;
  for(int i=0;i<n;i++)
  {
      s=s+(a1.a[i])*(b1.a[i]);
  }
  s=s*s ;
    for(int i=0;i<n;i++)
  {
      s1=s1+(a1.a[i])*(a1.a[i]);
  }
    for(int i=0;i<n;i++)
  {
      s2=s2+(b1.a[i])*(b1.a[i]);
  }
  if(s==0)
    {
      return 0 ;
    } else {
  if(s==(s1*s2))
    {
      return 1 ;
    } else {
     return 2 ;
    }

}}
