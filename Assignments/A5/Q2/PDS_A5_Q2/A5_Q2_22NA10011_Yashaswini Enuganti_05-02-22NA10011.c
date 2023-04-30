#include<stdio.h>
#include<math.h>
int primecheck(int i)
{
  int j,k=0;
  j=2;
  while(j<sqrt(i))
  {
      if(i%j==0)
       {
           k=1;

       }
      j++;
  }

    return k;
}
int main()
{
  int i,n,p,q,a,b,c;
  printf("Enter a number");
  scanf("%d",&n);

  if(n%2==0 && n>=4)
    {
        for(p=2;p<n;p++)
          {
            q=n-p;
            a=primecheck(p);
            b=primecheck(q);
            c=a+b;
            if(c==0)
             {
                printf("%d,%d",p,q);
                break;
             }


        }

    }
    else
        {
          printf("-1");
        }


}
