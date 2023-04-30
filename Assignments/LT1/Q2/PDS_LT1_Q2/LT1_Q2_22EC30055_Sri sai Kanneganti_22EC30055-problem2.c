#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,c,d,i=0,r=0,a,diff,t,u=2,s ;
    printf("Enter the integer:");
    scanf("%d",&n);
    if(n<0)
        {
        n=n*(-1);
    u=1 ;
        }
    c=n%2 ;
    p=n ;
    int k=1 ;
    while(p>0)
{
   p=n/(k)  ;
   k=k*10;
   i++;
}
    a=n ;
for(int v=i-2;v>=0;v--)
    {
   t=pow(10,v);
  r=r+ (a/t)*pow(10,i-2-v) ;
  a = a%t ;
}
 if(c==0)
    {
       for(int g=i-2;g>=0;g--)
       {
           d= n/pow(10,g);
           printf("%d,",d);
       }
       printf("\n");
    }
     if(c==1)
    {
       for(int k=i-1;k>0;k--)
       {
           t=pow(10,k);
           d= n%t;
           printf("%d,",d);
       }
       printf("\n");
    }
    s=pow(-1,u) ;
    printf("Reverse number = %d\n",r*s);
    diff=r-n ;
    if(diff<0){
        diff=diff*(-1);
    }
    printf("Difference between reverse and original number = %d",diff);
    return 0 ;
}
