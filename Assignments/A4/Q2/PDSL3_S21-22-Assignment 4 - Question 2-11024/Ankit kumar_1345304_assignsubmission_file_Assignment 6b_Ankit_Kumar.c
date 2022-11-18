/*Ankit kumar
Roll no.21MI10010
Department: Mining Engineering*/
#include <stdio.h>
int f(int n,int k,int m,int curl,int curi){
if(curl==k){
    if(curi>n) return 0;
    return 1;
}
if(curl>k) return 0;
int ans=0;
for(int i=1;i<=m;i++){
 ans+=(f(n,k,m,curl+i,curi+1));
}
return ans;
}
int main()
{
 int n,k,m;
 scanf("%d %d %d",&n,&k,&m);
 int ans1=f(n,k,m,0,0);
 printf("%d", ans1);
}

 
    

    
