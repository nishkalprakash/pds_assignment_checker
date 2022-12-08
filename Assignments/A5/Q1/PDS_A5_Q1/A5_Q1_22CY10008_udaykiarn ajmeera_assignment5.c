/*NAME:AJMEERAUDAYKIARN
 ROLL NO:22CY10008
 ASSIGMENT NO:5
 DESCRIPTION:TO FIND THE SUM OF SERIS*/

#include<stdio.h>
   
    int power(int x,int n){
    int a,d=1;
    for(a=1;a<=n;++)
    d=d*a;
    return 0;
}
   int factorial(int n){
   int i,t=1;
   for(i=1;i<=n;i++)
     t=t*i;
   return(t);
}
 int main(){
 int x,n,sum=0;
 printf("enter any value of x:");
 scanf("%d,&x);
 printf("enter any value of n:");
 scanf("%d",&n);



 double p=power(x,n);
 double f=factorial(n);
 for(x=0;x<=n;++x)
 sum=sum+p/f;{

 printf("sum of the series is %d",sum);
} 
 return 0;
}
