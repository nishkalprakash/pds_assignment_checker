#include<stdio.h>
int main()
{
    int a,b,c=0,n,d,dif,dif1;
    printf("Enter the value:");
    scanf("%d",&n);
    if(n>0)
    {
        a=0;
        b=1;
        while(c<n){
            c=a+b;
            a=b;
            b=c;
       }
       if(c==n)
        {
          printf("%d is a fibonacci number",c);
          return ;
        }
        dif=n-c;
        d=b+c;
        dif1=d-n;
        if(dif<dif1)
            {
              printf("Nearest Fibonacci number %d",c);
            }
        else printf("Nearest Fibonacci number %d",d);


    }else printf("Please give positive number");

}
