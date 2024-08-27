#include<stdio.h>
int main()
    {
        int n,i,sum,a,b,c;
        scanf("%d",&n);
        sum=0;
        a=1,b=1;
        
        for(i=2;i<=n;i++){
        c=a+b;
        a=b,b=c;
        printf("c");}
        
        
        
        
        if (n<=0)
          {
              printf("N is invlid");
          }
        return 0;
    }          
