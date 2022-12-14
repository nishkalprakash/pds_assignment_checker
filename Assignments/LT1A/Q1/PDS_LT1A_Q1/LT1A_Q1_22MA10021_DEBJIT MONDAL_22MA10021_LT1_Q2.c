#include <stdio.h>
int pnmbr(int n){
int i,j,temp1,sum=0;
for(i=1;i<n;i++)
{
    if(n%i==0)
    {
    temp1=i;
    sum=sum+i;
    
    }
   
}
if(sum==n) return n;
else return 0;
}
int main()
{
int k=6,l,output;
for(k=1;k<=l;k++)
{
printf("%d",pnmbr(k));
}
return 0;
}

