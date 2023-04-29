#include<stdio.h>
int primecheck(int i)
{
   int j,c=0;
   for(j=2;j<=i;j++)
   {
       if(i%j==0){c=c+1;}
   }
   if(c==1){return(i);}
   else return 0;

}
int main()
{
    int n,k,p,u,r,s=0;
    scanf("%d",&n);
    for(k=2;k<=n;k++)
    {
       p=primecheck(k);
       if(p==k)
       {
           u=n-p;
           if(u>0){
           r=primecheck(u);
           if(r==u){
              printf("%d,%d\n",p,u);k=n;s=1;;
           }}
       }
    }
    if(s==0){printf("-1");}

}