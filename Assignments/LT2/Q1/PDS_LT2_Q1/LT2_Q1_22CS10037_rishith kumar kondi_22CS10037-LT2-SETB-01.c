#include<stdio.h>
#include<stdlib.h>
int max(int *a,int m,int n)
{
    int m1,m2;
    if(n==m){return a[n];}
   m1=max(a,m,n-((n-m)/2)-1);
   m2=max(a,n-(n-m)/2,n);
   if(m1>m2){return m1;}
   else return m2;
}
int main()
{
    int n,p,q,i=0,t,j,k,m;
    scanf("%d",&n);
    scanf("%d %d",&p,&q);
    t=q-p+1;
    int a[n];
    do{
        j=rand()%t+p;
        a[i]=j;i++;
    }
    while(i<n);
    m=max(a,0,n-1);
    for(k=0;k<n;k++){
    printf("%d\n",a[k]);}
    printf("\n %d",m);
}
