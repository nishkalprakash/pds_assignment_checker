#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,a,h;
    int sum=0,r,l,j;
    printf("enter a integer\n");
    scanf("%d",&n);

  while(n<1)
  {
      printf("wrong input enter again\n");
      scanf("%d",&n);
   }
     a=n;
  while(n>0)
  {
      r=n%10;
      sum=(sum*10)+r;
      n=n/10;
  }
  t=(a-sum);
  if(t<0)
  {
     l=(0-t);
     printf("absolute difference between numbers is %d\n",l);
  }
  else
  {
      printf("absolute difference between numbers is %d\n",t);
  }
  if(a%2==0)
   {
       int f;
       int k;
       int p;
        j=a;
        p=0;
        f=j;
    while(j>0)
    {
        p++;
        j=j/10;
    }
        k=pow(10,p-1);

   while(f>0)
     {
        printf("%d\t",f);
        f=f%k;
        k=k/10;
       }

   }
  else
  {
      h=a;
      int u,g;
    int q;
    int z=0;
    u=h;
    while(u>0)
    {
        z++;
        u=u/10;
    }
   q=pow(10,z-1);
   while(q>=1)
    {

        g=h/q;
        printf("%d\t",g);
        q=q/10;
    }

  }
    return 0;
}
