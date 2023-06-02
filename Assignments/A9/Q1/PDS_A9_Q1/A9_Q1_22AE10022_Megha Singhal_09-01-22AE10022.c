#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1,a,t,s=0;
    printf("Value of n: ");
    scanf("%d",&n);
    if(n>=0)
    {
        while(1)
        {
            t=s;
              s+=i;
              i=t;
              if(s==n)
                {
                    printf("%d is a Fibonacci number",n);
                    break;
                }
               else if(n<s&&n>t)
                {
                        a=(s+t)/2;
               if(n<=a)
                    printf("Nearest Fibonacci number is %d",t);
               else printf("Nearest Fibonacci number is %d",s);break;
               }
        }
    }
    else printf("Please give positive number");

    return 0;
}
